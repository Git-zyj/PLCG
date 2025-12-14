/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185356
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 - 1])) ? (9133220754673816179ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 1]))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9313523319035735427ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) min((((/* implicit */short) (signed char)24)), (arr_0 [i_1] [i_0])))))))));
                var_20 &= ((/* implicit */unsigned char) arr_5 [i_0] [i_1 - 2]);
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) min((arr_0 [i_2 - 1] [i_0]), (arr_0 [i_2 - 1] [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-96))) ^ ((-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_22 &= ((/* implicit */_Bool) arr_3 [i_0 + 2]);
                                var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) arr_10 [i_3 + 1])) : (arr_11 [i_4 - 4] [i_0] [i_2 - 1])))));
                                var_24 = ((/* implicit */int) arr_3 [i_1 + 1]);
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? ((-(((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned char)230)))))) : (597264101)));
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */unsigned char) min(((((~(arr_5 [(signed char)9] [(unsigned char)10]))) + (max((9133220754673816189ULL), (9133220754673816194ULL))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (9313523319035735427ULL)))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_14)));
    var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (min((min((((/* implicit */unsigned long long int) var_6)), (var_14))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)1)))))))));
}
