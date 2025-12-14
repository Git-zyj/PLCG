/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167387
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((((/* implicit */_Bool) var_9)) ? (var_13) : (var_4))) : (var_8)));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_19 -= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)11653)) ? (((/* implicit */int) (short)12873)) : (((/* implicit */int) (_Bool)1)))));
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))));
            arr_6 [i_0] [i_1] &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_2 = 4; i_2 < 15; i_2 += 4) 
        {
            arr_10 [(short)4] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)11665)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23464))) : (-5490474327190172246LL)));
            arr_11 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_17);
        }
        for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            var_20 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_3)))));
            var_21 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 8401950662105324569LL)) ? (((/* implicit */int) (short)-27121)) : (((/* implicit */int) (short)27120))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            arr_16 [(short)8] = var_6;
            arr_17 [i_0] = ((/* implicit */_Bool) ((short) var_6));
        }
        arr_18 [i_0] = (-(-1710348991298890010LL));
    }
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_15)))));
            /* LoopSeq 2 */
            for (long long int i_7 = 3; i_7 < 8; i_7 += 4) 
            {
                arr_26 [(short)4] [(short)4] [i_6] [i_5] &= ((/* implicit */unsigned short) ((unsigned long long int) (+(var_14))));
                var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) ? (((var_15) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) : ((~(((/* implicit */int) (unsigned short)65535))))));
            }
            for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
                {
                    var_24 &= ((/* implicit */unsigned long long int) var_7);
                    var_25 -= ((/* implicit */unsigned int) var_9);
                    var_26 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                }
                for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
                {
                    arr_34 [i_5] [6ULL] [6ULL] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_18)))));
                    arr_35 [i_5] [i_5] [(short)6] [i_5] [i_5] [i_5] &= ((/* implicit */short) var_15);
                    var_27 *= ((/* implicit */_Bool) ((int) ((var_18) ? (-2147483637) : (var_13))));
                }
                for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) /* same iter space */
                {
                    arr_38 [(unsigned short)5] [i_8] [(short)6] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                    var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_12) : ((-(((/* implicit */int) var_0))))));
                }
                var_29 |= ((short) ((unsigned int) var_1));
                /* LoopSeq 4 */
                for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        arr_45 [i_5] [i_6] [i_8] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) var_9)))));
                        arr_46 [i_13] [(short)0] [i_12] [i_8] [i_6] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) var_0))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                        arr_49 [i_5] [(_Bool)1] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_16))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                        var_31 = ((short) ((((/* implicit */_Bool) -8401950662105324579LL)) ? (1907230627U) : (1907230627U)));
                        arr_50 [i_5] [(signed char)8] [i_6] [(signed char)8] [(unsigned short)8] [i_14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2387736669U)) ? (26ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((long long int) var_3))));
                    }
                    for (short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_32 *= ((/* implicit */unsigned short) ((unsigned int) (+(((/* implicit */int) var_0)))));
                        arr_53 [i_15] [i_12] [i_8] [(_Bool)1] [(signed char)3] = ((/* implicit */int) ((unsigned short) ((int) var_5)));
                        var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 2387736668U))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_54 [i_5] [i_6] [i_8] = var_13;
                    var_34 -= ((long long int) var_17);
                }
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                {
                    var_35 |= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_14))));
                    var_36 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_14)))));
                }
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                {
                    arr_61 [i_17] [(signed char)3] [i_8 + 1] [i_17] = ((/* implicit */unsigned char) var_16);
                    var_37 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 8; i_19 += 3) /* same iter space */
                    {
                        arr_67 [i_5] [i_5] [i_8] [i_19] [i_18 + 1] [(short)4] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                        arr_68 [i_5] [i_19] [i_6] [i_6] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) ? (var_12) : (var_12)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_38 -= ((/* implicit */short) ((var_18) ? (((/* implicit */unsigned int) (-(var_12)))) : (var_17)));
                        var_39 -= ((/* implicit */_Bool) var_12);
                        var_40 += ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_6)))));
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 8; i_20 += 3) /* same iter space */
                    {
                        var_41 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) var_1)))));
                        var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_14)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (var_8)))));
                        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (+(var_3))))));
                    }
                    arr_71 [i_18] [i_8] [i_8] [7ULL] [i_6] [i_5] = ((/* implicit */unsigned int) var_15);
                    arr_72 [i_5] [i_18] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */short) ((signed char) var_7));
                }
                var_44 = ((/* implicit */long long int) var_17);
            }
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_77 [i_21] [8U] = ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
            /* LoopSeq 1 */
            for (long long int i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                arr_81 [i_22] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6ULL))))));
                var_45 |= ((/* implicit */long long int) var_1);
            }
        }
        var_46 ^= ((/* implicit */int) var_9);
    }
    var_47 = ((/* implicit */unsigned int) var_13);
}
