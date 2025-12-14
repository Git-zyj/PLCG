/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12511
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((_Bool) var_10)) ? (((/* implicit */long long int) (~(((/* implicit */int) min((arr_3 [i_0]), (var_8))))))) : (((var_1) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0]))))) : (((long long int) (unsigned char)22))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((1412536029U) >> (((/* implicit */int) (_Bool)1)));
            arr_8 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), ((short)10421))))) : (((((/* implicit */_Bool) 13211426645460226160ULL)) ? (2146408348U) : (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-7104)) | (((/* implicit */int) (short)-29266)))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 9; i_3 += 4) 
                {
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (short)0))));
                        arr_16 [i_2] [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2]))));
                        var_19 = ((/* implicit */_Bool) (+((-(((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0]));
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    {
                        arr_25 [i_6] = ((signed char) 13211426645460226153ULL);
                        arr_26 [i_6] [i_5] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((2016193322832314818LL) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_5] [i_6])))))), (5235317428249325463ULL))), (((/* implicit */unsigned long long int) min((arr_23 [i_4 + 1] [i_4] [i_5] [i_5] [i_6]), (arr_23 [i_4 + 1] [i_4] [i_5] [i_6] [i_6]))))));
                        arr_27 [i_6] [i_5] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned int) (unsigned char)207)))) || (((/* implicit */_Bool) (unsigned char)31))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3239))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_0] [i_0])))));
    }
    for (short i_7 = 4; i_7 < 10; i_7 += 1) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */short) 0U);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_7 + 1] [i_7 - 2] [i_7 - 3])) ? (((/* implicit */int) arr_29 [i_7 + 1])) : ((+(((/* implicit */int) (short)32767))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) 4294967288U))));
        }
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
        {
            var_24 += ((/* implicit */signed char) ((long long int) (-(((((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_9])) ? (5235317428249325442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
            var_25 = ((/* implicit */unsigned short) (+(((var_9) * (((/* implicit */long long int) 0U))))));
        }
        for (short i_10 = 1; i_10 < 9; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 10; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)37)) ? (2553250975U) : (4294967287U)))) < (min((((/* implicit */unsigned long long int) var_8)), (13211426645460226177ULL)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_28 [i_7 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)8)) && (((/* implicit */_Bool) (unsigned short)40180))))) : (((((/* implicit */int) (signed char)99)) ^ (((/* implicit */int) arr_28 [i_7 - 4]))))));
                            var_28 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_38 [i_13] [6LL])), (var_2))), (((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_10 + 2] [2ULL])) ? (1804606853U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_45 [i_10] [i_13] = ((4294967276U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_35 [i_10] [i_10] [i_10]) < (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13] [i_7 - 2] [i_10] [i_10] [i_13]))))))));
                            var_29 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) < (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60926)) || (((/* implicit */_Bool) var_11)))))))) & (((/* implicit */int) (signed char)43))));
                        }
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) (unsigned short)65533);
                            arr_49 [i_7] [i_14] [i_14] [i_10] [i_10] [i_12] = ((/* implicit */short) (-((-(((/* implicit */int) arr_33 [i_11 + 1]))))));
                            arr_50 [i_12] [i_11] [i_10] [i_14] [i_11] = ((/* implicit */unsigned short) var_0);
                            arr_51 [i_14] [i_10] [i_7] [i_14] [i_14] &= ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_41 [i_14] [i_11] [i_12] [i_12] [i_10 - 1])))) >> (((/* implicit */int) ((((/* implicit */int) arr_41 [i_14] [i_12] [i_10] [i_10] [i_10 + 2])) < (((/* implicit */int) arr_41 [i_14] [i_14] [i_7] [i_12] [i_10 + 1])))))));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 9; i_15 += 2) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_58 [i_15] [i_10] [i_15] [i_10] [i_17] [i_15] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967268U)) ? (((/* implicit */unsigned long long int) 697632368U)) : (18446744073709551595ULL)))) ? (((17694378271785850891ULL) * (17364236753947822902ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            var_31 = arr_57 [i_10] [i_10] [i_10] [i_10] [i_10];
                            var_32 = ((/* implicit */signed char) max((752365801923700725ULL), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)0)))));
                        }
                    } 
                } 
            } 
            arr_59 [i_7] [i_7] [i_10] = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (min((-827880889104763551LL), (((/* implicit */long long int) arr_48 [i_10] [i_10] [i_10] [i_7] [i_7] [i_7]))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 2; i_19 < 10; i_19 += 1) 
            {
                for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    {
                        arr_70 [i_7] [i_20] [i_19] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                        arr_71 [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-38))));
                        var_33 = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) var_5))));
                        arr_72 [i_18] [i_19] [i_7] [i_20] |= ((/* implicit */long long int) (+(arr_69 [i_7 - 2] [i_19 + 1])));
                    }
                } 
            } 
            var_34 *= ((/* implicit */_Bool) arr_57 [i_7] [i_7] [i_7] [i_7 - 2] [i_7]);
            arr_73 [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (2811928092U)));
            arr_74 [i_7] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) 31U)))));
        }
        /* LoopNest 2 */
        for (signed char i_21 = 0; i_21 < 11; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                {
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((2685706206U) << (((((((/* implicit */_Bool) (unsigned char)156)) ? (((((/* implicit */_Bool) (short)-5865)) ? (3224204196U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38385))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7]))))) - (3224204174U))))))));
                    arr_80 [i_7] [i_21] [i_21] [i_22] = ((/* implicit */_Bool) (unsigned char)30);
                }
            } 
        } 
    }
    for (unsigned short i_23 = 2; i_23 < 18; i_23 += 2) 
    {
        arr_84 [i_23] [i_23] = ((unsigned int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 752365801923700725ULL))))) : (((/* implicit */int) (_Bool)1))));
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((var_10) % (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (var_0))), (((/* implicit */unsigned int) (unsigned char)15))))))))));
        var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) % (min((12463797158222925586ULL), (((/* implicit */unsigned long long int) arr_81 [i_23]))))))) ? (((/* implicit */int) (signed char)-20)) : ((-(((/* implicit */int) var_11))))));
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_38 = ((/* implicit */short) 752365801923700725ULL);
                    var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_23])) ? (-4013939807033848027LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) arr_86 [i_25]))))))))) ? (((/* implicit */unsigned int) (((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) ((_Bool) (unsigned char)10))) - (1)))))) : (max((1483039198U), (2685706219U))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) 182955646U)), (var_10))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)164)))))));
    /* LoopNest 2 */
    for (unsigned char i_26 = 1; i_26 < 11; i_26 += 4) 
    {
        for (unsigned char i_27 = 0; i_27 < 14; i_27 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_28 = 1; i_28 < 10; i_28 += 3) /* same iter space */
                {
                    arr_100 [i_28] [i_26] [i_27] [i_28] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((_Bool) arr_91 [i_27])))));
                    var_41 = (i_28 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_91 [i_26 + 3])) << (((((/* implicit */int) arr_99 [i_26 + 3] [i_28 + 2] [i_28])) - (103)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_91 [i_26 + 3])) << (((((((/* implicit */int) arr_99 [i_26 + 3] [i_28 + 2] [i_28])) - (103))) + (165))))));
                    var_42 = ((/* implicit */signed char) (-(((/* implicit */int) arr_87 [i_28] [i_26 + 2] [i_28 + 4]))));
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_28] [i_26] [i_27])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_91 [i_27]))));
                }
                for (short i_29 = 1; i_29 < 10; i_29 += 3) /* same iter space */
                {
                    arr_103 [i_26] [i_27] = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_82 [i_27])), (var_7)))))));
                    var_44 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) >= (arr_93 [i_29] [i_26 - 1]))))) / (1483039203U)));
                }
                arr_104 [i_26] [i_27] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_8)) & (((/* implicit */int) var_6)))) - (((/* implicit */int) arr_88 [i_27] [i_26 + 2] [i_26] [i_26])))))));
            }
        } 
    } 
    var_45 = (((!(((/* implicit */_Bool) 2736475051U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_9)))))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_16))));
    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_3))))))) : (var_0)));
}
