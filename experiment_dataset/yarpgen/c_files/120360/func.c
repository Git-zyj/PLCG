/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120360
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = var_11;
        var_19 = ((/* implicit */short) ((unsigned long long int) var_12));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_1] = var_7;
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        {
                            var_20 &= ((/* implicit */signed char) ((unsigned char) 6842936524540596007LL));
                            arr_15 [i_1] [9] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                            arr_16 [i_4] [i_1] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) (short)5797)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((unsigned short) var_10));
                    arr_19 [i_2 + 2] [i_2] [(short)2] [i_1] = ((/* implicit */unsigned int) (short)6333);
                    arr_20 [i_1] = ((/* implicit */long long int) (+(var_12)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        arr_23 [i_1] [i_1] [i_6] = ((/* implicit */int) ((long long int) var_17));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(var_2)));
                        arr_25 [i_1] [i_1] [i_5] [(unsigned short)3] = ((/* implicit */unsigned int) ((_Bool) (unsigned short)23741));
                        arr_26 [i_1] = ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23842))));
                        var_22 = ((/* implicit */int) var_2);
                    }
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_23 = ((18446744073709551612ULL) >> ((((+(((/* implicit */int) (short)32767)))) - (32725))));
                        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_2)))));
                        var_25 = ((/* implicit */short) var_9);
                    }
                }
            }
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) -16777216)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (-1185284087)))) : (((((/* implicit */_Bool) (signed char)64)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 18; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        {
                            arr_38 [i_0] [i_1] [i_1] [i_1] [i_10] = ((unsigned short) (signed char)118);
                            var_27 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (var_6));
                            var_28 = ((/* implicit */signed char) (+(var_6)));
                        }
                    } 
                } 
                arr_39 [4ULL] [4ULL] [4ULL] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)23843))));
            }
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_12 = 1; i_12 < 18; i_12 += 1) 
                {
                    arr_44 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)4882);
                    arr_45 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_17)) ? (3034534757338236486ULL) : (11984396605632972547ULL))));
                    var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_11)))) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) var_9))));
                }
                for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    arr_49 [i_0] [i_1] [i_11] [i_1] = ((/* implicit */_Bool) var_11);
                    var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59483))) : (var_6)))));
                }
                arr_50 [i_0] [i_0] [i_1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (+(var_12)))) : (4294967284U)));
                arr_51 [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((16ULL) >> (((((/* implicit */int) var_11)) - (196)))))) || (((/* implicit */_Bool) var_17))));
            }
            arr_52 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */long long int) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : ((+(var_7)))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (var_1) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((short) var_5)))));
            arr_55 [i_0] [i_0] = ((/* implicit */long long int) ((var_6) % (((/* implicit */unsigned long long int) var_1))));
            /* LoopSeq 2 */
            for (int i_15 = 1; i_15 < 19; i_15 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_16 = 4; i_16 < 19; i_16 += 1) 
                {
                    arr_60 [i_0] [i_16] [i_15 + 1] [19ULL] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                    arr_61 [i_16] [i_16] [i_14] [i_16] = ((/* implicit */signed char) 221757012U);
                }
                for (short i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) (+(((unsigned int) var_12))));
                        arr_67 [i_0] [(unsigned char)19] [i_15] [i_17] [5U] = ((/* implicit */unsigned short) ((unsigned long long int) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                        var_33 = ((/* implicit */unsigned long long int) var_12);
                        var_34 += ((/* implicit */long long int) 27ULL);
                    }
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) var_0);
                        arr_70 [i_0] [i_0] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) (short)-20)))));
                    }
                    for (short i_20 = 1; i_20 < 20; i_20 += 2) 
                    {
                        arr_73 [i_17] [i_17] [i_15] = ((/* implicit */unsigned short) ((unsigned char) (signed char)-1));
                        var_36 = ((/* implicit */unsigned int) ((var_18) % (((/* implicit */int) var_5))));
                        arr_74 [i_20] [i_17] [i_17] [(signed char)12] [(short)9] [(signed char)12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (var_18) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (+(var_1)))) : (var_2)));
                        var_37 = ((/* implicit */unsigned char) var_2);
                    }
                    arr_75 [i_17] [i_15 - 1] [i_15 + 2] [i_14] [i_0] = ((/* implicit */short) ((unsigned int) var_16));
                }
                for (short i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    arr_78 [i_21] [i_21] [i_14] [i_21] = ((/* implicit */unsigned long long int) ((_Bool) (short)25898));
                    var_38 |= ((/* implicit */unsigned char) ((-1784987151) > (((/* implicit */int) (short)-4882))));
                    arr_79 [i_21] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) var_0)));
                }
                for (unsigned int i_22 = 1; i_22 < 20; i_22 += 1) 
                {
                    arr_82 [i_0] [i_22] [i_0] [i_0] [i_0] = ((unsigned short) 685164693U);
                    arr_83 [i_22] [i_22] [i_14] [i_22] [19ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_8)))) ? ((+(var_16))) : (((int) -1270905742))));
                }
                var_39 = ((/* implicit */short) ((unsigned short) var_8));
            }
            for (short i_23 = 1; i_23 < 18; i_23 += 4) 
            {
                arr_87 [i_23] [i_14] = ((((/* implicit */_Bool) ((int) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : ((~(var_7))));
                /* LoopSeq 1 */
                for (unsigned short i_24 = 1; i_24 < 20; i_24 += 1) 
                {
                    var_40 = 18446744073709551600ULL;
                    var_41 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) var_18)) > (var_2))) ? (((/* implicit */int) ((short) var_2))) : ((+(((/* implicit */int) (signed char)-98))))));
                    var_42 = ((/* implicit */unsigned long long int) var_1);
                }
                arr_90 [i_0] [i_14] [i_0] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((_Bool) (short)5799)))));
                arr_91 [i_0] [i_0] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_2)) | (((((/* implicit */_Bool) 140298445U)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_3))))));
            }
        }
        for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned int) ((signed char) (+(4052252442U))));
            var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            arr_95 [i_0] [i_25] = ((/* implicit */short) var_9);
        }
    }
    var_45 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 699952390)), (var_7)))) + (min((((/* implicit */unsigned long long int) var_3)), (15370687087608759483ULL)))))));
}
