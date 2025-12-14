/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148657
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
    var_15 = ((/* implicit */long long int) (+(max((((/* implicit */int) min((var_10), (var_14)))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9LL)))) ? (((/* implicit */int) max(((unsigned short)14138), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) -1344169526)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (unsigned short)8991))));
                                var_18 = (!(((/* implicit */_Bool) 0ULL)));
                                var_19 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) var_9)) != (arr_8 [i_3] [i_3 + 2] [i_3] [i_3])))));
                                var_20 = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (_Bool)1))) > (((/* implicit */int) (_Bool)1))));
                            arr_18 [i_1] [i_1] [(unsigned char)5] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */long long int) arr_9 [i_6] [7U] [7U] [i_5]);
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22586)) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)65)) ? (arr_14 [i_0] [i_1]) : (arr_14 [5LL] [(unsigned short)2]))))));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((834453664U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))))))));
                        var_23 ^= var_0;
                    }
                    for (unsigned int i_7 = 3; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 - 1] [i_7 - 1] [i_7 - 3] [i_7 - 3]))));
                        arr_24 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((2147483136) / (((/* implicit */int) ((unsigned short) -516724470)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
                        {
                            var_25 ^= (~(((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_1] [7ULL]))))));
                            arr_27 [i_1] [i_1] [i_2 - 1] [(signed char)4] [i_7 - 2] [i_1] &= ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (3989508464427563323ULL) : (((/* implicit */unsigned long long int) (+(var_13)))));
                            arr_28 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)-102))))) != (((unsigned long long int) arr_14 [i_0] [i_0]))));
                            var_26 = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) var_2)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 8; i_9 += 1) 
                        {
                            arr_31 [i_7] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)43279))));
                            var_27 = ((/* implicit */short) var_5);
                            var_28 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_7] [6ULL]);
                            arr_32 [i_0] [i_7 + 1] [i_2 - 1] [i_7 - 1] [i_7 + 1] [i_1] [i_2] = arr_1 [i_7 + 1];
                        }
                        arr_33 [i_1] [i_2] = ((/* implicit */short) ((_Bool) (unsigned short)22586));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 *= ((/* implicit */_Bool) (unsigned char)255);
                        arr_37 [i_2] = ((/* implicit */int) (+(var_6)));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_41 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned int) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_10] [i_11 + 1]);
                            arr_42 [i_0] [i_2] [6U] [i_10] [4] = ((/* implicit */short) (-((~(var_13)))));
                            arr_43 [i_0] [i_2] [i_2 - 1] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_0);
                            var_30 = arr_16 [i_0] [i_2] [i_2] [i_0];
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_0] [i_1] [9] [i_10] [i_12])))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) : (var_3)))) ? (arr_36 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_10]) : (((/* implicit */int) ((signed char) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) || ((_Bool)1))))))) : (((((/* implicit */_Bool) arr_25 [(short)4] [i_1] [(short)4] [(short)4] [(short)4])) ? (arr_35 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_12] [i_1] [i_2 - 1] [i_10])) && (((/* implicit */_Bool) var_3)))))))))))));
                            var_33 = ((/* implicit */unsigned short) (signed char)127);
                            arr_46 [i_12] [i_2] [i_12] [i_2] [(unsigned short)5] [i_0] [i_12] = ((/* implicit */short) ((arr_34 [i_2] [5ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2] [i_10])))));
                            arr_47 [i_2] [9U] [i_10] [5] = ((/* implicit */unsigned int) var_5);
                        }
                        /* LoopSeq 3 */
                        for (int i_13 = 1; i_13 < 9; i_13 += 2) 
                        {
                            arr_51 [i_0] [i_2] = ((/* implicit */short) var_8);
                            var_34 ^= ((((/* implicit */_Bool) 1387795133U)) || (((/* implicit */_Bool) var_6)));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (~(arr_12 [i_2 - 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_14 = 1; i_14 < 10; i_14 += 2) 
                        {
                            var_36 += ((/* implicit */long long int) arr_14 [i_14 - 1] [i_2]);
                            arr_55 [i_2] [i_2] [i_2] [i_2] [i_2 - 1] = ((/* implicit */long long int) arr_21 [i_0]);
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            arr_58 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_10] [i_10]);
                            arr_59 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-97)) & (((/* implicit */int) (signed char)72))));
                        }
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */signed char) var_13);
}
