/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180737
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))), ((-(var_7))))))))));
    var_12 += ((/* implicit */unsigned int) min((((((((/* implicit */long long int) var_5)) - (9223372036854775807LL))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 7006827885814524574ULL)))))), (((/* implicit */long long int) var_2))));
    var_13 += ((/* implicit */unsigned short) ((long long int) var_6));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */_Bool) 4294967295U);
            var_14 = (!(((/* implicit */_Bool) ((unsigned int) var_3))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) arr_4 [i_0] [4ULL] [4ULL]))))) : (((long long int) (_Bool)1))))) ? (((long long int) var_2)) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65529)))) ? (max((2147483622), (((/* implicit */int) (_Bool)1)))) : (var_9))))));
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)0))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 2U))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_8))))))) ? ((+(var_3))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_1)))), (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))) : (1159765725U))))))));
        }
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-127)) | (((/* implicit */int) (unsigned short)6))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) (!(arr_11 [i_0 - 1] [i_0])));
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((arr_11 [i_3 + 1] [i_5]) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                        arr_19 [i_3] [i_3 - 1] [i_0] = ((((/* implicit */_Bool) (unsigned short)65532)) ? (var_5) : (((/* implicit */unsigned int) (+((-2147483647 - 1))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [(unsigned char)1] [i_0] [i_3] [i_0] [i_0 - 2] = (!((_Bool)1));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 7; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_7 - 2])) <= (((/* implicit */int) (unsigned short)65535))));
                            var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) arr_16 [i_6] [i_3 - 1] [i_0 - 1] [i_6]))));
                            var_21 = ((/* implicit */unsigned short) ((unsigned int) 2U));
                        }
                        arr_27 [i_0] [(signed char)2] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [2U] [2U])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (arr_25 [(unsigned char)4] [(unsigned char)4]))))));
                        var_22 *= ((/* implicit */unsigned long long int) var_10);
                        arr_28 [i_0] [i_0] [3ULL] = ((/* implicit */_Bool) var_9);
                    }
                    var_23 ^= (-(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_4 [i_3 + 2] [i_0] [i_0])))));
                    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (max((((/* implicit */int) (unsigned short)0)), (536870911))))), ((~(((var_2) ? (536870911) : (((/* implicit */int) var_6))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 2; i_8 < 6; i_8 += 1) 
                    {
                        var_25 &= ((/* implicit */unsigned short) ((unsigned char) (unsigned short)51846));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((max(((_Bool)1), (((((/* implicit */int) var_8)) <= (2147483647))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967294U))))));
                        arr_32 [i_0] [i_0] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) var_10);
                    }
                    for (int i_9 = 2; i_9 < 9; i_9 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_4 + 1] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)50037);
                        arr_36 [i_4] [i_4] [i_0] [i_4 + 1] [i_4] [1U] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_31 [5U] [i_0] [i_0 - 1] [i_4 - 1])) ? (arr_2 [i_0]) : (((/* implicit */int) var_10)))) != (((/* implicit */int) var_8)))) ? (((arr_22 [i_0] [i_0] [i_0] [i_9 - 2]) >> (max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_10 = 3; i_10 < 7; i_10 += 3) 
                        {
                            arr_39 [i_0] [i_3] [i_4] [i_0] [i_10] = ((/* implicit */long long int) var_8);
                            var_27 = ((/* implicit */int) 4294967289U);
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (var_4) : (55352569U)))) ? (arr_12 [i_0] [i_9 - 1] [i_9 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) -84357423)) ? (arr_13 [i_0 - 1] [i_0] [i_9 + 1] [2]) : (arr_13 [i_0] [i_0] [i_9 + 1] [i_9])));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_30 -= (!(((/* implicit */_Bool) arr_37 [i_9 - 2] [i_11])));
                            var_31 = ((/* implicit */unsigned long long int) var_7);
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                            arr_47 [i_12] [i_0] [(unsigned short)4] [i_0] [(_Bool)1] = ((/* implicit */long long int) ((unsigned int) (~(var_4))));
                            var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((6755399441055744LL), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) 0U)) ? (arr_33 [i_0 + 1] [i_12] [i_0 + 1] [i_0 - 3] [(signed char)0]) : (((/* implicit */int) (unsigned short)50037)))) : ((((_Bool)0) ? (arr_33 [i_0 + 2] [i_12] [i_3] [i_4] [i_0 + 2]) : (((/* implicit */int) var_8))))));
                            arr_48 [0U] [0U] [i_0] [0U] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) - (((unsigned long long int) var_10))))));
                        }
                        /* vectorizable */
                        for (long long int i_13 = 1; i_13 < 7; i_13 += 3) 
                        {
                            var_34 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (-4706471962955414162LL) : (((/* implicit */long long int) var_4)));
                            arr_52 [i_0] [i_0] [i_4 - 2] [i_0] = (!(((/* implicit */_Bool) -2425420325473256086LL)));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */int) var_0)) : ((-(arr_33 [i_0] [i_0] [i_0] [i_0] [i_13])))));
                        }
                        arr_53 [i_0] [i_4 - 2] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_4 - 1] [i_4 - 1])) ? (max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 802273392)) >= (3525616505U))))));
                    }
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_7)), (arr_46 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (~(-84357423))))))) ? (((/* implicit */unsigned long long int) arr_34 [(_Bool)1] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_7 [i_0 - 4] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) : (((unsigned long long int) arr_12 [i_0] [i_0] [i_0]))))));
        arr_54 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0 - 4])) ? (1071644672U) : (((/* implicit */unsigned int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) var_4)) ? (var_5) : (var_4))))) >> (((min((922767732), (arr_20 [i_0] [i_0] [(unsigned short)2] [i_0]))) + (87338753)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 2) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))));
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? ((~(((/* implicit */int) (unsigned short)13704)))) : ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (var_9)))))));
            }
        } 
    } 
}
