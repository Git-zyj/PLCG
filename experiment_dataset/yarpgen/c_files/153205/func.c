/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153205
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
    var_10 *= var_3;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_1 [i_0] [8]))));
                var_12 *= ((/* implicit */unsigned short) ((short) (_Bool)1));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_13 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_3 [i_0 - 1] [i_0 - 1])))));
                    var_14 += ((/* implicit */signed char) ((long long int) ((long long int) var_9)));
                }
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) 2054456867)) & (var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)8]))) : (((((/* implicit */long long int) (-(3870048974U)))) / ((-(var_0)))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) arr_2 [i_5] [i_3]);
                                var_16 *= ((/* implicit */short) ((unsigned char) 3870048985U));
                            }
                        } 
                    } 
                    arr_20 [i_1] [(_Bool)1] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_6);
                    var_17 += ((/* implicit */unsigned short) arr_5 [i_0]);
                }
                arr_21 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_19 [i_0] [i_1])) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 424918340U))))))) * (((((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1])) << (((/* implicit */int) arr_8 [i_0] [i_1]))))));
            }
        } 
    } 
}
