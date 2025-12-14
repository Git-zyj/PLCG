/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163792
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [9] = ((/* implicit */unsigned long long int) ((unsigned int) min((((unsigned int) 5066551542330682131LL)), (((/* implicit */unsigned int) arr_2 [i_0])))));
        var_15 = ((/* implicit */unsigned long long int) max((min(((~(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (unsigned short)58316)) ? (((/* implicit */int) (short)-18354)) : (((/* implicit */int) (short)32767)))))), (((/* implicit */int) ((short) ((10833167425624754316ULL) ^ (((/* implicit */unsigned long long int) 2370282475U))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (7613576648084797299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_4 [6LL] [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((unsigned char) (short)18353));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18353)) ? (((/* implicit */int) (unsigned short)22155)) : (((int) (-9223372036854775807LL - 1LL)))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_19 = (-(((/* implicit */int) arr_4 [i_1] [i_2])));
            var_20 = ((/* implicit */unsigned short) 7613576648084797320ULL);
            /* LoopSeq 1 */
            for (short i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_7)))));
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
                {
                    arr_15 [3LL] [i_2] [(short)16] [i_1] [i_4 + 1] = ((/* implicit */unsigned short) ((int) (short)-18354));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-6404041205788253806LL) : (683558717356840668LL)));
                        var_23 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) (short)-11102)))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_1] [i_2] [2U] [i_2] [i_1] = ((/* implicit */unsigned short) 10833167425624754294ULL);
                        var_24 = ((/* implicit */unsigned char) var_0);
                        arr_21 [i_1] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) (-(((unsigned int) 817472655))));
                        var_25 = ((/* implicit */int) 7613576648084797310ULL);
                        var_26 = ((/* implicit */short) var_5);
                    }
                    var_27 = ((/* implicit */unsigned long long int) ((arr_19 [i_3] [i_3 + 4] [i_1]) >> (((/* implicit */int) ((((/* implicit */int) var_6)) > (522224235))))));
                }
                for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    var_28 &= ((/* implicit */short) 10833167425624754312ULL);
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                    {
                        arr_27 [i_1 - 1] [i_2] [i_3] [i_7] [i_7] [i_8] [i_1] = ((unsigned short) ((-6404041205788253825LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))));
                        var_29 = ((/* implicit */unsigned char) var_8);
                        var_30 = ((/* implicit */unsigned char) 7613576648084797320ULL);
                    }
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        var_31 = var_6;
                        arr_31 [i_9] [i_7] [i_3] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -6404041205788253806LL)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (unsigned short)42177))));
                        var_32 -= ((/* implicit */long long int) arr_22 [i_9] [i_3] [i_2] [i_9]);
                    }
                }
                var_33 = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (short)-24537)))));
                arr_32 [(short)4] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) 10833167425624754312ULL));
                arr_33 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (short)-1);
            }
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_29 [i_10] [i_1] [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))));
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned char)6))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned short)22175))) ? (((/* implicit */int) arr_28 [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 2] [i_1]))));
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) 3644251777U))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (short)32297))));
        }
        for (unsigned short i_13 = 2; i_13 < 15; i_13 += 1) 
        {
            arr_45 [i_1] [i_1] [i_13] = ((/* implicit */short) ((18103664149805971053ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10833167425624754339ULL)) && (((/* implicit */_Bool) (unsigned char)155))))))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) ((unsigned short) (~(-6195596581058255089LL))));
                        var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)23383))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 17; i_17 += 2) 
                {
                    for (long long int i_18 = 3; i_18 < 17; i_18 += 2) 
                    {
                        {
                            arr_60 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-18362))) - (arr_17 [i_1 + 3] [(signed char)11] [i_16] [i_17] [i_1] [4U] [i_16]))) - (((long long int) var_13))));
                            var_41 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)31337)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_1 + 1] [i_17] [i_16]))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_1] [(unsigned short)7] [(unsigned short)16] [i_13 + 2] [(unsigned short)16] [i_16] [i_1])) ? (arr_35 [i_1]) : (((/* implicit */long long int) 1092131208U)))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 3; i_19 < 17; i_19 += 2) 
                {
                    for (unsigned int i_20 = 3; i_20 < 14; i_20 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 1901879002)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned short)43357)))));
                            arr_67 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)22160))));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) -718276508)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_30 [i_1] [(unsigned char)8] [i_19] [i_1] [i_13] [i_1 + 2] [i_1])) ? (3578667588U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_1] [i_1] [i_1])))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_21 = 1; i_21 < 17; i_21 += 2) 
            {
                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 2] [i_13] [i_21 - 1] [8LL])) : (((/* implicit */int) (unsigned short)62176)))))));
                /* LoopSeq 4 */
                for (short i_22 = 0; i_22 < 18; i_22 += 2) 
                {
                    var_46 = var_12;
                    arr_74 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (signed char)122)))));
                    var_47 = ((/* implicit */short) max((var_47), (((short) ((unsigned short) var_13)))));
                    arr_75 [i_1] [i_13] [i_21 - 1] [i_1] [i_1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */long long int) var_14))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)34232))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_13))))));
                }
                for (unsigned long long int i_23 = 2; i_23 < 17; i_23 += 1) 
                {
                    var_48 = ((/* implicit */long long int) ((unsigned short) arr_48 [i_1] [i_13 + 3] [i_21 + 1]));
                    var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [8U] [i_1] [8U]))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22175)))));
                    arr_78 [i_1] [i_13] [i_21] [i_1] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_8)))))));
                }
                for (short i_24 = 0; i_24 < 18; i_24 += 4) 
                {
                    var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) 274873712640LL))));
                    var_51 = ((((/* implicit */int) var_7)) != (((/* implicit */int) ((short) (short)32748))));
                    arr_81 [17ULL] [i_21 - 1] [i_21 + 1] [i_1] [i_13] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31286)) ? (2521812245U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34232)))));
                }
                for (unsigned short i_25 = 1; i_25 < 17; i_25 += 2) 
                {
                    var_52 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)208))));
                    var_53 = ((unsigned short) ((long long int) (short)18354));
                    arr_85 [i_1] [i_1] [i_13] [i_13] [i_21] [i_21] = ((/* implicit */short) (+(var_14)));
                    var_54 = ((/* implicit */short) ((((/* implicit */long long int) 2147483647)) + (-5496910117914831359LL)));
                    arr_86 [i_1] [i_21] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_6))))));
                }
            }
            arr_87 [i_1 - 2] [i_13] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43381)) + (((/* implicit */int) (short)20582))))) ? (((/* implicit */int) (signed char)120)) : (((((/* implicit */_Bool) (unsigned short)43381)) ? (((/* implicit */int) arr_28 [17] [i_13] [i_1])) : (2147483647)))));
        }
    }
    var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((long long int) 80138145U)))));
    var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)120)), ((short)-1))))))) ? (((3202836088U) << (((/* implicit */int) (short)0)))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-18368)))))))));
    var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) var_9))));
}
