/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131494
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)-25228)) : (-1901515240)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1901515224)) ? (((/* implicit */int) (_Bool)1)) : (1901515223)));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((int) arr_0 [i_0] [i_0]));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_2))));
            arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) arr_5 [i_1] [i_0] [i_0]));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_12 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_10 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_0] [i_2] [i_0])) : (((/* implicit */int) var_4))))) : (((unsigned long long int) var_7))));
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_2 [i_0]));
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) arr_6 [i_0] [i_3])))))));
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((short) arr_0 [i_0] [i_3]));
        }
        var_14 = ((/* implicit */_Bool) ((long long int) 8149325121162320444ULL));
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 3; i_6 < 12; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((unsigned char)184), (((/* implicit */unsigned char) (signed char)-65))))), (max((((((/* implicit */_Bool) arr_22 [i_7] [i_6 - 2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (arr_27 [i_7] [i_5] [i_6 - 1] [i_7] [i_5]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (signed char)-65)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_4] [i_5] [i_7] [i_7] [i_8] [i_6 - 3] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -419751206449434482LL)) ? (var_3) : (var_3)))) ? (((/* implicit */int) (signed char)-74)) : (min((var_3), (((/* implicit */int) (signed char)-52)))))), (((/* implicit */int) ((signed char) arr_28 [i_4] [i_6 - 2] [i_6 - 3])))));
                            var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_23 [i_6 + 3] [i_5] [i_6 - 2] [i_7])) ? (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [i_4] [i_4])) : (var_10))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_4])), (arr_29 [i_4] [i_4] [i_4] [i_5] [i_6 - 3] [i_7] [i_8])))))), (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-81))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_7)), (arr_28 [i_8] [i_7] [i_6 + 1])))) : (((/* implicit */int) ((signed char) arr_21 [i_4] [i_8] [i_6 - 1])))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_4] [i_5] [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max(((signed char)-60), ((signed char)74))))) ? (10297418952547231171ULL) : (10297418952547231192ULL)));
                            arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) max((((int) arr_31 [i_9] [i_4] [i_6 - 3] [i_4] [i_6 - 3])), (max((((var_7) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_34 [i_4] [i_5] [i_4] [i_6 + 2] [i_7] [i_9]))))));
                            arr_38 [i_4] [i_4] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))));
                            var_17 = ((/* implicit */signed char) ((_Bool) max((max((-1901515224), (((/* implicit */int) arr_33 [i_4] [i_4])))), (((/* implicit */int) var_2)))));
                            arr_39 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_4])), (10297418952547231171ULL)))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_1))))) : (((/* implicit */int) ((unsigned char) (short)8191))))), (min((min((((/* implicit */int) var_5)), (var_3))), (((/* implicit */int) var_8))))));
                        }
                        for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            arr_44 [i_10] [i_7] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) arr_18 [i_4])), ((unsigned char)58))))), (((((/* implicit */_Bool) (unsigned short)29682)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (unsigned char)0))))));
                            arr_45 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-33)), (-1901515224)))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_43 [i_6 + 3] [i_6 + 1] [i_6 - 1] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-67))))));
                            arr_46 [i_5] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_21 [i_4] [i_4] [i_4]))) ? (max((1010359154), (-1546509464))) : (var_3))));
                            arr_47 [i_10] [i_7] [i_4] [i_5] [i_4] = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_42 [i_5] [i_5] [i_4] [i_7])), (arr_26 [i_4])))) ? (max((10297418952547231166ULL), (10297418952547231171ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (-1901515208)))))), (((/* implicit */unsigned long long int) ((signed char) var_5)))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_50 [i_4] [i_4] [i_5] [i_4] [i_6 + 2] [i_11] = max((((/* implicit */unsigned short) ((signed char) arr_23 [i_6 + 3] [i_6 + 2] [i_6 - 2] [i_6 + 2]))), (((unsigned short) min((((/* implicit */int) (unsigned short)43560)), (arr_21 [i_11] [i_5] [i_4])))));
                        arr_51 [i_4] [i_5] [i_6 + 1] [i_11] [i_5] [i_5] &= ((/* implicit */_Bool) min((max((8282857320504283666LL), (((/* implicit */long long int) (signed char)66)))), (((/* implicit */long long int) ((signed char) (signed char)-37)))));
                        arr_52 [i_4] [i_5] [i_4] [i_11] [i_11] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_28 [i_4] [i_5] [i_6 - 3])), (arr_35 [i_4] [i_5] [i_6 + 1] [i_11] [i_4] [i_5])))) ? (arr_43 [i_6 + 2] [i_5] [i_6 + 1] [i_4]) : (((/* implicit */unsigned long long int) ((int) -1901515240))))), (((/* implicit */unsigned long long int) max((((int) arr_41 [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_24 [i_4] [i_5] [i_6 + 3])))))))));
                        arr_53 [i_4] [i_4] [i_5] [i_6 + 3] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 10297418952547231184ULL))) ? (((int) min((((/* implicit */short) (signed char)-80)), (var_0)))) : (((((/* implicit */_Bool) 8149325121162320449ULL)) ? (((/* implicit */int) (unsigned short)59506)) : (((/* implicit */int) arr_40 [i_6 + 3] [i_6 + 2] [i_6 + 3] [i_6 + 2] [i_6 - 3] [i_6 + 1] [i_6 + 2]))))));
                    }
                }
            } 
        } 
        arr_54 [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) 10297418952547231184ULL));
        arr_55 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)59507)), (-1901515224)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-85)))) : (max((8149325121162320435ULL), (((/* implicit */unsigned long long int) (unsigned short)6029))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            arr_62 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned char) var_8));
            arr_63 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned short) -1901515228));
            var_18 = ((/* implicit */signed char) ((unsigned char) var_11));
            var_19 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_20 [10])) : (arr_57 [(short)2]))));
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) : (9829693686529358955ULL)))) ? (((/* implicit */int) (signed char)-67)) : (1901515239))))));
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                for (int i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)50));
                            arr_77 [i_17] [i_12] [i_15] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -720686046)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_17] [i_16] [i_12] [i_14] [i_12] [i_14] [i_12]))) : ((-9223372036854775807LL - 1LL))));
                            arr_78 [i_12] [i_14] [i_15] [i_12] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (arr_21 [i_12] [i_14] [i_15])))) ? (((/* implicit */int) arr_49 [i_12] [i_12] [i_15] [i_16])) : (var_3));
                        }
                        for (int i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
                        {
                            arr_81 [i_12] [2] [i_12] [i_12] [i_12] [i_12] [i_12] &= ((/* implicit */unsigned long long int) ((long long int) var_1));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_79 [i_12]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_5)) ? (10297418952547231168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28709)))))));
                        }
                        for (int i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            arr_85 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) -2124470168))) ? (((/* implicit */int) ((signed char) 2))) : (var_3)));
                            arr_86 [i_19] [i_12] [i_12] = ((((/* implicit */_Bool) (signed char)74)) ? (var_10) : (((/* implicit */int) var_2)));
                            arr_87 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((int) (_Bool)1));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_12] [i_14] [i_15] [i_14] [i_14])) ? (2100357029) : (((/* implicit */int) (unsigned char)250))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned short) min((min((max((var_10), (-12))), (min((2026508242), (var_9))))), (((/* implicit */int) min((((unsigned short) var_7)), (((/* implicit */unsigned short) var_7)))))));
}
