/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126391
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)179);
                    var_17 += ((/* implicit */unsigned int) max((arr_1 [i_1] [i_2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2616165880U)))))));
                    arr_7 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)246)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_4 [i_0 - 2]))))) ? ((+(var_0))) : (((/* implicit */int) arr_1 [i_1 + 1] [i_1])))) : (((/* implicit */int) var_1))));
                    var_18 &= ((/* implicit */unsigned char) (~(max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_12))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */_Bool) (unsigned short)51994);
    }
    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))))) ? (max((arr_10 [i_3 - 2]), (((/* implicit */unsigned int) (short)-1)))) : (var_15)));
            var_20 = ((/* implicit */short) (unsigned char)9);
            var_21 += ((/* implicit */signed char) arr_5 [i_3] [i_3 - 1] [i_3] [i_4]);
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 6; i_6 += 3) 
            {
                {
                    arr_22 [i_6] [i_3 + 1] = ((/* implicit */unsigned long long int) arr_12 [i_5]);
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_3 - 2]))))), (arr_0 [i_3 - 2]))))));
                }
            } 
        } 
        arr_23 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3]))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_3 - 1] [i_3 - 1])), (((((/* implicit */int) arr_25 [i_3 + 1] [i_3 + 1])) | (((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_3]))))))) ? (((/* implicit */int) var_5)) : (((int) max((var_10), (((/* implicit */unsigned short) arr_1 [i_3] [i_7])))))));
                    arr_28 [i_8] = ((/* implicit */long long int) max((((int) var_15)), (min((var_7), (((int) 2616165880U))))));
                    arr_29 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_3]))));
                    arr_30 [i_3] [i_3] [i_8] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) 1678801433U)) ? (2616165880U) : (1678801418U)))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 3) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            {
                                arr_37 [i_8] [i_7] = ((/* implicit */signed char) var_3);
                                arr_38 [i_8] = ((/* implicit */int) (short)-31952);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_11 = 2; i_11 < 9; i_11 += 1) /* same iter space */
    {
        arr_43 [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */int) ((unsigned int) ((unsigned short) arr_16 [i_11 - 1] [i_11 - 2])));
        var_24 = ((/* implicit */unsigned short) var_0);
        /* LoopSeq 2 */
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2616165873U)) ? (((/* implicit */long long int) var_9)) : (arr_2 [i_12] [i_12] [i_11])))))) ? (((((/* implicit */_Bool) arr_35 [i_11 - 2] [i_11 - 2] [i_11 - 1] [i_11 - 2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (var_3)))) ? (((/* implicit */int) ((_Bool) 1414135240U))) : (((/* implicit */int) var_6))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_13 = 2; i_13 < 9; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */signed char) var_3);
                            arr_54 [i_13] [i_11] [i_13] [i_13] [i_13] = ((/* implicit */int) (_Bool)0);
                            arr_55 [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_15] [i_14] [i_11 - 1] = var_10;
                        }
                    } 
                } 
                arr_56 [i_11] [i_11] [i_11] [i_13 + 1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11] [i_13 - 1]))) + (var_15)));
                arr_57 [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-31934)))) >> (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_13 [i_11] [i_12] [i_12])))));
            }
            arr_58 [i_11] = ((/* implicit */short) 3927977989U);
        }
        for (unsigned int i_16 = 1; i_16 < 8; i_16 += 4) 
        {
            arr_61 [i_11] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            arr_62 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))) % (var_16)));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        arr_65 [i_17] = ((/* implicit */signed char) min((arr_64 [i_17]), (((/* implicit */int) max((arr_63 [i_17] [i_17]), (((/* implicit */unsigned short) ((signed char) var_0))))))));
        /* LoopNest 2 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned char i_19 = 2; i_19 < 17; i_19 += 1) 
            {
                {
                    var_27 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)96)) + (((((/* implicit */_Bool) max((arr_67 [i_17]), (((/* implicit */unsigned char) arr_69 [i_17] [i_17] [i_19 + 1]))))) ? (((((/* implicit */int) var_6)) << (((((/* implicit */int) var_10)) - (20841))))) : (var_7)))));
                    var_28 += ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_71 [i_17] [i_19 + 1] [i_17] [i_17]), (arr_71 [i_17] [i_19 + 1] [i_19] [i_17])))) % (((unsigned long long int) arr_69 [i_17] [i_19 + 1] [i_19 + 1]))));
                    arr_72 [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (7353320217647756315ULL)))) ? (arr_68 [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_67 [i_17]), (arr_66 [(short)6])))) ? (min((var_3), (((/* implicit */long long int) 2616165896U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_17])) ? (((/* implicit */int) var_13)) : (arr_64 [i_17]))))));
        arr_73 [i_17] = (((((+(((/* implicit */int) (short)-15605)))) < (((int) arr_63 [i_17] [i_17])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [i_17] [i_17] [i_17])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)71)))) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_64 [i_17])) ? (((/* implicit */long long int) arr_64 [i_17])) : (var_3))));
        arr_74 [i_17] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_67 [i_17]))))));
    }
}
