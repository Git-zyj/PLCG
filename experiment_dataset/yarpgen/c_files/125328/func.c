/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125328
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
    var_14 = ((/* implicit */long long int) (-(var_7)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((max((arr_1 [i_0]), (((/* implicit */unsigned int) var_1)))), ((+(var_7)))));
        var_16 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (var_4))));
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((short) arr_0 [i_1] [i_1])), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)128))))))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) 1551108193739275368ULL);
                            var_20 = ((/* implicit */unsigned long long int) (unsigned short)0);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 2) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned short) (~(arr_2 [i_0])));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 4; i_6 < 23; i_6 += 3) 
            {
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) 3646010918U));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))));
            }
            arr_19 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((signed char) var_10));
        }
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_0 [i_0] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
            /* LoopSeq 2 */
            for (long long int i_8 = 2; i_8 < 23; i_8 += 3) 
            {
                arr_26 [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_12));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                {
                    var_23 |= ((/* implicit */unsigned int) arr_8 [i_8 + 1] [i_9]);
                    arr_30 [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((signed char) var_12))));
                    var_24 = ((/* implicit */short) (+(arr_24 [i_8 + 1] [i_8 - 2] [i_0] [i_8 - 2])));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_8 + 1] [i_8 - 2])) ? (var_7) : (var_7))))));
                    arr_33 [i_8] [i_8] [i_8 + 1] [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 659795280))));
                    arr_34 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */short) var_7);
                    var_26 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_8 + 1] [i_0] [i_8 + 1])) >> (((((/* implicit */int) (signed char)68)) - (40)))));
                }
                for (int i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
                {
                    arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_11]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        arr_42 [i_0] [i_7] [i_8 + 1] [i_8] [i_11] [i_8] = ((/* implicit */unsigned int) ((((var_12) ? (((/* implicit */int) arr_32 [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_11])) : (((/* implicit */int) arr_32 [i_0] [i_8 + 1] [21U] [i_11])))) >= (((/* implicit */int) ((short) var_10)))));
                        arr_43 [i_0] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) var_4);
                        var_27 = ((/* implicit */int) max((140135897U), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527))) + (arr_16 [i_0] [i_0] [i_0] [i_11])))));
                        arr_44 [i_0] [i_7] [i_7] [i_8] [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((11561938917650564316ULL) >> (((13944038077025025455ULL) - (13944038077025025424ULL)))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_13 [i_0]))))));
                    }
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (((~(var_4))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_11]))))))));
                    var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(140135897U))))))));
                }
                var_30 = arr_7 [i_8 - 2] [i_8 + 1] [i_8] [i_8];
            }
            for (int i_13 = 2; i_13 < 21; i_13 += 3) 
            {
                arr_48 [i_0] [i_7] [i_13] = ((/* implicit */_Bool) min(((+(((/* implicit */int) min((arr_6 [i_13] [i_13] [i_7] [i_0] [i_0] [i_0]), (var_3)))))), ((-(((/* implicit */int) (unsigned short)8))))));
                arr_49 [i_0] [i_0] [i_13] [20U] = var_7;
                arr_50 [i_0] [i_0] [(unsigned short)3] [i_0] = var_6;
                var_31 = ((/* implicit */signed char) ((((_Bool) 0)) ? (max((arr_16 [i_13 + 2] [i_0] [i_13 + 2] [i_13 - 2]), (arr_27 [i_13 + 3] [i_13] [i_13 + 2] [i_13 - 1] [i_13]))) : (((((/* implicit */_Bool) (unsigned short)8)) ? (arr_45 [i_13 + 1] [i_0] [i_13 + 2] [i_13 + 1]) : (arr_45 [i_13 + 1] [i_0] [i_13 + 2] [i_13 + 2])))));
            }
        }
    }
    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        arr_55 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) 659795280))) : (((/* implicit */int) max((arr_6 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), (((short) 1851402896U)))))));
        arr_56 [18] [18] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_14] [i_14] [i_14] [i_14]))) : (arr_41 [i_14])))));
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 13; i_15 += 4) 
    {
        var_32 += ((/* implicit */int) ((unsigned char) -730611492));
        var_33 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)8200)))) ? (((/* implicit */int) arr_5 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_9))));
        var_34 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1132988652U)))));
        /* LoopSeq 1 */
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (short i_18 = 3; i_18 < 10; i_18 += 1) 
                {
                    {
                        arr_67 [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned char)5] = ((/* implicit */unsigned int) (+(var_6)));
                        var_35 = ((/* implicit */unsigned char) (-(arr_7 [i_18 + 3] [i_15] [(unsigned short)23] [i_15])));
                        /* LoopSeq 4 */
                        for (unsigned char i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) 9)) ? (((/* implicit */int) arr_5 [i_19] [i_18] [i_15] [i_15])) : (var_6))) << (((((/* implicit */int) arr_20 [i_15])) - (15097)))));
                            arr_70 [i_19] [i_16] [i_17] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_15])) ? (var_10) : (((/* implicit */int) var_9))))));
                            var_37 = ((/* implicit */unsigned short) var_13);
                        }
                        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) /* same iter space */
                        {
                            var_38 |= ((/* implicit */short) 2520586844U);
                            var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                            arr_73 [5ULL] [i_16] [i_17] [i_18] [i_20] = ((/* implicit */short) ((unsigned int) var_3));
                        }
                        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */short) (unsigned short)65531);
                            arr_76 [i_15] [i_15] [i_15] [i_15] [i_15] = var_7;
                        }
                        for (unsigned int i_22 = 0; i_22 < 13; i_22 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_40 [i_18 + 3] [i_18] [i_18] [i_22] [i_18]))));
                            arr_80 [i_16] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30220)))));
                            arr_81 [i_15] [i_15] [i_22] [i_15] [i_15] [i_15] = 319068743;
                            var_42 = ((/* implicit */signed char) (+(((/* implicit */int) arr_77 [i_18 - 2] [i_17] [i_17] [i_18 + 3] [i_22]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_23 = 0; i_23 < 13; i_23 += 1) 
                        {
                            var_43 = ((((/* implicit */_Bool) arr_46 [i_18] [5ULL] [i_18 - 1] [i_18 - 1])) ? (((/* implicit */int) arr_46 [i_18 - 2] [11] [1U] [i_18 - 3])) : (((/* implicit */int) var_11)));
                            var_44 = ((/* implicit */unsigned int) var_4);
                        }
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_72 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (var_8) : (((/* implicit */unsigned long long int) arr_72 [i_15] [(unsigned short)11] [i_15] [i_15] [12U]))));
        }
    }
}
