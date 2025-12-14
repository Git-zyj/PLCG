/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115744
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) var_13))))) : (arr_4 [i_0])))));
            var_15 = ((/* implicit */signed char) min((var_15), ((signed char)122)));
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((int) max((arr_12 [i_3 - 3] [(unsigned char)1] [i_3 - 2] [i_3] [i_3] [i_3]), (arr_12 [i_3 - 3] [i_3 - 3] [i_3 - 3] [9] [i_3] [i_3 - 3]))));
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned short)0])) + (((/* implicit */int) (signed char)111))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_2])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */long long int) max((1023U), (((/* implicit */unsigned int) var_2))))), (((((/* implicit */_Bool) (signed char)123)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56202))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)-51))));
                    arr_15 [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) var_12)), ((-(((/* implicit */int) var_4))))));
                }
            } 
        } 
    }
    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        var_20 = ((/* implicit */short) arr_17 [i_6]);
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */int) arr_17 [i_6])) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [5])) : (((/* implicit */int) (unsigned short)9334)))), (arr_18 [i_6] [i_6])))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((unsigned char) var_10))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_29 [i_8] [(short)11] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) (unsigned short)3)) : ((-(((/* implicit */int) var_6))))));
                            arr_30 [i_7] [i_7] [i_8] [i_8] = var_9;
                            var_23 = var_5;
                            var_24 = (-(((/* implicit */int) (unsigned char)232)));
                        }
                        for (int i_11 = 3; i_11 < 11; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9 - 1])) ? (((/* implicit */int) arr_17 [i_9 - 2])) : (((/* implicit */int) arr_17 [i_9 - 3]))));
                            var_26 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 144220915)) ? (var_5) : (((/* implicit */long long int) arr_19 [i_9])))) / (((/* implicit */long long int) var_8))));
                            arr_34 [i_8] [i_11] [i_11] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6] [i_11 - 1] [i_8])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_11 - 1] [i_8])))));
                            var_27 = ((/* implicit */unsigned long long int) var_11);
                        }
                        arr_35 [i_6] [i_7] [i_7] [i_8] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_8])) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_21 [i_6] [i_8] [i_7])) : (((/* implicit */int) var_4)))))));
                        var_28 = ((/* implicit */unsigned long long int) var_11);
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_7] [i_7] [i_7]))))) <= (var_8)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_45 [i_6] [i_7] [i_12] [i_7] [i_7] = ((/* implicit */unsigned int) ((signed char) arr_27 [i_7 + 1] [i_7] [i_7 + 1] [i_14] [8]));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46204)) ? (((/* implicit */long long int) arr_39 [i_7] [i_7 + 2])) : (arr_31 [i_7] [i_7 + 1]))))));
                            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (-1)));
                        }
                    } 
                } 
                var_32 = arr_19 [i_6];
                var_33 = ((/* implicit */unsigned char) arr_36 [i_6] [i_7] [i_6]);
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1223512023228174701LL)))))) : (var_5)));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_27 [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_7 - 2])) : (((arr_26 [i_6] [i_7 - 1] [0LL]) / (((/* implicit */int) var_2))))));
                    var_36 = 24U;
                    var_37 = ((/* implicit */short) ((int) var_1));
                }
            }
            for (signed char i_16 = 1; i_16 < 10; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_17 = 3; i_17 < 11; i_17 += 2) 
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_16] [i_16 - 1] [i_16 + 2] [i_16 + 2])) ? (-1304091300) : (var_0)));
                    var_39 = ((/* implicit */short) var_3);
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_17 - 2]))));
                }
                var_41 -= ((/* implicit */_Bool) (+(arr_51 [i_16 - 1] [i_16 + 1] [i_16 - 1])));
            }
        }
        for (int i_18 = 2; i_18 < 10; i_18 += 3) /* same iter space */
        {
            var_42 = ((((/* implicit */_Bool) ((long long int) var_2))) ? (arr_33 [i_6] [i_18 - 1] [i_18 - 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_54 [i_18 + 1] [(signed char)6] [i_18]))))));
            var_43 = ((/* implicit */signed char) (unsigned char)3);
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 1; i_19 < 10; i_19 += 1) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_44 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_13)) + (((/* implicit */int) arr_49 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_54 [i_6] [(signed char)2] [i_19])), (var_9)))))) || (((/* implicit */_Bool) (unsigned short)55165)))))));
                            var_46 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_32 [i_18 + 2] [i_18 + 2] [i_18 - 2] [i_18]), (arr_22 [i_18 - 2] [i_18] [i_18]))))) >= (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_18 + 1] [i_18] [i_18] [i_18])))))));
                            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) 347267852))));
                        }
                    }
                } 
            } 
        }
        for (int i_22 = 2; i_22 < 10; i_22 += 3) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (1304091308)))) ? (((((/* implicit */_Bool) 8128LL)) ? (arr_31 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
            var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((693226771U), (((/* implicit */unsigned int) arr_53 [i_6] [i_22 - 2] [i_22 - 1] [i_22])))))));
            arr_67 [i_22] [i_22 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (arr_42 [i_22] [i_22] [i_22 + 2] [i_22] [i_22] [i_22 - 1])))) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_42 [i_22 - 1] [i_22] [i_22] [i_22 - 1] [2LL] [i_22 - 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_22] [i_22] [i_22] [i_22 + 2] [i_22] [i_22 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))))));
        }
        for (int i_23 = 0; i_23 < 12; i_23 += 2) 
        {
            var_50 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_23] [i_23] [i_23])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))), (min((var_10), (((/* implicit */unsigned long long int) arr_22 [i_23] [i_6] [i_6]))))));
            var_51 = ((/* implicit */long long int) (unsigned char)112);
            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_23] [i_23] [i_23] [i_6])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_6] [i_23] [i_23])), (arr_42 [i_6] [i_23] [i_6] [i_6] [i_6] [i_23])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_58 [i_23] [i_23] [i_23] [i_23]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((var_8) / (((/* implicit */unsigned int) 1304091308)))))))));
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                for (signed char i_25 = 0; i_25 < 12; i_25 += 4) 
                {
                    {
                        var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)3))) ? (((/* implicit */int) arr_63 [i_24])) : (((arr_71 [i_6] [i_23] [i_24] [i_25]) ^ (arr_71 [i_6] [i_6] [i_6] [i_6])))));
                        var_54 ^= ((/* implicit */signed char) (~(var_0)));
                    }
                } 
            } 
        }
        var_55 = ((/* implicit */long long int) min((11900388823509273913ULL), (((/* implicit */unsigned long long int) arr_21 [i_6] [i_6] [0ULL]))));
    }
    var_56 = ((/* implicit */long long int) var_1);
    var_57 = ((/* implicit */signed char) max((min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) var_13)))), (((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (short)0)))))))));
}
