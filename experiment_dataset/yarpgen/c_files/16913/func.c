/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16913
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_2))));
    var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-4)) * (((/* implicit */int) var_16))));
    var_20 = ((/* implicit */_Bool) (((+(6549760341258396212LL))) / (((/* implicit */long long int) (-(var_13))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_21 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0 + 1])) >= ((-(((/* implicit */int) var_7)))))) ? (((unsigned long long int) var_12)) : (((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
        var_22 = ((/* implicit */short) var_12);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 += ((/* implicit */unsigned char) ((int) var_13));
        /* LoopSeq 2 */
        for (short i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) min((((arr_4 [i_2 - 2] [i_3 - 1]) + (arr_4 [i_2 + 1] [i_3 - 1]))), (max((arr_4 [i_2 + 2] [i_3 + 1]), (((/* implicit */unsigned int) var_12))))));
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned char)4] [i_2] [i_3]))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_14))));
                            var_27 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((long long int) var_7))))) * (0U)));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) 0U);
            }
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_17 [i_1] [i_1] [i_2] [i_6] = ((((/* implicit */int) var_5)) >= (arr_12 [i_1] [i_2 + 2] [i_2 + 2] [(short)6] [i_2 + 2]));
                arr_18 [i_6] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((unsigned long long int) ((arr_9 [i_1] [i_2 - 1] [i_6] [i_6] [i_8]) ? (((/* implicit */int) arr_24 [i_1] [i_2 - 2] [i_6] [2U] [i_8 + 2])) : (((/* implicit */int) (signed char)3))))))));
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                            var_31 = ((/* implicit */short) (((-(var_11))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_21 [i_8 - 1] [i_8 - 2] [i_8] [i_8] [i_8 - 2] [i_8 + 1]) : (arr_21 [i_8 - 1] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 3] [i_8 + 1]))))));
                            arr_25 [i_8 + 1] [i_1] [i_7] [i_7] [i_6] [i_1] [i_1] = arr_22 [i_8] [i_6] [i_6] [i_2] [i_1];
                        }
                    } 
                } 
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_29 [4ULL] [4ULL] [i_1] |= (short)-14309;
                var_32 = ((/* implicit */short) var_5);
                var_33 = (((!(((((/* implicit */int) (_Bool)1)) >= (var_12))))) ? ((((!(var_2))) ? (((/* implicit */unsigned long long int) var_6)) : ((-(var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) 2998444730U))) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)44564)))) : (((/* implicit */int) arr_23 [i_1] [i_2] [i_9] [i_2 + 1] [i_1])))) / (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14309))) * (2361948196189408082ULL))))));
                var_35 ^= ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * ((-(((/* implicit */int) var_17))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) >= (var_15)))));
            }
            var_36 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_26 [i_2 + 2] [i_2 + 2] [i_2 - 2])))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */_Bool) ((signed char) ((var_16) ? (((var_17) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (var_10))));
                            arr_37 [i_1] [i_1] [i_1] [i_11] [i_1] = ((/* implicit */unsigned int) var_14);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_13 = 1; i_13 < 9; i_13 += 3) 
        {
            arr_41 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13 - 1])) ? (arr_35 [i_13 + 1] [i_13 + 2] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))));
            var_38 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) ((_Bool) 2636313025U))))));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_39 |= ((/* implicit */signed char) ((arr_39 [i_14]) * (((((/* implicit */int) arr_3 [(short)6])) / (var_13)))));
        var_40 -= ((/* implicit */unsigned char) arr_35 [i_14] [i_14] [i_14]);
        arr_45 [i_14] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_17) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_38 [i_14]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                {
                    var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_46 [i_14] [i_15] [i_16]))));
                    arr_51 [i_14] [i_15] [i_15] [i_16] = ((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_14] [i_15] [i_16])) ? (((/* implicit */int) arr_28 [i_14] [i_15] [i_15])) : (((/* implicit */int) (signed char)74)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_17 = 1; i_17 < 8; i_17 += 1) 
                    {
                        arr_54 [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_17 + 3] [i_17 + 1] [i_17 + 3] [i_17 + 2]))));
                        var_42 = ((/* implicit */_Bool) var_5);
                    }
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                    {
                        arr_59 [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [(_Bool)1] [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : ((((_Bool)1) ? (11059074260088884444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((5880412363173978977ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48)))))) ? (((((/* implicit */_Bool) 5880412363173978977ULL)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) (signed char)-117)))) : (((/* implicit */int) (_Bool)1)))))));
                        arr_60 [i_14] [i_18] [i_16] [i_15] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-14309)) ? (((/* implicit */int) (short)14309)) : (((/* implicit */int) var_17)))) >> (((min((var_0), (((/* implicit */unsigned long long int) (signed char)-118)))) - (2824513434527804415ULL)))))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (1522532480))) << (((var_3) + (1409576569))))) : (((((/* implicit */int) var_16)) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-26026))))))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) max((((((/* implicit */_Bool) var_11)) ? (arr_57 [2ULL] [i_15] [i_15]) : (arr_57 [i_14] [i_15] [i_16]))), (arr_57 [i_15] [i_15] [i_18]))))));
                        arr_61 [i_14] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1331961226)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27783))) : (1296522577U)));
                    }
                    for (long long int i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_20 = 2; i_20 < 9; i_20 += 4) 
                        {
                            arr_66 [i_15] [i_14] = ((/* implicit */unsigned int) var_15);
                            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14] [i_19] [i_14])) ? (((/* implicit */unsigned long long int) var_10)) : (12566331710535572626ULL)))))) ? (((/* implicit */int) var_8)) : (var_12)));
                            arr_67 [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_48 [i_20 - 2])))) ? (((var_14) ? (((/* implicit */int) arr_48 [i_20 + 2])) : (((/* implicit */int) arr_48 [i_20 - 2])))) : (((/* implicit */int) arr_48 [i_20 - 2]))));
                        }
                        arr_68 [10ULL] [i_14] [i_16] [i_14] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -167589496)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) : (1708789664U))));
                    }
                }
            } 
        } 
        var_45 = ((/* implicit */short) var_14);
    }
    /* LoopNest 2 */
    for (short i_21 = 0; i_21 < 16; i_21 += 4) 
    {
        for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) 
        {
            {
                arr_76 [4U] [i_22] = ((/* implicit */unsigned int) var_4);
                arr_77 [i_22] [i_22] [(unsigned short)7] = ((/* implicit */int) ((((((/* implicit */_Bool) 12999875571178896425ULL)) ? (5880412363173978959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_72 [i_21])) : (((/* implicit */int) arr_72 [i_22])))))));
                var_46 = ((/* implicit */signed char) var_3);
                var_47 ^= ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_8))))));
            }
        } 
    } 
}
