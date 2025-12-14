/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159629
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min((1U), (((/* implicit */unsigned int) 12))))) : (min((-5734064331179063391LL), (((/* implicit */long long int) (+(var_10))))))));
    var_14 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_0] &= ((/* implicit */unsigned char) 33);
            var_15 -= ((/* implicit */unsigned char) arr_1 [18U] [(unsigned short)3]);
        }
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_8))));
    }
    for (int i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            arr_10 [5ULL] [i_2] = ((/* implicit */unsigned char) max((((((8513605951807526218LL) | (-4244352413994716454LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (var_9)));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) var_4)))))));
            var_18 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 4]))))) & (((/* implicit */int) (unsigned short)65534))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
        {
            arr_14 [i_4] [i_2] = var_6;
            arr_15 [i_4] = ((/* implicit */unsigned long long int) -5734064331179063386LL);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                {
                    {
                        var_19 = (((!((!(((/* implicit */_Bool) var_10)))))) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) var_11)));
                        var_20 = ((/* implicit */long long int) (short)64);
                        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) 945855157)) / (2808448750U)))), (((((/* implicit */_Bool) arr_20 [i_2 + 3] [i_6 - 1] [i_5] [(unsigned char)1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        var_22 = ((/* implicit */short) var_1);
                    }
                } 
            } 
            var_23 |= ((/* implicit */unsigned short) (-(max((var_10), (var_12)))));
        }
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11202)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8064)))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) -20))))), (min((21LL), (8513605951807526220LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            arr_24 [i_7] = ((/* implicit */unsigned short) (~(max((var_10), (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1]))))));
        }
        arr_25 [i_2 + 3] = ((/* implicit */_Bool) 1486518544U);
    }
    for (short i_8 = 1; i_8 < 22; i_8 += 2) 
    {
        var_25 = ((/* implicit */int) var_3);
        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_28 [i_8 - 1])) ? (arr_28 [i_8 + 1]) : (arr_28 [i_8 + 1]))));
        var_27 = ((/* implicit */unsigned int) (!((!((!(((/* implicit */_Bool) arr_28 [8]))))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_28 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_34 [i_9] [i_10])) ? (((/* implicit */long long int) var_10)) : (var_3))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_2)) ? (((var_1) + (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)12000)))))));
                                var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_39 [i_9] [i_9] [(_Bool)1] [(unsigned char)7] [i_11] [(_Bool)1] [10U])), (15ULL))), (((/* implicit */unsigned long long int) arr_34 [i_11] [i_9]))))) ? ((+(var_1))) : ((+(var_1)))));
                                var_31 = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned short) max((arr_29 [(_Bool)1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57478)) || ((_Bool)1))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            var_33 *= ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) % (2162618668624980587ULL)))));
            var_34 = var_4;
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 3; i_17 < 23; i_17 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */int) (_Bool)1);
                            var_36 = ((/* implicit */short) var_0);
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_44 [i_9])))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */signed char) ((var_6) && (((/* implicit */_Bool) -9082811236452571234LL))));
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 24; i_18 += 2) 
        {
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                {
                    arr_56 [i_9] [(unsigned char)20] [i_19] = ((_Bool) ((int) arr_41 [i_18]));
                    arr_57 [i_9] [i_18] [i_9] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    }
    var_39 = ((/* implicit */int) var_7);
}
