/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1566
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((+(arr_1 [i_0]))) : (((((/* implicit */_Bool) var_10)) ? (1992410427) : (((/* implicit */int) (short)-11))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_10))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                arr_8 [i_0] = ((/* implicit */int) (short)24540);
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned short i_4 = 2; i_4 < 16; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((short) arr_2 [i_4 + 1] [i_4 + 1])))));
                            var_15 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_7))));
            }
            for (short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_22 [i_0] [i_6 - 2] = ((/* implicit */short) ((((((((/* implicit */_Bool) (unsigned short)248)) ? (((/* implicit */int) (short)-35)) : (2147483640))) + (2147483647))) << ((((+(2147483618))) - (2147483618)))));
                            arr_23 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_6 - 1] [i_5] [i_6] [i_5] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_5])) : (((/* implicit */int) arr_0 [i_5] [i_6])))) : (arr_16 [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2])));
                            var_18 &= ((/* implicit */short) ((var_9) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_6])) : (arr_16 [i_0] [i_1] [i_5] [i_6]))))));
                        }
                    } 
                } 
                var_19 ^= ((/* implicit */short) (((+(((/* implicit */int) (short)32761)))) - (((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (int i_8 = 3; i_8 < 15; i_8 += 4) 
                {
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_10))));
                    /* LoopSeq 3 */
                    for (short i_9 = 3; i_9 < 14; i_9 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_5] [i_8] [i_9 - 1] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)63322))));
                        var_21 = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_5]);
                        arr_30 [i_0] [i_8] [i_5] [i_8 + 2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [i_8] [i_9 + 2] [i_8 - 1] [i_8]))));
                    }
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */short) var_4);
                        arr_35 [i_0] [i_1] [i_5] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) var_11);
                        arr_36 [i_0] [i_0] [i_5] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 954242018)) ? (18446744073709551612ULL) : (18446744073709551606ULL)));
                    }
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) 25ULL)))) ? ((-(-1146901456))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_8 + 1] [i_5])) && (((/* implicit */_Bool) arr_39 [i_8] [i_1] [i_1] [i_1] [i_8])))))));
                        arr_40 [i_1] [i_5] [i_1] |= ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_11] [i_5] [i_5] [i_5] [i_0]))) <= (var_4)))));
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) ((int) (short)-12994))) ? (((/* implicit */int) ((short) -1))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(short)14] [i_1])) ? (((/* implicit */int) (short)3231)) : (((/* implicit */int) var_3))))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    arr_43 [i_0] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 481979516853474975ULL)) && (((/* implicit */_Bool) (short)32747))));
                    var_24 = ((/* implicit */unsigned long long int) var_8);
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) ((short) var_7))))))));
                    arr_44 [i_12] = ((/* implicit */short) arr_27 [i_1] [i_1] [i_1] [i_12] [i_1] [i_12] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        arr_47 [i_13] [i_12] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */short) ((arr_32 [i_0] [i_5] [i_5] [i_1] [i_0]) > (var_4)));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483641)) ? (((((/* implicit */_Bool) (short)-250)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (short)9))));
                        var_27 = ((unsigned long long int) (short)8176);
                        var_28 -= (+(((((/* implicit */unsigned long long int) 1146901446)) & (var_9))));
                    }
                }
                for (short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) 2097148)) ? (((/* implicit */int) (unsigned short)15828)) : (((/* implicit */int) (short)-27860))))));
                    var_30 += ((/* implicit */short) (-(((arr_9 [i_5] [i_1] [i_5] [i_5]) + (2147483616)))));
                }
            }
            for (short i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (((-(((/* implicit */int) var_6)))) ^ (((/* implicit */int) arr_28 [i_15] [i_15] [i_0] [i_1] [i_0] [i_0] [i_0])))))));
                var_32 = ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_0] [i_1] [i_15]))));
            }
            arr_52 [i_0] [i_0] = ((/* implicit */short) var_5);
        }
        for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 4) 
        {
            arr_55 [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_25 [i_0] [i_16 + 1] [i_16] [i_0]))))));
            arr_56 [i_16] [i_16 - 1] [i_16 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_16 + 1] [i_16] [i_16 - 1])) ? (((-1146901453) / (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_7 [i_0] [i_16] [i_0] [i_0]))));
        }
    }
    for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_11))));
        var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_17] [i_17] [i_17] [i_17] [i_17])) && (((/* implicit */_Bool) min((max((var_6), (arr_50 [i_17] [i_17]))), (arr_26 [i_17] [i_17] [i_17] [i_17] [i_17]))))));
        var_35 = ((/* implicit */unsigned short) arr_10 [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)11092)))) / (((((/* implicit */_Bool) (short)-11)) ? (-1146901429) : (((/* implicit */int) (short)27841))))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_3)))) > (((((/* implicit */_Bool) (short)-27598)) ? (((/* implicit */int) (short)27854)) : (((/* implicit */int) (short)-27858))))))) : (max((((/* implicit */int) min(((short)32760), (var_0)))), (((((/* implicit */_Bool) 2147483641)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))));
}
