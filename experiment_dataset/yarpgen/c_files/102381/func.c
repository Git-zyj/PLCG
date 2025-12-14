/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102381
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
    var_18 = min((((((/* implicit */_Bool) ((unsigned short) 0ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 6844825348033700607ULL)))) : (min((1730918218U), (var_13))))), (((/* implicit */unsigned int) max((var_11), (((var_14) % (var_14)))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_20 = var_11;
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_14), (((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 1234971691782383395LL)) ? (((/* implicit */int) arr_2 [i_0] [(signed char)8])) : (var_4))) : (var_16))) : (((/* implicit */int) ((_Bool) (-(var_14)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) var_16))))), (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_4))))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 4; i_2 < 8; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) max((arr_8 [i_1]), (arr_7 [i_3] [9])))), (1029184919))));
                        arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1029184930)) ? (((/* implicit */int) var_15)) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_1]))))) : (max((2112144252U), (((/* implicit */unsigned int) var_14))))));
                        var_22 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((max((((int) arr_2 [i_3] [i_1 + 1])), (((/* implicit */int) arr_7 [i_3] [i_2 - 4])))) << (((((int) arr_4 [i_1] [i_1 - 1])) - (68)))))) : (((/* implicit */_Bool) ((max((((int) arr_2 [i_3] [i_1 + 1])), (((/* implicit */int) arr_7 [i_3] [i_2 - 4])))) << (((((((int) arr_4 [i_1] [i_1 - 1])) - (68))) + (85))))));
                        arr_16 [i_1 + 1] [i_1] [i_2] [i_2 - 1] [i_3] [i_1] = ((/* implicit */unsigned short) -1029184919);
                        arr_17 [i_1] [i_2] [i_3] [6] [i_2] [i_1] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (-(2112144275U)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            arr_22 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (unsigned short i_7 = 3; i_7 < 9; i_7 += 4) 
                {
                    for (int i_8 = 1; i_8 < 9; i_8 += 4) 
                    {
                        {
                            arr_29 [i_1] = ((/* implicit */unsigned short) ((1730918236U) != (arr_12 [i_1 + 1] [i_7] [(unsigned short)6])));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_24 [i_8 + 1] [i_8 + 1] [i_8])) & (2182823068U)));
                            arr_30 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 190332612)) ? (((/* implicit */int) arr_27 [i_1])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_24 = ((/* implicit */unsigned char) (+(var_11)));
            arr_35 [i_1 + 2] [i_1] [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_9])) & (var_14)))), ((~(var_17))))) <= (max((min((((/* implicit */unsigned int) (unsigned char)36)), (2182823043U))), (((/* implicit */unsigned int) -443896431))))));
            var_25 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */unsigned int) -926898849)) : (((arr_20 [i_1 + 1] [i_1 + 1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))))))));
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    {
                        arr_42 [i_1] [9] [i_10] [i_1] [i_10] [5U] = var_14;
                        var_26 = ((/* implicit */unsigned short) arr_12 [i_1] [i_9] [i_10 - 1]);
                    }
                } 
            } 
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) var_10);
                            var_28 = ((((/* implicit */int) arr_8 [i_1 - 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                        {
                            arr_56 [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_1] [i_12] [i_13] [i_14] [i_16]))));
                            arr_57 [i_1] [i_1] [2] [i_1] [i_16] [i_1] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_1 + 2] [i_12] [i_12] [i_1 + 1])) ? (var_4) : (((/* implicit */int) arr_55 [i_1 + 2] [i_1 + 1] [i_1] [i_16] [4LL]))));
                            arr_58 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = (~(var_17));
                            arr_59 [(unsigned char)2] [i_12] [i_13] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_23 [i_13] [(_Bool)1] [i_13] [i_1 + 1]));
                        }
                        arr_60 [(signed char)7] [i_1 - 1] [i_12] [i_1] [i_12] [i_14] = ((/* implicit */int) (((-(((/* implicit */int) arr_36 [i_14] [i_13] [i_12] [i_1])))) == (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))))), (((unsigned short) var_15)))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -443896431)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -5206594225534297534LL)))) : (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (16516833376159958502ULL))))))));
            arr_61 [i_1] = ((/* implicit */unsigned char) 2112144265U);
            var_30 = ((/* implicit */_Bool) max(((-((-(var_10))))), (((/* implicit */long long int) arr_53 [(_Bool)1] [i_1] [i_1] [i_1] [i_1]))));
        }
        for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            var_31 = ((/* implicit */_Bool) arr_34 [i_1] [9U] [i_1]);
            arr_64 [i_1] [i_17] [i_1] = ((/* implicit */int) min((((var_0) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) min((arr_25 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (arr_25 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1]))))));
        }
    }
    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 2) 
    {
        arr_68 [i_18] [i_18] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((int) var_17))), ((~(2182823020U))))), (max((((/* implicit */unsigned int) var_16)), (min((var_13), (var_13)))))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 1; i_19 < 23; i_19 += 2) 
        {
            for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                {
                    arr_75 [i_20] [i_19] [i_19] [i_18] = max((((((/* implicit */_Bool) arr_71 [i_19] [i_19])) ? (11ULL) : (186518546643259921ULL))), (((/* implicit */unsigned long long int) arr_72 [i_19 + 1])));
                    arr_76 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2243844103U), (((/* implicit */unsigned int) var_11))))) ? (((1929910697549593120ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_18] [i_19 + 1] [(signed char)17]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_20] [i_18])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_67 [i_20]))))))))));
                    arr_77 [i_18] [i_18] [i_19] [i_19] = ((((arr_70 [i_18] [i_19] [i_20]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_67 [i_20]), (arr_67 [i_18]))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (9645934764815487659ULL) : (((/* implicit */unsigned long long int) 2168169794669702970LL)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_20] [(_Bool)1])) ? (max((2112144252U), (((/* implicit */unsigned int) var_2)))) : ((+(var_0)))))));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 24; i_21 += 4) 
                    {
                        for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                        {
                            {
                                arr_82 [i_19] [i_20] [i_20] = ((/* implicit */unsigned long long int) arr_69 [i_19]);
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((int) var_14))) : (var_10)));
                                arr_83 [i_19] [i_19] [i_19] [i_19] [i_19 - 1] = ((/* implicit */long long int) (unsigned char)23);
                                var_33 = min((((/* implicit */unsigned long long int) (~(var_9)))), (min((((/* implicit */unsigned long long int) (unsigned char)1)), (var_1))));
                                arr_84 [i_19 + 1] [i_19 - 1] [20ULL] [i_19] [i_19] [20ULL] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (_Bool)1)) : (arr_80 [18] [18LL] [i_20] [i_19] [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_22]))) : (var_1))))), (((/* implicit */unsigned long long int) var_10))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned char) var_10);
}
