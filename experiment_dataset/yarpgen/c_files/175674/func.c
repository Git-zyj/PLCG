/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175674
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
    var_11 *= ((/* implicit */_Bool) ((var_5) << (((/* implicit */int) ((var_0) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (-1631184646850874852LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_12 *= ((/* implicit */short) (~((-(((/* implicit */int) (short)-32748))))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])) - (((/* implicit */int) (short)-32748))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) (short)-6557))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 13988847443098206537ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_3] [i_4])) : (1648012401))), (((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) : (-1234466659)))))))))));
                                arr_12 [i_0] [i_1] [i_4] [i_0] [i_4] [i_1] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((-2635460571118036717LL), (((/* implicit */long long int) (short)-32748))))) ? (arr_6 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)8201))))))) > (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_14 = ((/* implicit */unsigned short) arr_0 [i_0]);
                                var_15 = ((/* implicit */short) arr_4 [i_3] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    arr_16 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) arr_1 [i_1]);
                    arr_17 [i_5] [i_1] [i_1] [i_0] = (unsigned char)126;
                }
                for (unsigned short i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    var_16 = ((/* implicit */signed char) (unsigned short)8199);
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_9 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_11 [i_6 - 2] [i_6] [i_6 - 3] [i_6] [i_6 - 2])) ? (((/* implicit */int) arr_11 [i_6 + 1] [i_6] [i_6 - 3] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_11 [i_6 - 2] [i_6] [i_6 - 3] [i_6] [i_6 - 1]))))));
                    arr_20 [i_6] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    arr_21 [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 3] [i_6])) / (((/* implicit */int) arr_11 [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_6]))))) ? (((/* implicit */int) arr_11 [i_6 + 1] [i_6 - 2] [i_6] [i_6 - 3] [i_6])) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_11 [i_6 - 3] [i_6 + 1] [i_6] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_11 [i_6 - 3] [i_6 + 1] [i_6] [i_6 - 3] [i_6]))))));
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    arr_24 [i_0] [i_1] [i_7] |= ((/* implicit */int) arr_23 [i_7] [i_1] [i_0]);
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (1388488143430802346LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_6 [i_7] [i_7] [i_1] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_1] [i_1] [i_0] [i_0])))))))))))));
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_0] [i_7] [i_7])) ? (arr_5 [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0])))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_3))));
    var_21 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_2)))), (var_9)))));
}
