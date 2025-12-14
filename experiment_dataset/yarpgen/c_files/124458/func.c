/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124458
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
    var_19 = var_13;
    var_20 = ((/* implicit */unsigned char) var_1);
    var_21 &= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) * (4ULL))))), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((/* implicit */long long int) var_13);
        arr_2 [i_0] = ((/* implicit */unsigned short) var_13);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) var_10);
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    arr_10 [i_2] [14LL] = var_2;
                    arr_11 [i_2] [i_1] [14ULL] [i_2] = ((/* implicit */signed char) var_14);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((/* implicit */int) var_12))));
                        arr_15 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) (unsigned short)3635))));
                        arr_16 [7LL] [(unsigned char)14] [(unsigned short)2] [i_1 - 1] [(unsigned short)2] [9ULL] [(unsigned short)2] = ((/* implicit */unsigned long long int) var_10);
                        arr_17 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_8);
                    }
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_25 ^= ((/* implicit */unsigned char) ((var_5) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3635)) >> (((705779335) - (705779315))))))));
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_18);
                    var_26 = ((/* implicit */unsigned long long int) ((705779320) | (((/* implicit */int) var_0))));
                }
                for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                    var_27 = var_1;
                }
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    arr_28 [i_0] [(signed char)7] [i_2] [(signed char)7] = ((/* implicit */signed char) var_5);
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61878)) * (((/* implicit */int) (unsigned short)3662))));
                        var_29 = ((/* implicit */unsigned int) var_13);
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_3))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
                    {
                        arr_34 [i_7] [8] [i_2] [i_7] [i_9] [8] [8] = ((/* implicit */_Bool) var_1);
                        arr_35 [i_0] [i_1] [i_1] [(_Bool)1] [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_4)) - (41946)))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_15);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) (unsigned short)52847))));
                    }
                }
                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) > (1178339887U)));
            }
            for (int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_41 [1LL] [i_11] = ((/* implicit */long long int) var_4);
                arr_42 [i_11] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
            }
            arr_43 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_7);
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_14))))));
                arr_47 [i_12] [14ULL] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_2))));
                var_34 = ((/* implicit */long long int) var_2);
            }
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_53 [i_0] [(unsigned char)3] [12LL] [12LL] = ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((var_1) >= (var_13))))));
                        var_36 = var_17;
                    }
                    var_37 = ((/* implicit */unsigned long long int) var_8);
                }
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    arr_61 [i_0] [i_0] [(unsigned char)8] [i_0] = ((/* implicit */int) var_13);
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((var_13) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
                    var_39 = ((/* implicit */unsigned int) ((var_3) != (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 1; i_17 < 14; i_17 += 3) 
                    {
                        var_40 |= ((/* implicit */_Bool) var_6);
                        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) var_18))));
                        arr_64 [i_16] [i_16] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_16))));
                        var_43 = ((/* implicit */unsigned char) var_0);
                    }
                }
                /* LoopSeq 2 */
                for (long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))));
                    var_45 = ((/* implicit */unsigned short) max((var_45), (var_0)));
                }
                for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    arr_69 [i_19] [i_13] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_13);
                    arr_70 [i_19] [i_13] [i_1] [10ULL] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_18))));
                    var_46 = ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                }
                var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) var_12))));
            }
            arr_71 [4U] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_2);
        }
        for (int i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            var_48 = ((((/* implicit */int) var_9)) | (((/* implicit */int) var_15)));
            /* LoopSeq 2 */
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                arr_77 [i_20] = ((/* implicit */long long int) var_17);
                /* LoopSeq 2 */
                for (signed char i_22 = 2; i_22 < 14; i_22 += 2) 
                {
                    arr_81 [i_22 - 2] [i_20] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_7))));
                    var_49 &= var_9;
                }
                for (unsigned long long int i_23 = 2; i_23 < 14; i_23 += 3) 
                {
                    arr_85 [i_20] [i_21] [10U] [i_23] [i_0] [i_0] = ((/* implicit */unsigned short) var_18);
                    arr_86 [i_20] [i_20] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_0))))) <= (var_11)));
                }
            }
            for (unsigned short i_24 = 4; i_24 < 12; i_24 += 3) 
            {
                var_50 &= ((/* implicit */unsigned int) var_2);
                var_51 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12689)) * (((/* implicit */int) (unsigned short)17152))));
                arr_89 [i_0] [i_0] [i_20] [i_20] = ((/* implicit */unsigned char) var_6);
            }
            arr_90 [i_20] = var_0;
            /* LoopSeq 1 */
            for (unsigned short i_25 = 0; i_25 < 15; i_25 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_26 = 0; i_26 < 15; i_26 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_98 [4ULL] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_16))));
                        arr_99 [i_0] [i_20] [i_20] [i_26] [i_27] = ((/* implicit */_Bool) var_11);
                    }
                    var_52 = ((/* implicit */unsigned long long int) min((var_52), (var_14)));
                }
                arr_100 [i_20] [i_20] [i_20] = var_5;
            }
        }
        var_53 *= ((/* implicit */_Bool) ((((var_11) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (62868)))));
        /* LoopSeq 2 */
        for (unsigned short i_28 = 3; i_28 < 14; i_28 += 3) 
        {
            arr_103 [i_28] [i_28] = ((/* implicit */unsigned long long int) var_9);
            var_54 -= ((/* implicit */_Bool) var_9);
            var_55 = ((/* implicit */unsigned short) var_7);
        }
        for (unsigned char i_29 = 0; i_29 < 15; i_29 += 4) 
        {
            arr_106 [i_0] = ((/* implicit */signed char) ((var_5) <= (((/* implicit */unsigned long long int) var_11))));
            var_56 = ((/* implicit */unsigned short) var_14);
        }
    }
    for (unsigned short i_30 = 0; i_30 < 25; i_30 += 2) 
    {
        arr_109 [i_30] [i_30] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_6))))), (var_5)));
        var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) var_16))));
    }
}
