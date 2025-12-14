/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189380
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1 + 1])))), (((int) (signed char)-79)))))))));
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned int) var_7);
                arr_7 [i_1] = min(((+(arr_2 [i_1 - 3]))), (var_12));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [8ULL])) ? (591791317) : (((/* implicit */int) arr_17 [i_2] [i_2])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        arr_22 [i_2] [18ULL] [16U] [i_5] [12ULL] [i_3] = ((/* implicit */int) ((4828686643014934551ULL) & (((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6])) ? (arr_21 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] [i_2]) : (var_13)))));
                        arr_23 [i_3] [13] [i_3] [i_6] = ((var_12) - (13618057430694617074ULL));
                    }
                    for (signed char i_7 = 3; i_7 < 16; i_7 += 3) 
                    {
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_7 - 3] = ((/* implicit */_Bool) 435282577U);
                        arr_28 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7 + 1] [i_7] [i_5])) ? (arr_19 [i_7] [i_7] [i_7 + 3] [i_3] [i_3]) : (arr_19 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 1])));
                    }
                    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        var_16 = ((2845127785U) / (((/* implicit */unsigned int) arr_19 [i_8 + 1] [i_8 + 1] [9] [i_8] [6U])));
                        var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_2] [i_3] [(unsigned char)0] [i_5] [i_5] [i_8 + 2])) ? (var_4) : (((((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2])) | (((/* implicit */int) var_7))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned int) ((int) (unsigned char)145))))));
                    }
                }
                var_19 = ((/* implicit */signed char) var_10);
                arr_32 [i_2] [i_2] |= ((/* implicit */int) 9U);
                arr_33 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */signed char) (-(var_2)));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_37 [i_2] [i_3] [i_3] = 4294967287U;
                arr_38 [15U] [i_3] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) arr_29 [i_2] [i_3] [i_3] [i_9] [i_3] [6ULL] [i_2])) : (var_4)))) ? (arr_13 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_11)));
            }
            var_20 |= var_2;
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((((-(10138946549359613460ULL))) + (((/* implicit */unsigned long long int) arr_40 [i_2] [i_2] [i_10]))))));
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                arr_45 [i_2] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) (unsigned char)248))));
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) * (((/* implicit */int) var_1)))) << (((18446744073709551598ULL) - (18446744073709551576ULL)))));
                var_23 = arr_9 [i_11];
                var_24 &= ((unsigned long long int) 13U);
            }
            arr_46 [i_10] [i_10] [i_2] = ((/* implicit */int) 18446744073709551615ULL);
            var_25 = ((/* implicit */unsigned long long int) var_7);
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 12U)) ? (arr_9 [i_2]) : (arr_9 [i_2])));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            arr_50 [i_2] [i_2] [i_12] = ((/* implicit */_Bool) var_9);
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) /* same iter space */
            {
                var_27 |= ((/* implicit */int) arr_13 [(_Bool)1] [i_2] [i_13]);
                arr_55 [i_13] [i_13] [(signed char)3] = 15895748821431384543ULL;
            }
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-27))));
                var_29 = 8307797524349938164ULL;
            }
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        {
                            arr_64 [i_2] [i_15] [16ULL] [(signed char)9] [i_16] [0] [i_17] = ((/* implicit */int) ((arr_26 [i_15] [i_16 - 1] [i_16] [3ULL]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1729055019U)) || (((/* implicit */_Bool) var_6))))))));
                            arr_65 [i_15] [(unsigned char)12] [i_15] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_12)))) ? (16032698641250396875ULL) : (((((/* implicit */_Bool) arr_16 [9U] [i_12] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [10ULL]))) : (var_9)))));
                            var_30 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)96))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [0] [i_2])) - (((/* implicit */int) arr_11 [i_12] [i_15])))))));
                var_32 = ((/* implicit */signed char) (+(((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [12] [i_12] [(unsigned char)18] [16ULL])))))));
                var_33 = ((/* implicit */unsigned int) ((int) var_11));
                var_34 = ((/* implicit */unsigned int) ((signed char) 1729055022U));
            }
        }
        arr_66 [i_2] [17U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2])) ? (var_13) : (arr_13 [i_2] [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 20; i_18 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
        {
            for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) 
            {
                {
                    arr_75 [i_19] [i_18] = ((/* implicit */unsigned long long int) ((int) arr_70 [i_20]));
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 20; i_21 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 0; i_22 < 20; i_22 += 3) 
                        {
                            arr_81 [i_18] [i_19] [i_19] [i_18] [(_Bool)1] [i_21] [5ULL] = ((/* implicit */unsigned int) arr_73 [5] [i_19]);
                            arr_82 [i_18] [i_18] [(signed char)12] [i_18] [i_18] [10ULL] = ((unsigned long long int) arr_73 [i_22] [i_22]);
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 3) 
                        {
                            arr_86 [i_18] = ((/* implicit */signed char) ((((-1413476256) + (2147483647))) >> (((((int) var_10)) + (1135404379)))));
                            var_35 = ((/* implicit */unsigned int) var_13);
                            arr_87 [i_18] [i_18] [13] [i_20] [i_21] [i_21] [i_23] = ((17ULL) % (((/* implicit */unsigned long long int) var_8)));
                        }
                        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
                        {
                            arr_92 [i_24] [i_19] &= ((/* implicit */unsigned int) arr_68 [i_21] [i_19]);
                            arr_93 [2ULL] [i_19] [i_19] [i_18] = ((/* implicit */unsigned long long int) arr_89 [i_18] [8]);
                        }
                        arr_94 [i_21] [i_18] [(_Bool)1] [i_18] [i_18] [i_18] = (~(((/* implicit */int) arr_78 [i_18] [i_18] [19] [i_18] [11U] [i_18])));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1413476257)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) : (var_13)));
                        arr_95 [i_18] [i_20] [i_20] [i_21] &= ((/* implicit */unsigned int) ((_Bool) ((17ULL) ^ (((/* implicit */unsigned long long int) arr_67 [i_18])))));
                    }
                    for (int i_25 = 0; i_25 < 20; i_25 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 13517199433399923707ULL)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) var_1))))));
                        /* LoopSeq 3 */
                        for (int i_26 = 0; i_26 < 20; i_26 += 2) /* same iter space */
                        {
                            var_38 -= ((/* implicit */unsigned long long int) 63U);
                            arr_101 [i_25] [i_25] [i_25] [(_Bool)1] [i_18] = var_8;
                            arr_102 [i_18] [i_19] [i_19] [(_Bool)1] [i_19] = ((/* implicit */unsigned int) 14631038648336897010ULL);
                        }
                        for (int i_27 = 0; i_27 < 20; i_27 += 2) /* same iter space */
                        {
                            var_39 = ((/* implicit */_Bool) ((-1) & (((/* implicit */int) arr_77 [i_25]))));
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_72 [(_Bool)1] [19])) : (-1413476244)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 27328839U)) < (13517199433399923738ULL))))) : (var_2)));
                            var_41 = ((/* implicit */unsigned int) ((arr_69 [i_18] [i_20]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15)))));
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            arr_108 [i_18] [i_18] [i_20] [i_18] [i_28] = ((/* implicit */unsigned char) ((var_0) ^ (((/* implicit */unsigned int) arr_89 [(signed char)7] [i_20]))));
                            var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                            var_43 += ((/* implicit */_Bool) ((var_3) * (var_0)));
                        }
                        var_44 = ((/* implicit */unsigned long long int) (unsigned char)63);
                    }
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (-(var_8))))));
        arr_109 [i_18] = (+(var_13));
        arr_110 [i_18] = ((/* implicit */unsigned char) (~(2601918218519958696ULL)));
    }
}
