/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124606
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [(unsigned short)0] = ((/* implicit */long long int) (-(arr_0 [i_0] [1ULL])));
        var_13 &= ((/* implicit */_Bool) 252ULL);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        arr_13 [(short)10] [i_2] [(short)3] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (239ULL) : ((+(arr_6 [i_3] [i_3 - 2] [(unsigned char)2] [i_3])))));
                        arr_14 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (unsigned char)242);
                    }
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_19 [i_0] [i_0] [14ULL] [i_2] [14ULL] [i_2] = ((/* implicit */_Bool) 3838956596797136440LL);
                        var_14 = ((/* implicit */unsigned int) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_22 [i_2] [i_1] [i_4] [i_4] [i_5] [i_2 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_2 + 2] [i_2 + 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0 + 1] [i_2 - 3] [i_2] [i_0 + 1]))))));
                            var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_21 [i_1] [i_4] [i_5])), (arr_0 [i_0] [i_0])))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((long long int) 7171002200871837198LL)) : (((/* implicit */long long int) (+(((/* implicit */int) var_12))))));
                            var_17 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)2048))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-25211))))) && (((/* implicit */_Bool) arr_11 [i_0 - 1] [i_1] [i_1] [i_2 - 3]))));
                            var_19 = 1993799059U;
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)24683)) + (((/* implicit */int) (unsigned short)28630))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_30 [i_0] [i_1] [i_2] [(unsigned short)8] [i_7] = ((/* implicit */unsigned int) (+(var_2)));
                            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned char)8)))) + (32)))));
                            var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [i_7] [i_2 + 2] [i_7]))));
                        }
                        var_23 = ((/* implicit */short) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                    }
                    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)1))));
                    var_25 = ((/* implicit */_Bool) (-(((arr_21 [i_0] [(short)4] [i_1]) ? (3769692647U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (arr_10 [i_0] [1LL] [i_2])))))))));
                    arr_31 [i_2] [(unsigned short)17] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (unsigned short)35929)))))) ? ((+(((((/* implicit */unsigned long long int) 3282987707U)) + (249ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4309584393848845812LL)) ? (((/* implicit */int) (_Bool)1)) : (-1))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            var_26 = ((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [18U]);
            arr_34 [i_0 + 1] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_27 *= ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_2)) ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_25 [i_0])))), (((/* implicit */int) arr_25 [i_8 + 1]))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_28 -= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_28 [i_0 - 1] [i_9] [i_0 + 1] [(_Bool)1] [i_0])))))))));
            var_29 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) ((((/* implicit */_Bool) arr_37 [1LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)56205))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            var_30 -= ((/* implicit */unsigned int) ((short) 0));
            var_31 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_16 [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_10])))) ? ((-(arr_15 [i_0] [i_0] [i_10] [(unsigned char)9]))) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_10] [i_0 - 1] [i_0 - 1]))));
        }
    }
    for (long long int i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
    {
        var_32 *= ((/* implicit */unsigned int) 18446744073709551375ULL);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 1; i_12 < 18; i_12 += 3) 
        {
            arr_45 [i_12] = ((/* implicit */unsigned short) ((unsigned int) 606298928U));
            var_33 += ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
            var_34 = ((/* implicit */short) var_2);
            var_35 -= ((/* implicit */long long int) (signed char)65);
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 1; i_13 < 22; i_13 += 2) 
    {
        arr_48 [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_46 [i_13 + 1]))));
        /* LoopSeq 3 */
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            arr_52 [i_13] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_46 [i_13])))) ? ((-(6199389191293873023ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
            arr_53 [i_13 - 1] [i_14] [i_14] = ((/* implicit */int) var_7);
        }
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_17 = 2; i_17 < 23; i_17 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned short) ((unsigned int) var_10));
                    arr_61 [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (unsigned char)6)))));
                    var_37 = ((/* implicit */long long int) ((arr_60 [i_13] [i_16] [i_13] [i_17 - 2]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -4309584393848845816LL)) ? (((/* implicit */unsigned long long int) 3769692647U)) : (var_11))))));
                    arr_62 [i_13] [i_16] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)20093)) ? (((/* implicit */int) (unsigned short)4787)) : (((/* implicit */int) arr_60 [i_13 + 1] [i_16] [i_16] [i_17])))) == (((/* implicit */int) (unsigned char)255))));
                }
                for (long long int i_18 = 2; i_18 < 23; i_18 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) ((unsigned char) 18446744073709551615ULL));
                    var_39 *= ((/* implicit */signed char) ((unsigned char) arr_64 [i_18 - 2] [i_13 + 2] [i_13 + 1]));
                }
                for (short i_19 = 4; i_19 < 21; i_19 += 4) 
                {
                    arr_69 [i_13 + 2] [i_16] [i_16] [i_19 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) 5181113399062614569ULL))) ? (((/* implicit */int) arr_47 [i_13 + 2])) : ((-(((/* implicit */int) arr_57 [i_13] [i_13]))))));
                    var_40 ^= ((/* implicit */long long int) 3282987707U);
                }
                for (long long int i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    arr_73 [i_16] [i_20] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_70 [i_13 + 1] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_70 [i_13 + 2] [i_13 + 2] [i_13 + 2]))));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_13] [(unsigned short)9] [i_13 - 1])) ? ((~(((/* implicit */int) arr_58 [16U] [i_15] [i_16] [i_20])))) : ((((_Bool)1) ? (((/* implicit */int) arr_51 [i_20])) : (((/* implicit */int) (unsigned short)65535))))));
                }
                var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (252ULL))) ^ (((/* implicit */unsigned long long int) 3282987692U))));
            }
            var_43 += ((/* implicit */unsigned long long int) (short)-23882);
            arr_74 [(signed char)16] [(short)17] = ((/* implicit */unsigned short) arr_57 [(unsigned short)17] [(unsigned short)17]);
        }
        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 1) 
        {
            var_44 -= ((/* implicit */_Bool) arr_51 [i_13]);
            var_45 -= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_65 [i_13 + 2]))));
        }
        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_13] [i_13 + 1] [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_13 - 1] [i_13 + 1]))) : (((long long int) var_9))));
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4817)) ? (3688668389U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62417)))))) ? (((/* implicit */int) arr_58 [i_13] [i_13 + 2] [i_13] [(unsigned char)15])) : (((/* implicit */int) var_9))));
    }
    var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (+(var_1))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)104)))) % (((((/* implicit */_Bool) var_2)) ? (606298919U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
