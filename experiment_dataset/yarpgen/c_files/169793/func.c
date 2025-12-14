/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169793
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_2 - 1] [i_1])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_2 - 1] [i_4 + 2]))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 1] [i_3] [i_4])) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2 - 1] [i_2])))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_2 - 1] [i_4])) ? (arr_10 [i_0] [i_1] [i_0] [i_3] [i_4 + 2]) : (((/* implicit */long long int) arr_7 [i_0] [i_1 - 2] [i_2] [i_1 - 2])))) : (((arr_0 [i_0] [i_0]) ? (arr_10 [i_0] [i_1 + 3] [i_2 - 1] [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 - 2] [i_3] [i_3] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 3] [i_1 + 1])) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 3] [i_2])) ? (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2] [i_2 + 1] [i_2] [i_1 + 2] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1 + 1] [i_2]))) : (arr_10 [i_0] [i_1 - 2] [i_1 - 2] [i_2] [i_2])))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9)))) ? (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))) : (var_5)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        for (short i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) ((arr_11 [i_6] [i_6 + 1] [i_5] [i_5 + 1] [i_5 + 2] [i_5]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_6] [i_6 + 1] [i_5]))) : (arr_7 [i_5] [i_5] [i_6] [i_6])))) ? (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_6])) ? (arr_2 [i_5 - 1] [i_5 - 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6 - 2] [i_6] [i_6] [i_5 + 2] [i_5]))))) : (((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_5 + 2] [i_5])) ? (arr_10 [i_6 + 1] [i_6] [i_5] [i_6] [i_6]) : (arr_16 [i_5] [i_5] [i_5 + 2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5 + 2] [i_6])) ? (((/* implicit */int) arr_11 [i_5] [i_5 - 1] [i_5] [i_6 - 1] [i_6 - 1] [i_6 - 2])) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5 + 2] [i_6]))))) ? (((arr_0 [i_5] [i_6 - 2]) ? (((/* implicit */int) arr_3 [i_5 + 1] [i_6 - 2] [i_6 + 1])) : (((/* implicit */int) arr_0 [i_5 + 1] [i_6 + 1])))) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_5 - 1] [i_5] [i_5 + 1])))))));
                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_6 + 1] [i_6])) ? (((((/* implicit */_Bool) arr_7 [i_5] [i_5 + 2] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_3 [i_6] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_3 [i_5 + 2] [i_6 - 1] [i_6])))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_0 [i_6] [i_5])) : (((/* implicit */int) arr_4 [i_6 + 1] [i_6] [i_5] [i_6]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 2]))) : (((((/* implicit */_Bool) arr_2 [i_6] [i_6] [i_6 - 1])) ? (((arr_9 [i_5 - 1] [i_5] [i_5 - 1] [i_5]) ? (arr_1 [i_6 + 1]) : (((/* implicit */unsigned long long int) arr_13 [i_6 - 2] [i_5])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_5] [i_5]))))));
                var_25 |= ((/* implicit */short) arr_1 [i_6 - 1]);
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_13)))))) ? (((((/* implicit */_Bool) (unsigned short)43317)) ? (((/* implicit */unsigned long long int) 0U)) : (1674639158206332473ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_10) : (var_5)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_6)))))));
}
