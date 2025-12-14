/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141203
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
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [12U] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((-3966389482121271556LL), (((/* implicit */long long int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3966389482121271532LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) : (1239000222897091433LL))), (((((/* implicit */_Bool) ((3966389482121271532LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((long long int) 3966389482121271564LL))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_2 [i_0] [(unsigned short)4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)26194), (((/* implicit */unsigned short) var_8)))))) : (arr_1 [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) ((_Bool) 70368744144896ULL))))))));
                arr_7 [(unsigned short)16] [i_0] = ((/* implicit */short) ((unsigned short) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)26191))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((32830719) << (((((/* implicit */int) var_7)) - (1505))))))))));
        /* LoopSeq 4 */
        for (short i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_9 [i_3] [i_2]))) == (arr_12 [i_2] [(unsigned char)2]))))));
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_11);
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_12))));
            var_21 = ((/* implicit */unsigned int) ((short) arr_2 [i_2 - 2] [(_Bool)1]));
            arr_18 [i_2] [i_2] [i_2] = ((/* implicit */short) (+(arr_12 [i_2] [i_2])));
            var_22 = ((/* implicit */unsigned int) (unsigned char)15);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                {
                    arr_29 [3U] [i_5] [i_6] [i_2] = ((/* implicit */int) var_10);
                    arr_30 [i_2] [(unsigned short)8] [(unsigned short)8] [(unsigned short)11] [i_2] [i_7] = (unsigned short)18;
                    arr_31 [i_2 + 2] [i_2] = ((/* implicit */unsigned int) ((int) arr_15 [i_2] [i_7] [i_2 + 4]));
                    arr_32 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [0ULL] [i_5] [10U])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2 + 2] [(unsigned char)6])))));
                }
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                {
                    arr_35 [i_8] [i_2] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((arr_9 [i_8] [i_2 + 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39340)))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_14))) ? (((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (-2328296611603081180LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49237))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_8] [i_9] = ((/* implicit */long long int) var_10);
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
                        arr_40 [i_2] [i_5] [7ULL] [i_5] = ((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_9]);
                        var_25 = ((/* implicit */long long int) (signed char)15);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((long long int) arr_22 [i_5] [i_5] [i_5]));
                        arr_45 [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_5] [(unsigned short)2] [i_5] [i_5] [i_5]))) % (-3966389482121271560LL))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4083440150U)) ? (((/* implicit */long long int) arr_23 [9] [i_2 + 2] [i_2 + 3])) : (((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)31741))))))))));
                        arr_46 [i_8] [i_10] [i_8] [i_2] = ((/* implicit */_Bool) var_7);
                    }
                    for (int i_11 = 4; i_11 < 10; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((arr_36 [i_2] [i_2] [i_6] [i_8] [i_11 + 1] [i_2]) < (((/* implicit */long long int) 0U))));
                        arr_49 [i_2] [(_Bool)1] [i_2] [(short)7] [i_2] = ((/* implicit */_Bool) (unsigned char)240);
                        arr_50 [i_2] [i_2] [1LL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_16 [i_2] [0ULL] [10]))));
                    }
                }
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_2] [i_5] [0U] [i_5] [i_12] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_2] [3ULL] [i_2]))) : (-4270206960271471734LL)));
                    arr_54 [9LL] [i_5] [5LL] [i_2] [i_6] [i_12] = ((/* implicit */unsigned long long int) arr_44 [i_2 + 1] [i_5] [i_5] [i_2] [i_12]);
                }
                arr_55 [(short)9] [i_2] [(short)0] = ((/* implicit */_Bool) (short)-7765);
                arr_56 [i_2] [i_2] [i_2 - 1] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
            {
                arr_59 [i_2] [i_5] [i_2] = ((/* implicit */unsigned int) ((_Bool) arr_58 [i_2 + 1] [i_2] [i_2 + 1]));
                var_30 = ((/* implicit */long long int) 0U);
            }
            for (long long int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
            {
                arr_63 [i_2] [(unsigned char)7] [i_5] [i_14] = ((/* implicit */long long int) arr_14 [i_2] [i_5] [i_2]);
                arr_64 [i_2] [i_2] [i_14] [i_2 + 3] = ((/* implicit */int) ((short) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_2]))))));
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3966389482121271564LL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26179))) + (1956225441U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            var_32 &= ((/* implicit */int) ((unsigned int) arr_44 [i_2 + 4] [i_2 + 3] [i_2 + 4] [i_15] [i_2]));
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                for (short i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        {
                            arr_77 [i_2] [i_15] [i_2] [i_2] [i_18] = ((/* implicit */long long int) ((short) (short)24573));
                            arr_78 [i_2] [i_2] [i_16] [i_2] [i_17] [i_2] = ((/* implicit */unsigned char) (unsigned short)39340);
                            arr_79 [(unsigned short)11] [i_2] [i_16] [i_17] [i_18] = ((/* implicit */short) 18446673704965406720ULL);
                            var_33 = ((/* implicit */long long int) ((unsigned long long int) arr_23 [i_2 + 4] [i_2 + 1] [i_2 + 3]));
                        }
                    } 
                } 
            } 
        }
    }
}
