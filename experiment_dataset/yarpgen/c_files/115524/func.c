/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115524
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) > ((~(((/* implicit */int) (signed char)-99)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_15 -= ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) % (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))));
                    var_16 = ((/* implicit */long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((short) (unsigned short)65531))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59968)))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_6 [i_3] [i_1] [i_3] [i_4]))));
                            }
                        } 
                    } 
                }
                var_19 = max((((/* implicit */long long int) var_3)), (arr_5 [i_1] [i_0] [i_0]));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((min((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))));
                var_20 += ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
}
