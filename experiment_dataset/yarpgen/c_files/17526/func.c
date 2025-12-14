/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17526
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) ((long long int) -8470471615810649111LL));
                arr_5 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((var_2) | (var_15)));
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            for (int i_4 = 4; i_4 < 10; i_4 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */short) arr_14 [i_2] [i_2]);
                    arr_15 [i_4] [i_4] [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) (short)-5175)), (min((min((((/* implicit */long long int) arr_2 [i_2] [i_2])), (var_9))), (((/* implicit */long long int) (short)-24054))))));
                    var_20 = ((/* implicit */short) arr_13 [i_2] [(short)0] [i_2] [i_4]);
                    var_21 = ((/* implicit */int) var_0);
                    arr_16 [i_4] [i_3] [i_3] = min(((!(((/* implicit */_Bool) min((6012614103569052360LL), (((/* implicit */long long int) arr_13 [i_4] [i_4] [i_4] [i_4]))))))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_2)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) & (arr_7 [i_2] [i_2])));
        arr_17 [i_2] = (~(max((max((var_2), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) arr_1 [i_2])))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                {
                    for (signed char i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (short)255);
                            var_23 = ((((/* implicit */int) arr_31 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5])) & (((/* implicit */int) arr_31 [i_5] [i_8] [i_7] [i_6] [i_5] [i_5])));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 873740808U))));
                            var_25 = ((/* implicit */long long int) arr_19 [i_7] [i_6]);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) -5459136267234755737LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [4U] [i_5] [i_5] [i_6] [i_6] [i_6]))) : (873740808U)));
            var_27 = ((/* implicit */unsigned long long int) (short)17802);
        }
        for (short i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
            {
                for (unsigned char i_12 = 1; i_12 < 15; i_12 += 4) 
                {
                    {
                        arr_43 [i_5] [i_5] [i_5] [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) -2405602627908736071LL))));
                        arr_44 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) 2790192973U)) : (arr_4 [i_12]))))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(arr_32 [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1]))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) arr_23 [i_5]);
            var_30 = ((/* implicit */unsigned char) arr_38 [i_5] [i_10]);
            arr_45 [i_5] [i_5] = ((/* implicit */short) arr_2 [i_5] [i_10]);
        }
        for (short i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
        {
            var_31 = ((/* implicit */int) arr_0 [i_13] [i_13]);
            arr_49 [i_5] [i_13] [i_13] = ((/* implicit */unsigned char) arr_1 [(short)10]);
        }
        /* LoopSeq 1 */
        for (unsigned char i_14 = 3; i_14 < 14; i_14 += 3) 
        {
            arr_53 [(short)2] [i_14] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_14 - 3] [i_5]))) : (arr_30 [i_5])));
            arr_54 [i_5] [i_14 - 1] = ((/* implicit */int) (~(var_6)));
        }
        arr_55 [i_5] = ((/* implicit */int) -8890753652751370960LL);
        var_32 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_38 [i_5] [i_5])) : (((/* implicit */int) (signed char)-91))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_56 [i_15])) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */int) arr_42 [i_15] [i_15] [i_15])) - (88)))))))))));
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((long long int) min((((long long int) var_12)), (((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_15] [i_15] [i_16])) * (((/* implicit */int) (_Bool)0))))))));
            arr_62 [i_15] [i_16] = ((/* implicit */long long int) 525514652U);
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            arr_65 [(_Bool)1] = ((/* implicit */unsigned char) var_4);
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 6332328095069342228LL)) ? (2471497036993275595LL) : (((/* implicit */long long int) 2147483647))));
            var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_48 [(_Bool)1] [i_15] [(_Bool)1]))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 16; i_20 += 2) 
                {
                    {
                        arr_72 [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) arr_68 [(short)2] [i_19] [i_18] [i_15]))))), (9ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((arr_51 [i_20]), (((/* implicit */long long int) arr_25 [i_15] [i_20] [i_19] [i_20])))))))));
                        arr_73 [i_15] [i_15] [i_18] [(short)2] [13U] [i_20] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_74 [i_18] [i_15] [i_15] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */short) arr_50 [i_15] [i_15] [i_15])), (var_13)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_25 [i_15] [(_Bool)1] [i_15] [i_18])))), ((~(((/* implicit */int) ((_Bool) arr_24 [i_15] [i_18] [i_15])))))));
        }
    }
    var_37 = var_6;
}
