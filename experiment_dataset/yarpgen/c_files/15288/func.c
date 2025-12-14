/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15288
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned long long int) 0U);
        var_14 = ((/* implicit */int) (unsigned char)246);
        arr_5 [i_0] |= ((/* implicit */signed char) (short)-2938);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_15 += ((/* implicit */unsigned int) (unsigned char)28);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_4 = 3; i_4 < 24; i_4 += 3) 
                {
                    var_16 = ((/* implicit */int) 13309933652050924509ULL);
                    var_17 += ((/* implicit */short) 3980542145038963671ULL);
                    arr_15 [i_1] [i_1] [i_2] [(short)23] [(_Bool)1] [i_4] = ((/* implicit */long long int) (unsigned char)10);
                    var_18 ^= (unsigned char)28;
                }
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_19 = ((/* implicit */short) 1910260992);
                    arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) 4294967291U);
                    arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) -141175380356538176LL);
                    arr_21 [i_2] [i_2] [i_3] [22LL] = (unsigned char)255;
                    arr_22 [19U] [i_2] [i_2] = ((/* implicit */int) 2563340338461875212LL);
                }
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_20 = ((/* implicit */short) 27LL);
                    var_21 = ((/* implicit */short) (unsigned char)194);
                }
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 3) 
                    {
                        arr_32 [i_1] [(signed char)2] [i_8] [23] [i_2] [i_3] = ((/* implicit */unsigned char) 4294967295U);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (unsigned char)255))));
                    }
                    var_23 = ((/* implicit */unsigned short) 4116853297U);
                    var_24 += ((/* implicit */unsigned int) (unsigned char)139);
                    var_25 -= ((/* implicit */unsigned short) 3045514940U);
                }
                for (short i_9 = 1; i_9 < 24; i_9 += 3) 
                {
                    var_26 -= ((/* implicit */short) (_Bool)1);
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) 2563340338461875212LL))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_39 [i_1] [i_2] [i_2] [i_9] [i_10] = ((/* implicit */unsigned char) 314118298U);
                        var_28 = ((/* implicit */short) 140737488355327LL);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) 11857837271236689900ULL))));
                        var_30 = ((/* implicit */unsigned long long int) (unsigned short)53068);
                        var_31 |= 982020818U;
                        arr_42 [8ULL] [i_2] [i_3] [i_9 + 1] [i_11] = ((/* implicit */unsigned int) (signed char)-86);
                    }
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    arr_45 [i_2] [i_2] [(_Bool)1] [i_12 + 1] = ((/* implicit */unsigned int) (short)1024);
                    arr_46 [i_1] [21U] [21U] [i_2] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_49 [21U] [(unsigned char)23] [i_3] [i_2] [i_2] [i_13] [i_1] = ((/* implicit */unsigned long long int) 36LL);
                        arr_50 [i_13] [i_2] [i_1] = ((/* implicit */unsigned char) -403906398);
                    }
                    arr_51 [i_2] [i_2] = ((/* implicit */_Bool) (unsigned char)254);
                }
            }
            for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
            {
                var_32 = (_Bool)1;
                /* LoopSeq 2 */
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
                {
                    arr_58 [i_2] [11] = ((/* implicit */_Bool) (short)-1054);
                    arr_59 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) 7739637641429507884LL);
                    var_33 = ((/* implicit */int) (unsigned short)15240);
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) 7457935486964682205LL))));
                        arr_64 [i_1] [i_2] [i_14] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)9415);
                    }
                }
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) /* same iter space */
                {
                    arr_67 [(unsigned short)7] [i_2] [i_2] [i_17] = ((/* implicit */unsigned long long int) (unsigned short)55737);
                    var_35 -= ((/* implicit */short) 4294967295U);
                    var_36 = ((/* implicit */long long int) 4294967295U);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) 
                    {
                        arr_70 [i_1] [i_2] [i_2] [(short)17] [i_1] = ((/* implicit */short) 7457935486964682205LL);
                        arr_71 [i_2] [i_2] [i_2] [(short)19] = ((/* implicit */short) 1991032984);
                        arr_72 [(unsigned short)20] [i_17] [i_2] [i_18] = ((/* implicit */signed char) (unsigned char)255);
                    }
                }
            }
            /* LoopSeq 2 */
            for (unsigned int i_19 = 2; i_19 < 23; i_19 += 3) 
            {
                var_37 = ((/* implicit */unsigned long long int) (signed char)0);
                var_38 += (unsigned char)239;
                /* LoopSeq 2 */
                for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned int) -403906398);
                    var_40 = ((/* implicit */unsigned long long int) (short)-9415);
                }
                for (unsigned short i_21 = 0; i_21 < 25; i_21 += 3) /* same iter space */
                {
                    var_41 = ((/* implicit */short) (unsigned short)13024);
                    var_42 ^= ((/* implicit */unsigned int) 403906407);
                }
            }
            for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_23 = 1; i_23 < 23; i_23 += 3) 
                {
                    var_43 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_86 [i_1] [2U] [i_2] [i_23 + 1] [i_2] = ((/* implicit */int) 4294967295U);
                    var_44 = ((/* implicit */short) 1ULL);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 3) 
                    {
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) 7457935486964682216LL))));
                        var_46 -= ((/* implicit */short) (unsigned short)4095);
                    }
                }
                arr_89 [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                var_47 = ((/* implicit */int) 562460274513850397LL);
                arr_90 [i_1] [i_2] [i_2] [i_22] = ((/* implicit */unsigned char) 2967426591U);
            }
            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) -403906427))));
        }
        var_49 = 24U;
        var_50 -= ((/* implicit */unsigned long long int) 2147483647);
        arr_91 [i_1] = 524287;
        arr_92 [i_1] = ((/* implicit */unsigned int) 36028792723996672ULL);
    }
    var_51 = ((/* implicit */unsigned int) (_Bool)1);
    var_52 = ((/* implicit */unsigned short) 1703111916U);
    var_53 = ((/* implicit */unsigned long long int) (signed char)0);
}
