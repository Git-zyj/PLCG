/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112658
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned char) var_4);
                        arr_12 [i_0] [7LL] [0ULL] [i_3] [7LL] = ((/* implicit */unsigned long long int) arr_7 [i_3] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_6 [i_0] [6U]))));
                        arr_17 [i_0] = ((/* implicit */short) arr_11 [i_0] [i_0] [5U] [i_0]);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                        {
                            var_15 |= ((/* implicit */long long int) arr_22 [i_0] [8U] [i_6 + 2] [i_0] [i_6]);
                            var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_2] [i_6 + 2])))))) ? (((/* implicit */long long int) ((unsigned int) arr_22 [(signed char)7] [i_1] [4U] [i_1] [i_1]))) : (max((var_10), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) ((short) arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 + 1] [i_0])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_17 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_2] [i_5] [i_7])) ? (((((/* implicit */int) arr_23 [i_0] [(short)8] [i_2] [i_7])) % (((/* implicit */int) var_5)))) : (-348801676))));
                            var_18 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_2] [(signed char)7] [i_7]);
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_19 [i_0] [i_1] [i_1] [i_5] [i_5]))));
                        }
                        for (long long int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            arr_29 [i_0] = min((arr_11 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) 348801691)));
                            arr_30 [i_0] [i_0] [i_2] [(unsigned short)0] [(unsigned short)0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((arr_1 [i_0]) % (arr_1 [i_8 + 1])))), (max((((/* implicit */long long int) arr_27 [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])), (max((var_0), (((/* implicit */long long int) arr_15 [3LL] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                            arr_31 [i_0] [i_0] [i_1] [i_1] [i_0] = ((unsigned int) (short)17666);
                            arr_32 [i_0] [i_0] [i_0] [i_5] [(unsigned char)5] = ((/* implicit */unsigned short) max((((long long int) min((((/* implicit */unsigned int) var_8)), (var_2)))), (((((arr_26 [i_0] [i_8 - 1] [i_8 + 1] [i_8 + 3] [i_8 + 1]) + (9223372036854775807LL))) << (((((arr_8 [i_5] [i_1] [i_8 - 1] [i_5] [i_8] [i_1]) + (8554305896642023952LL))) - (57LL)))))));
                        }
                        var_20 ^= ((/* implicit */unsigned long long int) ((min((arr_8 [i_0] [i_1] [(short)4] [i_2] [(short)4] [i_5]), (var_0))) - (((long long int) arr_8 [i_5] [i_5] [i_2] [i_1] [i_0] [i_0]))));
                        var_21 = ((/* implicit */int) ((max((arr_20 [i_5] [(unsigned char)8] [(unsigned char)8] [i_0]), (arr_20 [i_5] [(signed char)2] [(signed char)2] [i_0]))) - (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [9LL] [(signed char)10] [(signed char)10] [(signed char)10] [i_5]))) / (var_2))), (((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_1] [6ULL] [i_5])))))));
                        var_22 = max((var_7), (((/* implicit */unsigned long long int) var_0)));
                        var_23 = var_1;
                    }
                    arr_33 [i_0] [(signed char)7] = ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) max((348801675), (((/* implicit */int) (short)32767)))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((signed char) -662427324193614867LL));
}
