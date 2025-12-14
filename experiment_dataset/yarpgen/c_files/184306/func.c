/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184306
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */unsigned long long int) var_7)) : (var_8)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_14 = ((/* implicit */short) (((~(var_0))) & (((/* implicit */unsigned long long int) min(((~(2916431242U))), (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = var_4;
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((short) arr_1 [i_1]));
                    var_16 ^= ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        arr_14 [i_1] [19LL] [i_1] [i_1] = ((/* implicit */int) arr_9 [0] [(short)1] [i_1]);
                        arr_15 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) (-((-(var_6)))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (var_4)));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12U)) ? (arr_7 [i_2] [i_2] [i_4]) : (arr_7 [i_4] [i_2] [i_3])));
                    }
                    arr_16 [i_1] [(short)4] [(short)4] = ((/* implicit */short) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)24616)) && (((/* implicit */_Bool) (unsigned char)68))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */unsigned long long int) var_2);
        var_19 = ((((/* implicit */int) arr_13 [i_5] [i_5] [i_5])) >> (((((/* implicit */int) ((short) (unsigned char)251))) - (238))));
        arr_22 [i_5] = ((/* implicit */unsigned char) arr_11 [i_5]);
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
        {
            arr_26 [(short)7] = ((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_5] [i_5]);
            arr_27 [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_5] [i_6]))));
            var_20 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4294967280U)) && (((/* implicit */_Bool) (unsigned char)234)))));
        }
        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (short)32767))));
                var_22 = var_11;
            }
            for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                arr_35 [i_5] [i_7] [4LL] = ((/* implicit */int) (-(arr_11 [i_5])));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5620))) + (16383U)));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-24616)))))));
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                arr_38 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -735130069819876915LL)) ? (-1) : (((/* implicit */int) (unsigned char)240))));
                arr_39 [i_5] [i_5] [i_5] = ((/* implicit */long long int) arr_34 [i_5]);
            }
            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)2))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                arr_43 [i_5] [i_11] [i_11] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_11])) & (((/* implicit */int) arr_23 [i_5] [i_5]))));
                var_26 = ((unsigned long long int) arr_8 [i_5] [i_7] [i_11]);
                arr_44 [i_5] [i_7] [i_11] = ((/* implicit */short) ((unsigned char) arr_18 [i_5]));
            }
            for (int i_12 = 4; i_12 < 20; i_12 += 3) 
            {
                var_27 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) (short)-7936)))) / (((((/* implicit */int) (short)4095)) * (((/* implicit */int) arr_45 [i_5] [i_12]))))));
                arr_47 [i_5] [(signed char)5] [i_12] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_45 [i_5] [i_12]))));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            for (unsigned int i_14 = 2; i_14 < 18; i_14 += 2) 
            {
                {
                    var_28 = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) + (var_8))));
                    arr_52 [i_14] [(short)0] [i_14] = ((/* implicit */unsigned char) arr_36 [i_14 - 2] [i_14 + 3]);
                    arr_53 [i_5] [3LL] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 72057594037927935LL))))));
                    arr_54 [i_5] [i_5] [i_14] [i_14] = ((/* implicit */long long int) ((short) (unsigned char)234));
                    arr_55 [17LL] [i_13] [i_13] [17LL] = (-(((((/* implicit */int) arr_41 [i_14])) + (((/* implicit */int) var_3)))));
                }
            } 
        } 
    }
}
