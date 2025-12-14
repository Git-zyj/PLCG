/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160311
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_14)))) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_3] [i_1] = ((/* implicit */unsigned int) var_15);
                        arr_11 [i_3] [i_2] [i_3] [i_3] = (~(min(((~(((/* implicit */int) (signed char)-112)))), ((~(((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
                        arr_12 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
                        arr_16 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : ((((!(((/* implicit */_Bool) arr_3 [i_2])))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_4 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                        arr_17 [i_0] [i_1] [i_2] [i_4 + 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    }
                    for (int i_5 = 4; i_5 < 12; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) (+(max(((~(((/* implicit */int) (unsigned short)45575)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)64549))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [i_0] [i_5])) ? (arr_18 [i_5] [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */int) (_Bool)1))))) ? (min((-1LL), (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (+(arr_18 [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_19 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (var_2)))) ? (((arr_18 [i_0] [i_0] [i_2] [i_6] [i_2]) | (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)15))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_20 *= ((/* implicit */_Bool) (+(max(((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_7]))), (((/* implicit */int) var_3))))));
                            var_21 = (-(arr_9 [i_7] [i_0]));
                        }
                        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_22 |= ((/* implicit */long long int) (+((~(arr_25 [i_8 - 1] [i_8 - 1] [i_2] [i_0] [i_8] [i_6])))));
                            arr_28 [i_1] [i_8] [i_6] [i_2] [i_1] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) (unsigned short)65515)))))) : (13344871088684053144ULL)));
                        }
                        arr_29 [i_0] [i_6] [i_2] [i_2] [i_1] = ((/* implicit */signed char) arr_21 [i_6] [i_1] [i_1] [i_0]);
                        arr_30 [i_0] [(unsigned char)2] [i_2] [i_2] [i_6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2])))))));
                    }
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2147483647)) ? (((1226283891) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))))));
                        var_24 = ((/* implicit */unsigned short) max((arr_7 [i_9] [(unsigned char)2] [i_0] [i_0]), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_5)) : (1226283903))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_10])) ? (arr_14 [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14315))))), (((/* implicit */unsigned long long int) -1285590065))));
                        var_26 &= min((((long long int) min((arr_13 [i_0] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) var_14))))), (((/* implicit */long long int) arr_5 [i_0] [i_1])));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_10] [i_2] [1U] [i_0])) ? (((long long int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */long long int) var_0))));
                        arr_36 [1ULL] [1ULL] [1ULL] [1ULL] [1ULL] [i_10] = ((/* implicit */short) 2528370021524589617LL);
                    }
                    for (unsigned int i_11 = 4; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            arr_41 [11LL] [11LL] [11LL] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_6);
                            arr_42 [11LL] = ((/* implicit */signed char) var_11);
                            arr_43 [i_0] [i_0] [i_0] [i_0] [(signed char)1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_32 [i_11] [i_11 - 4] [i_11 + 3] [i_11]), (((/* implicit */int) (signed char)-4)))))));
                            var_28 = ((signed char) (_Bool)1);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_34 [i_0] [i_0] [i_11 + 2] [i_11])))))));
                            var_30 &= ((/* implicit */long long int) var_4);
                            var_31 = ((/* implicit */int) ((unsigned int) (+(666408857))));
                        }
                        arr_46 [i_0] [i_0] = ((/* implicit */short) 140064188U);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) var_10);
                        arr_49 [i_0] [i_0] [i_0] [i_2] [i_0] [i_1] |= ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_0]))));
                        arr_50 [i_0] [i_0] [i_0] [i_14] = ((arr_25 [i_0] [i_0] [i_1] [i_1] [i_14] [i_14]) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)80))))));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        arr_54 [i_15] [i_1] = ((/* implicit */signed char) arr_44 [i_1] [i_1] [i_1] [i_1] [11U] [i_1] [i_1]);
                        var_33 = ((/* implicit */long long int) min((1285590056), (((/* implicit */int) var_13))));
                        arr_55 [i_15] [i_2] [(signed char)12] [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) ^ (((/* implicit */int) (short)-1))));
                        arr_56 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)127))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (long long int i_17 = 0; i_17 < 13; i_17 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)249))));
                            var_36 = ((/* implicit */int) (((-(((4194303U) >> (((((/* implicit */int) var_15)) + (50))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), ((~((~(var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        for (short i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            {
                arr_69 [i_18] [i_18] [i_19] = ((/* implicit */signed char) arr_68 [(signed char)3] [i_18] [i_18]);
                var_38 = ((/* implicit */unsigned long long int) (signed char)56);
            }
        } 
    } 
    var_39 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
}
