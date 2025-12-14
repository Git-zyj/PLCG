/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170051
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
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 16; i_4 += 4) 
                        {
                            var_15 += arr_5 [i_3];
                            var_16 ^= ((/* implicit */unsigned long long int) -4709827282307657184LL);
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_17 *= ((/* implicit */short) ((long long int) var_2));
                            var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0 - 3] [(unsigned short)5] [i_0] [i_0]))));
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            var_19 -= ((/* implicit */long long int) ((_Bool) arr_13 [i_0 - 1]));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (short)15817))));
                            var_21 = (~(-611353081317876234LL));
                            var_22 |= ((/* implicit */short) (-(((/* implicit */int) (short)16384))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 2; i_7 < 15; i_7 += 2) /* same iter space */
                        {
                            var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -611353081317876226LL)) ? ((~(((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7 + 1] [i_2] [(unsigned char)1] [i_0])))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (((/* implicit */unsigned long long int) 611353081317876243LL)) : (arr_3 [i_0 - 1])));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 2) /* same iter space */
                        {
                            var_25 -= ((/* implicit */unsigned long long int) -611353081317876234LL);
                            var_26 |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))));
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_8] &= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) (unsigned short)45665)))));
                            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_0 - 1] [i_1] [i_2] [i_3] [i_1] [i_1] [i_3]))));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((unsigned char) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((-611353081317876234LL) + (611353081317876249LL)))))))));
                            var_29 *= ((/* implicit */unsigned short) arr_22 [i_3] [i_9 + 2]);
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
                            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)45668)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))) : (17053962375003846726ULL))) : (((/* implicit */unsigned long long int) (+(611353081317876257LL))))));
                        }
                        var_32 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_0 - 3] [i_0] [i_1])) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_3]))));
                        var_33 = ((/* implicit */unsigned long long int) (short)-1);
                    }
                } 
            } 
            var_34 |= ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_1] [i_1] [i_0])) ? (arr_3 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_0] [i_1] [4ULL] [i_0] [i_1])))))));
            /* LoopSeq 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_35 -= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3781)))))));
                var_36 = ((/* implicit */unsigned char) (unsigned short)31483);
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (short)2))));
                    var_38 = ((/* implicit */long long int) arr_11 [i_0 - 2] [i_1]);
                }
                for (short i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    arr_38 [i_10] [i_1] [i_10 - 1] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)2))));
                    arr_39 [i_0 - 1] [i_12] &= ((/* implicit */short) ((unsigned char) 8829542843687464494LL));
                }
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    var_39 ^= ((/* implicit */_Bool) ((short) arr_30 [i_0] [i_1] [i_10] [(unsigned char)9]));
                    arr_44 [i_0 + 1] [i_0] [i_13] [i_0 - 1] [i_0] |= ((/* implicit */unsigned short) arr_15 [4LL] [i_1] [i_1] [i_10 - 1] [i_10 - 1]);
                    var_40 += ((/* implicit */short) ((long long int) (signed char)116));
                }
                for (unsigned char i_14 = 2; i_14 < 16; i_14 += 4) 
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-15)))))));
                    var_42 += var_7;
                    var_43 = arr_19 [i_0] [i_1] [i_10] [i_14];
                }
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (+(((/* implicit */int) arr_47 [i_0])))))));
                var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_15 - 1] [i_1])))))));
                var_46 |= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_17 [i_0] [10LL])))));
            }
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_16 - 1] [i_1] [i_1] [i_1] [i_1])))))));
                arr_54 [i_16] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_16 - 1] [i_0 - 3])) && (((/* implicit */_Bool) arr_6 [i_16 - 1] [i_0 - 3]))));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 17; i_18 += 2) 
                    {
                        {
                            var_48 *= ((/* implicit */signed char) ((arr_22 [i_17] [i_18]) ? (arr_10 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_1] [i_16 - 1] [i_18])))));
                            var_49 *= ((/* implicit */signed char) (~(((6932245392374243828LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30354)))))));
                        }
                    } 
                } 
                var_50 = ((/* implicit */_Bool) max((var_50), ((!(((/* implicit */_Bool) (unsigned short)58217))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_19 = 2; i_19 < 16; i_19 += 4) 
            {
                for (short i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    {
                        var_51 += ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_1] [i_19] [i_20]);
                        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) var_11))));
                    }
                } 
            } 
        }
        for (unsigned short i_21 = 0; i_21 < 17; i_21 += 4) /* same iter space */
        {
            var_53 += ((/* implicit */unsigned short) arr_42 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 - 3]);
            var_54 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (unsigned short)62439)))))));
            var_55 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)12795))) : (8829542843687464503LL))))));
        }
        var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_22 [i_0 + 1] [i_0])))) << (((/* implicit */int) arr_61 [i_0 - 1] [i_0 + 1])))))));
        var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 3])) && (arr_22 [i_0] [i_0 - 2]))))));
        var_58 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-57)) + (2147483647))) >> (((arr_53 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 3]) - (15768439686117539658ULL)))));
    }
    for (long long int i_22 = 2; i_22 < 18; i_22 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_23 = 0; i_23 < 21; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 21; i_24 += 2) 
            {
                {
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)34265))));
                    var_60 = ((/* implicit */unsigned long long int) var_3);
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (unsigned short i_26 = 2; i_26 < 18; i_26 += 4) 
                        {
                            {
                                var_61 = ((/* implicit */_Bool) (~(((/* implicit */int) (((!(((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((unsigned short) arr_71 [i_22]))))))));
                                var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned short)19871))) ? (min((((/* implicit */long long int) (unsigned char)218)), (((((/* implicit */_Bool) (unsigned short)30357)) ? (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_25]))) : (103079215104LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45670)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_63 -= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) | ((+(((/* implicit */int) arr_80 [i_22 - 2] [i_22]))))));
    }
}
