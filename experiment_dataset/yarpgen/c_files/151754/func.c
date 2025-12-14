/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151754
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) * (var_9))) * (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) / (var_10))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_16 = ((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) var_13)));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-7378293603598531703LL) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)(-127 - 1))) + (128)))))) ? (((((/* implicit */unsigned long long int) 36028797018963967LL)) % (10268474341374446820ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */_Bool) (+(arr_7 [15ULL] [i_2] [i_1])));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4 + 1] [i_4] [i_4 + 3])) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) arr_15 [i_3] [i_0] [i_3] [i_0] [i_2] [i_0] [i_0]))))));
                            var_17 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (arr_5 [i_0] [(_Bool)1] [(_Bool)1] [i_4 + 3])))) : (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_6 [3LL] [i_1] [i_1]))))));
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((arr_14 [i_0] [(short)10] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_18 -= ((((/* implicit */int) arr_11 [i_5] [i_3] [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_1])));
                            arr_22 [i_0] [i_1] [i_0] [i_3] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_5] [i_3] [i_2] [(_Bool)1]))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_1] [i_5]))));
                        }
                        var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) var_1)) / (arr_5 [i_0] [i_1] [i_2] [i_3])));
                        var_21 = arr_13 [i_0] [i_0] [i_1] [i_2] [(short)2] [i_3];
                    }
                }
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [0] [i_0] [i_1]))) - (((unsigned long long int) max((arr_2 [i_0] [12LL] [i_0]), (((/* implicit */short) arr_8 [i_1] [i_1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_6);
    var_24 = ((/* implicit */unsigned long long int) var_2);
}
