/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17657
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */long long int) 1043144126);
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(var_10))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_5] = ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_2 + 1])) && (((/* implicit */_Bool) var_8)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12288))) + (-4820332238509092692LL))));
                                var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((-1184084672575489666LL) - (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) % (min((max((((/* implicit */unsigned long long int) (unsigned char)33)), (var_0))), (((/* implicit */unsigned long long int) -4820332238509092694LL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        var_17 |= ((/* implicit */unsigned char) var_3);
                        arr_21 [i_1] = ((/* implicit */unsigned char) var_2);
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_8))));
                        var_19 = ((/* implicit */unsigned char) var_12);
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)13)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_6] [i_1] [i_6] [i_6 - 1] [i_1 - 2] [i_6])))))))));
                    }
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        var_21 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_14 [i_0] [i_1 - 1]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_7 + 2] [i_7] [i_7 - 1] [i_7]))))), ((~(5331233863341612209ULL)))));
                        arr_24 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 65472U)))) : (4820332238509092692LL))), (((/* implicit */long long int) max((4294901824U), (((/* implicit */unsigned int) -1744303889)))))));
                    }
                    var_22 *= ((/* implicit */unsigned char) min(((~(var_10))), (((var_3) & (((/* implicit */int) arr_23 [i_0] [i_1 - 2] [i_1 - 2] [i_2]))))));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_2 - 1] [i_1 + 1] [i_2 + 1])) + ((~(var_13)))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */long long int) var_11);
    var_25 |= ((/* implicit */long long int) var_13);
    var_26 = ((/* implicit */unsigned long long int) var_10);
    var_27 *= ((/* implicit */unsigned short) var_10);
}
