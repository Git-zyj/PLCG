/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113777
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((var_0) * (min((var_15), (((/* implicit */unsigned int) var_8))))))))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((min((11759974795440818926ULL), (((/* implicit */unsigned long long int) 2505587018U)))) ^ (((/* implicit */unsigned long long int) (~(var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_3 [i_0])))) ? (((((/* implicit */long long int) var_15)) | (arr_3 [i_0]))) : (max((((/* implicit */long long int) var_5)), (arr_3 [(signed char)14])))));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2]))))), (max((((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) var_11)))), (((/* implicit */int) arr_4 [i_0] [(signed char)24] [i_2]))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (-(18446744073709551610ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_3 - 1]))));
                        arr_12 [i_3] [i_2] [i_1] [i_0] [i_0] [(unsigned char)19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)20] [i_3 - 2] [i_3 + 3] [i_3] [i_3 - 1])) ? (arr_10 [i_2] [1U] [(_Bool)1] [i_2] [i_3 + 4]) : (arr_10 [i_3] [(signed char)22] [i_3 + 3] [(signed char)6] [i_3 + 4])));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        arr_15 [i_4] [(signed char)11] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_10 [i_4 - 2] [i_4 + 3] [i_4 + 3] [i_4] [i_4 + 2]) : (arr_10 [i_4] [i_4 + 2] [(unsigned char)14] [i_4] [i_4 - 2])));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_22 ^= ((/* implicit */unsigned char) (~(arr_16 [i_0] [i_4 + 4] [i_4 - 2] [i_4 + 3] [i_4 + 4])));
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_1)))));
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_4 + 3] [(_Bool)0] [5LL] [i_5] [5LL]))));
                            var_25 = ((/* implicit */int) ((unsigned char) var_17));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (arr_16 [i_0] [i_1] [i_0] [i_1] [i_1])))) ^ (((/* implicit */int) arr_9 [i_4 + 4] [i_4 + 1] [i_1] [9U])))))));
                            arr_20 [17] [i_4 + 2] [(signed char)6] [i_0] = var_3;
                        }
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_4 - 2] [i_4 + 4] [i_4] [1ULL]))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */int) ((var_4) % (((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned char)235)))) + (2147483647))) >> (((((/* implicit */int) max((var_12), (var_8)))) + (44))))))));
}
