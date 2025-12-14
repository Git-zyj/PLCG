/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162157
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */int) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) var_8))))), (((((/* implicit */int) var_5)) * (arr_1 [i_0])))))) < (((((/* implicit */long long int) 4044610406U)) & (-4704918914909148263LL)))));
                var_11 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_2)) : (4044610406U)))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) min(((short)21073), (((/* implicit */short) (_Bool)1)))))) & (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (4294967295U)))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) (-2147483647 - 1))) & (2492673755U))));
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-21075)), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) / (4044610395U))) / (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                }
                /* LoopNest 2 */
                for (short i_3 = 2; i_3 < 10; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_3] [i_3] [i_0]) / (((/* implicit */unsigned int) arr_2 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0]))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))))));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_5])) != (arr_2 [i_5])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_18 = ((433442738U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) < ((-2147483647 - 1)))))));
                                var_19 = arr_7 [i_0] [i_6 + 1] [i_5];
                                var_20 = ((/* implicit */signed char) (+(250356888U)));
                                var_21 -= ((/* implicit */signed char) arr_6 [(short)6] [(short)6]);
                                var_22 = ((int) arr_11 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 1]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_23 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [8U])) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1] [2U]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_2) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (5725)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))));
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((unsigned short) (-(arr_9 [i_0] [i_0] [4LL] [i_10]))))));
                            var_26 = ((/* implicit */long long int) arr_23 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                            arr_26 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_8])) ? (var_2) : (((((/* implicit */int) var_7)) % (((/* implicit */int) (_Bool)1))))));
                            arr_27 [i_0] [i_1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)0));
                        }
                        for (signed char i_11 = 3; i_11 < 10; i_11 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) (+((+(arr_25 [i_8])))));
                            var_28 += ((long long int) 250356879U);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_8] [i_0] [i_11 - 2] [i_8])) << (((250356884U) / (arr_9 [i_0] [i_0] [i_8] [i_8])))));
                            var_30 ^= ((/* implicit */unsigned char) var_8);
                        }
                        for (int i_12 = 3; i_12 < 10; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned short) arr_21 [i_0] [i_1] [i_0] [i_0] [i_8] [i_12 + 1]);
                            var_32 += ((/* implicit */long long int) (_Bool)1);
                        }
                    }
                    arr_34 [i_8] [i_1] [i_1] = ((/* implicit */unsigned short) ((var_4) >> (((((unsigned long long int) arr_3 [i_0])) - (40ULL)))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */short) var_2);
}
