/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102117
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_9))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26072)) ? (arr_0 [i_0]) : (var_6)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (signed char)99)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-99))));
        var_11 = (+((+(arr_0 [i_0 - 1]))));
        var_12 = ((/* implicit */unsigned short) (+(3826606983U)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                arr_10 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_2 - 1]);
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (signed char)-99))));
            }
            var_14 = ((/* implicit */int) (+(arr_4 [i_1])));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) + (var_6))))))));
        }
        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
        {
            arr_14 [i_1] [i_1] [i_4 - 2] = ((/* implicit */int) (signed char)-108);
            /* LoopSeq 3 */
            for (long long int i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                arr_17 [i_1] [i_4 + 2] [i_4] [i_5] = ((/* implicit */int) (signed char)-1);
                arr_18 [i_1] [i_4 - 1] [i_5] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_12 [i_5 - 1]))))));
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_21 [i_1] [i_4] [i_6] |= ((((/* implicit */_Bool) ((((/* implicit */long long int) -587248407)) + (7379946030978973711LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 2147483647))))))) : (((((/* implicit */_Bool) (+(arr_16 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))) : (min((((/* implicit */unsigned long long int) arr_4 [i_4])), (arr_7 [i_1] [i_4 - 1]))))));
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_6])) ^ (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-54)), (arr_8 [i_1] [i_1] [i_1]))))));
                arr_22 [i_1] |= ((/* implicit */signed char) arr_7 [i_4 + 2] [i_6]);
                arr_23 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)114)) & (((/* implicit */int) (unsigned char)114))))));
                var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_4 - 2]))));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) 916112227957291398LL)) != (33776997205278720ULL)))))))));
                var_18 = ((/* implicit */unsigned char) var_8);
                arr_27 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_8)));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                {
                    for (signed char i_9 = 4; i_9 < 18; i_9 += 4) 
                    {
                        {
                            arr_35 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)36)) ? (arr_5 [i_8 + 4] [i_4 - 1]) : (var_6)));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(var_4))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_10 = 2; i_10 < 18; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_11 = 3; i_11 < 18; i_11 += 2) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)43))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (var_5) : (((/* implicit */int) arr_36 [i_11 + 1] [i_10 + 1] [i_1])))))));
                var_21 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_29 [i_1] [i_10])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-99)) * (((/* implicit */int) arr_36 [i_1] [i_10 - 1] [i_10 - 1]))))) : (arr_24 [i_11 - 2]));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_16 [i_1] [i_10 + 1] [i_11] [i_11 + 1]))));
            }
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 3; i_13 < 17; i_13 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1] [i_10 - 2] [i_12] [i_13 + 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_10 - 1] [i_10 - 2] [i_10] [i_12]))))))));
                    arr_44 [i_1] [i_10] [i_1] [i_13] [i_13 - 3] = ((/* implicit */int) (~(4294967295U)));
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) 468360312U))));
                        var_25 = ((/* implicit */short) (unsigned short)8161);
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        arr_50 [i_1] [i_13] [i_13 + 2] [i_10] [i_15] = ((/* implicit */unsigned char) (-(((var_0) ^ (var_0)))));
                        arr_51 [i_15] [i_15] [i_15] [i_15] [i_15] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)43))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_13 - 3] [i_13] [i_13 + 1] [i_13] [i_13])) < (((/* implicit */int) (signed char)-100))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        arr_55 [i_1] [i_13] [i_12] [i_12] [i_16] [i_16] = (~(arr_7 [i_13 + 1] [i_10 - 1]));
                        arr_56 [i_13] [i_16] [i_12] [i_13] [i_16] [i_12] [i_13 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)36))));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned short) arr_36 [i_13 - 3] [i_10 - 2] [i_10]));
                        arr_57 [i_10] [i_13] [i_13] [i_10] [i_13] [i_10] = ((/* implicit */unsigned int) var_4);
                    }
                }
                for (unsigned short i_17 = 3; i_17 < 17; i_17 += 1) /* same iter space */
                {
                    var_28 |= ((/* implicit */int) (signed char)-82);
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                    /* LoopSeq 1 */
                    for (int i_18 = 3; i_18 < 16; i_18 += 4) 
                    {
                        arr_64 [i_1] [i_17] [i_12] [i_18 + 4] [i_18 + 4] [i_1] = ((/* implicit */unsigned short) (~(1729382256910270464ULL)));
                        arr_65 [i_1] [i_10 + 1] [i_17] [i_18] = ((unsigned int) var_8);
                    }
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_40 [i_10 + 1] [i_10 + 1] [i_10 - 2])))))));
                }
                arr_66 [i_1] [i_12] = ((/* implicit */short) var_5);
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) arr_16 [i_12] [i_10] [i_1] [i_1]))));
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((unsigned char) ((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
            }
            var_33 = ((/* implicit */long long int) var_8);
        }
        arr_67 [i_1] = (+((+(((/* implicit */int) arr_15 [(unsigned short)12])))));
        arr_68 [i_1] = ((((/* implicit */_Bool) max(((unsigned char)114), (((/* implicit */unsigned char) arr_25 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62290))))) : (arr_29 [i_1] [18ULL]));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 19; i_19 += 2) 
        {
            for (unsigned short i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                {
                    arr_76 [i_19] [i_20] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)65513))))));
                    /* LoopNest 2 */
                    for (long long int i_21 = 3; i_21 < 19; i_21 += 1) 
                    {
                        for (signed char i_22 = 3; i_22 < 17; i_22 += 1) 
                        {
                            {
                                var_34 *= ((/* implicit */short) (~((-(12574988127469347769ULL)))));
                                arr_83 [i_1] [i_21] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) min((3826607008U), (((/* implicit */unsigned int) ((unsigned char) 925160771064673256ULL)))))), (-7578862486120808734LL)));
                                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((7379946030978973711LL) != (7578862486120808733LL))))));
                            }
                        } 
                    } 
                    arr_84 [i_1] [i_1] [i_19] [i_1] = ((long long int) ((((/* implicit */_Bool) (~(1099509530624LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_75 [i_1] [i_1] [i_1])) > (((/* implicit */int) arr_73 [i_1])))))) : (((unsigned int) var_8))));
                }
            } 
        } 
    }
    for (int i_23 = 4; i_23 < 19; i_23 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
        var_37 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) * (arr_86 [i_23 - 4] [i_23 + 1])))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 793841261)) ? (3826606983U) : (346936392U)))))));
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) -793841262)) ? (7903506347883375044LL) : (((/* implicit */long long int) 1552517121U))));
    }
    var_39 = ((/* implicit */signed char) (+(var_5)));
}
