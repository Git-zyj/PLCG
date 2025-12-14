/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177798
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
    var_20 &= ((/* implicit */int) ((unsigned long long int) 1046887414U));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */int) ((unsigned char) ((1046887424U) << (((((/* implicit */int) (short)-1)) + (15))))));
                        arr_11 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0])))))) : (arr_5 [i_2 - 1])));
                        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (arr_4 [i_1] [i_2]) : (arr_6 [i_2] [i_0] [8])))) : (((unsigned long long int) arr_6 [i_0] [i_0] [i_2]))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_2] [i_2 + 1])) : (((((/* implicit */_Bool) arr_9 [i_0] [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) : (arr_2 [i_0 - 1] [i_0 - 1])))));
                    }
                    arr_13 [i_0] [i_1] &= ((/* implicit */short) ((unsigned long long int) 0));
                    arr_14 [i_2] = ((/* implicit */int) arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) arr_17 [i_2] [i_1] [i_2] [i_4] [i_5] [i_1] [i_2]);
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 ^= ((/* implicit */long long int) ((signed char) arr_4 [(unsigned char)1] [i_0 + 1]));
        arr_20 [5ULL] = ((/* implicit */unsigned long long int) ((signed char) ((int) -1827840367993800537LL)));
    }
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((long long int) ((unsigned char) 4294967295U))))))));
}
