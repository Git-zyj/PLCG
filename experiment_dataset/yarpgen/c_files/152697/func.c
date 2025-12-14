/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152697
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) arr_3 [6ULL] [6ULL]);
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [(signed char)12] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_10 [11ULL] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
                                var_21 = (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) arr_13 [i_4] [i_0] [i_1] [i_2] [i_1] [i_0]))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 4; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_2] [i_2] [(_Bool)0] = ((/* implicit */unsigned short) var_12);
                                arr_21 [i_0] [i_2] [i_5] [i_5] [i_6 + 1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) max(((+(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) var_18))))));
                                var_23 = ((/* implicit */signed char) arr_2 [i_0] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_2] [i_7])) & (((/* implicit */int) (_Bool)1))))) ? (((max((((/* implicit */long long int) var_14)), (var_15))) * (((/* implicit */long long int) ((/* implicit */int) ((var_18) < (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0]))))))))) : (((/* implicit */long long int) ((arr_14 [i_7 - 2]) ? (((/* implicit */int) arr_14 [i_7 - 1])) : (((/* implicit */int) var_2)))))));
                        var_25 = arr_14 [(_Bool)1];
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((((arr_16 [(_Bool)0] [i_1] [i_2] [2LL] [i_7] [i_7]) || (arr_18 [(signed char)1] [(_Bool)1] [(signed char)1] [i_7] [3ULL] [(signed char)1]))) || (((/* implicit */_Bool) 1039589943U)))))))));
                        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) : ((-(arr_17 [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 3] [i_7 + 1] [i_7])))));
                    }
                    for (short i_8 = 3; i_8 < 13; i_8 += 3) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(-1582742155)))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_9 [(unsigned short)8] [i_0] [i_8 - 2] [i_8 + 1]))))));
                        arr_27 [i_2] [(short)4] [0U] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (134217727U)));
                        arr_28 [i_2] [(short)1] [i_1] [i_2] [(unsigned short)9] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_2] [i_8 - 1] [(short)6] [i_8] [i_0]))));
                        arr_29 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((_Bool) (_Bool)1)) ? (var_0) : (((/* implicit */int) ((_Bool) min(((unsigned short)65528), (((/* implicit */unsigned short) (_Bool)1))))))));
                    }
                    arr_30 [i_2] = ((/* implicit */short) var_15);
                }
                for (short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 3; i_11 < 10; i_11 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (+(((unsigned int) var_14))));
                                arr_41 [i_11 - 1] [i_11] [i_9] [i_11] [i_0] = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_12)))) <= (((/* implicit */int) (_Bool)1))));
                                var_29 = ((/* implicit */unsigned short) ((arr_35 [i_0] [(short)10] [i_9] [i_10] [i_10]) && (((((/* implicit */_Bool) 121952019)) && (((-1963617525) == (((/* implicit */int) arr_22 [i_0] [(unsigned short)12] [i_9] [i_10] [i_11]))))))));
                                var_30 ^= ((/* implicit */short) (unsigned char)10);
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_16 [i_0] [4U] [i_1] [i_1] [i_9] [i_9])))) * (((/* implicit */int) arr_18 [i_0] [(unsigned short)3] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_12 = 3; i_12 < 11; i_12 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (arr_1 [i_12 + 3]) : (max((arr_10 [i_0] [i_1] [i_9] [i_0]), (((/* implicit */unsigned int) arr_4 [i_12 - 2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_9] [i_9] [i_9])) ? (arr_36 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))) : (((unsigned long long int) arr_10 [i_9] [i_12] [i_9] [i_1])))))));
                        arr_47 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1963617524)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((((/* implicit */_Bool) -42016118651447600LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (117440512U))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_0] [i_1] [i_12] [0] [i_0]))))))))));
                        arr_48 [i_12] [i_12] [i_0] = ((/* implicit */unsigned long long int) arr_43 [i_0] [i_1] [(unsigned short)9] [i_0] [i_12]);
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_52 [i_0] [(unsigned short)8] [i_9] [i_13 + 1] = ((/* implicit */unsigned short) ((min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)200)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) >= (((/* implicit */int) ((_Bool) 117440492U)))))))));
                        var_32 = ((/* implicit */int) ((_Bool) ((long long int) ((4177526783U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        var_33 = ((/* implicit */_Bool) ((int) ((_Bool) arr_14 [i_0])));
                        var_34 = ((((/* implicit */int) arr_18 [6U] [6U] [i_9] [(_Bool)1] [(_Bool)1] [i_0])) < (((/* implicit */int) var_7)));
                    }
                }
                var_35 = ((/* implicit */signed char) arr_49 [i_0] [i_0] [i_0] [i_1] [i_1] [(_Bool)1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_15 = 2; i_15 < 20; i_15 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                {
                    var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) var_11))), (var_18)));
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
                    {
                        arr_65 [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_55 [i_15 - 1])))));
                        var_37 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2244063687U)))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 21; i_19 += 3) /* same iter space */
                    {
                        arr_69 [i_16] [i_16] [i_17] [i_19] = ((/* implicit */_Bool) ((var_14) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_15 + 1] [i_15 - 1])))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((unsigned long long int) arr_61 [i_15 + 1] [i_15 - 1] [i_15 - 2] [i_15 - 1]))));
                    }
                }
            } 
        } 
        var_39 ^= ((((/* implicit */_Bool) arr_68 [i_15] [(unsigned short)6] [i_15] [i_15] [i_15 - 1] [i_15 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_15 + 1] [i_15 + 1] [i_15] [i_15] [i_15 - 2] [i_15 + 1])) && (((/* implicit */_Bool) arr_68 [i_15] [10LL] [i_15] [i_15] [i_15 - 2] [i_15 - 1]))))) : (((/* implicit */int) ((arr_68 [18LL] [i_15] [i_15] [2] [i_15 + 1] [i_15 + 1]) >= (((/* implicit */unsigned int) var_0))))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) var_19))));
        var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_20])))))));
    }
}
