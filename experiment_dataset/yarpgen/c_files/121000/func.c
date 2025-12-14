/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121000
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
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [5U] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) 
        {
            var_16 += ((/* implicit */_Bool) (signed char)12);
            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -909079237)))) ^ (arr_5 [i_1 + 1] [i_1 - 1])));
            var_18 = ((/* implicit */unsigned short) ((_Bool) arr_5 [i_1 + 1] [i_1 - 1]));
            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 3741602394364625127LL)) == (arr_5 [i_1 + 1] [i_1 - 1])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            arr_11 [6U] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (((unsigned int) var_7))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_1);
                            var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) || (((/* implicit */_Bool) ((arr_13 [12] [(signed char)1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))))))));
                            var_22 = ((/* implicit */int) ((short) 4294967295U));
                            arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))));
                            arr_20 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 669868145U)) ? (arr_14 [i_4 + 1]) : (arr_14 [i_4 + 1])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) arr_12 [i_4] [i_4 + 1] [i_1]));
            }
            for (unsigned long long int i_7 = 2; i_7 < 24; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) 12611620955169700451ULL);
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((4173880052700187208ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))))));
                            arr_31 [i_1] [(short)18] [i_1] [i_1 - 1] [(short)13] = (!(min((arr_0 [i_1] [i_9 - 2]), (arr_0 [(unsigned short)12] [i_9 + 3]))));
                        }
                    } 
                } 
                arr_32 [i_1] [i_1] [21] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)244)) ? ((+(arr_28 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [(_Bool)1]))) : (var_8))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [(signed char)24] [(signed char)4])))))));
                var_26 ^= ((/* implicit */unsigned int) ((unsigned short) 10128659105221778664ULL));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 1) 
            {
                var_27 = ((/* implicit */signed char) (~((-(max((((/* implicit */long long int) arr_0 [i_1 + 1] [i_1])), (arr_26 [i_1] [i_1] [i_1])))))));
                arr_37 [i_3] [i_1 + 1] |= ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)7)), (min((8773011366228198996LL), (((/* implicit */long long int) var_5))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_1] [i_3] [i_3 + 3])) - (((/* implicit */int) (unsigned short)7345))));
                var_29 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_29 [12] [(short)1]))))) != (arr_23 [(short)3] [i_3 - 1] [(short)3] [i_11])));
            }
            for (unsigned int i_12 = 1; i_12 < 23; i_12 += 1) 
            {
                var_30 = ((/* implicit */int) (~(min((((arr_28 [i_12] [i_12] [i_3] [i_3] [i_1] [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3]))))), (((/* implicit */unsigned long long int) (unsigned short)15423))))));
                var_31 = (-(((long long int) arr_16 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])));
                var_32 ^= ((/* implicit */_Bool) arr_41 [i_12] [23] [i_1]);
                var_33 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2147483638)), (arr_17 [(short)7] [(short)7] [i_1] [(short)7] [i_3] [(short)7] [(_Bool)1])));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_13))));
            }
            /* vectorizable */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 24; i_14 += 3) 
                {
                    for (short i_15 = 3; i_15 < 24; i_15 += 3) 
                    {
                        {
                            var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-4)) ? (((((-2345814962918834950LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-1)) + (52))))) : (((/* implicit */long long int) ((669868164U) << (((1048575U) - (1048547U))))))));
                            arr_53 [i_1] [i_3] [i_15] [i_3] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [i_1 + 1] [i_14 + 1] [i_14] [i_15 - 1])) == (((/* implicit */int) (signed char)1))));
                            arr_54 [i_1] [i_3] [i_13 + 1] [6ULL] [(unsigned short)16] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [4U] [4U] [i_13 + 1]))));
                            var_36 = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
                arr_55 [i_3] [i_1] [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3625099141U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) (-(2780180195U)))) : (0LL)));
            }
        }
        /* vectorizable */
        for (short i_16 = 2; i_16 < 24; i_16 += 1) /* same iter space */
        {
            arr_58 [0ULL] = ((/* implicit */unsigned long long int) (-(arr_18 [i_1 - 1] [0] [i_1 - 1] [i_1] [i_16 + 1])));
            arr_59 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                arr_62 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [(short)2] = ((/* implicit */long long int) var_0);
                var_37 = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) ^ (((int) arr_38 [i_17]))));
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_1 + 1] [i_16 + 1])) ^ (((/* implicit */int) arr_6 [i_1 + 1] [i_16 + 1])))))));
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    var_39 = ((/* implicit */int) ((short) arr_47 [i_16 - 1] [i_16 + 1] [i_16 - 2] [(unsigned char)17]));
                    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)127)))))));
                }
                for (unsigned long long int i_19 = 2; i_19 < 23; i_19 += 1) 
                {
                    var_41 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_40 [i_1] [i_1] [i_1] [(signed char)14]) >= (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_1 - 1] [i_1] [i_1 + 1] [0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (arr_40 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    var_42 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-19668))));
                }
            }
        }
        /* vectorizable */
        for (short i_20 = 2; i_20 < 24; i_20 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2345814962918834943LL)))))));
            var_44 = ((/* implicit */unsigned short) var_6);
            var_45 = ((/* implicit */unsigned long long int) ((724636985) ^ (((int) var_2))));
        }
        /* LoopNest 2 */
        for (short i_21 = 1; i_21 < 21; i_21 += 2) 
        {
            for (unsigned int i_22 = 2; i_22 < 22; i_22 += 1) 
            {
                {
                    arr_75 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~((-(((arr_71 [22] [22] [22]) >> (((((/* implicit */int) var_13)) - (26365)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 1; i_23 < 23; i_23 += 2) 
                    {
                        for (long long int i_24 = 4; i_24 < 23; i_24 += 3) 
                        {
                            {
                                arr_81 [i_1] [i_21] [i_24] [i_23] = ((/* implicit */unsigned long long int) arr_27 [i_1] [i_21] [i_21] [i_21] [i_24 + 1]);
                                arr_82 [i_24] [i_24] [i_22 + 1] [i_24] [i_1] = max((((int) (+(((/* implicit */int) var_4))))), (((((/* implicit */int) var_4)) >> (((((arr_74 [i_1]) | (((/* implicit */unsigned long long int) -7673911708296172720LL)))) - (13655419802585116661ULL))))));
                            }
                        } 
                    } 
                    var_46 |= ((/* implicit */unsigned int) ((arr_34 [i_1] [13U] [(signed char)15] [i_22]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))));
                    var_47 += min((var_7), (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_48 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_61 [i_1])) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (max((arr_30 [i_1]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_25 = 4; i_25 < 14; i_25 += 1) 
    {
        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_25] [i_25] [i_25 - 4] [i_25 - 2] [i_25 - 2])) ? (((/* implicit */int) arr_27 [(short)11] [(short)11] [i_25] [(_Bool)1] [i_25 - 3])) : (((/* implicit */int) (_Bool)0))));
        arr_86 [i_25] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1836591330)))) ? (((/* implicit */int) arr_21 [i_25] [i_25] [i_25] [i_25])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)19] [i_25])))))));
        arr_87 [i_25 - 2] = ((/* implicit */unsigned char) arr_24 [(unsigned short)24]);
        var_50 *= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    }
    var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
}
