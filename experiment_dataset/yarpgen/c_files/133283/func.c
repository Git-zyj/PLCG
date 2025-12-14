/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133283
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_13 = (!(((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */short) var_1))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (unsigned short)6673)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_4] [i_3] [i_3])))))) == (((/* implicit */int) var_1))));
                                arr_13 [i_3] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)13] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13629848085000151358ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((2054974287366134345ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52529))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_9)))))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_11)))))) + (arr_6 [6] [6] [i_1] [i_0] [i_0] [i_1]))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_2)))))))));
            }
        } 
    } 
    var_15 += ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */signed char) var_7);
}
