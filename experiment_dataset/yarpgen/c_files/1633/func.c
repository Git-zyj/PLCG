/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1633
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
    var_18 = ((/* implicit */int) ((((_Bool) ((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) min((var_12), (var_4)))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (((((/* implicit */_Bool) var_1)) ? (0ULL) : (var_11)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 10; i_4 += 4) 
                            {
                                var_19 = arr_11 [(unsigned char)3] [i_4] [i_3] [i_2] [i_1] [i_0];
                                var_20 += ((((/* implicit */_Bool) arr_10 [i_4 - 4] [i_4] [(unsigned short)5] [i_4 + 1] [i_4 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_4] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_10 [i_4 - 2] [(unsigned char)5] [(unsigned char)5] [i_4 + 1] [i_4])));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_15 [(short)2] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) arr_2 [i_1] [i_2]))));
                                arr_16 [i_5] [i_3] [i_2] [(short)5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_1]);
                                var_21 = ((/* implicit */unsigned char) 241595867);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 4) 
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_1] [i_6 - 1] [i_3] = ((/* implicit */unsigned short) ((arr_14 [i_0] [i_1] [i_2] [i_3] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (arr_12 [i_0])))))));
                                var_23 += ((/* implicit */signed char) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                                var_24 ^= ((/* implicit */unsigned char) ((3076583554130641009LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))));
                                var_25 = ((/* implicit */unsigned long long int) max((var_25), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) : (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4748)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_14 [3ULL] [i_6 - 1] [i_6] [i_6 - 2] [i_6]);
                            }
                        }
                    } 
                } 
                arr_22 [i_0] [i_0] = ((((min((((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (-3076583554130641010LL))) + (9223372036854775807LL))) << (((((((/* implicit */int) var_9)) + (87))) - (15))));
            }
        } 
    } 
}
