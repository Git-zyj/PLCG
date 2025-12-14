/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113905
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) (unsigned short)21851);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_0 - 2] [i_2] [i_3] &= ((/* implicit */long long int) arr_2 [i_0]);
                                var_18 = ((/* implicit */int) max(((-(arr_11 [i_0] [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_2 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) (_Bool)1)))))));
                                var_19 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_2 + 1] [i_0] [8LL] [i_3])) - (((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_0])))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) 2688604660U);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((signed char) (unsigned short)21845)))));
                            arr_25 [i_5] [i_7] [i_7] = ((long long int) arr_10 [i_7] [i_8 + 4] [i_8 + 3] [i_8 + 2] [i_7]);
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_6] [i_9] [i_8 + 4]))) : (var_11)));
                            var_23 = ((/* implicit */signed char) (+(var_7)));
                        }
                        var_24 = ((/* implicit */unsigned int) ((arr_11 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_8] [i_8 - 2]) & (arr_11 [i_8 + 2] [i_8 + 2] [i_8 + 2] [5] [i_8 + 4])));
                        var_25 = ((((/* implicit */_Bool) arr_6 [i_8 + 1] [i_8 + 3] [i_8 + 4] [i_8 + 2])) ? (((/* implicit */int) var_10)) : (arr_8 [i_8 + 4] [i_8 - 1] [i_8 + 2] [i_8 + 3] [i_8 - 1] [i_8 + 2]));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) arr_13 [i_6]))));
                    }
                } 
            } 
        } 
        var_27 = arr_22 [i_5] [i_5] [(signed char)10] [i_5] [i_5] [(_Bool)1];
        /* LoopSeq 1 */
        for (signed char i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            arr_29 [i_5] [11LL] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_10 + 2] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))));
            arr_30 [i_5] [i_10] = ((/* implicit */_Bool) ((arr_20 [(signed char)7] [i_10]) / (((/* implicit */long long int) arr_8 [i_5] [i_10] [i_10] [i_5] [i_10 + 2] [i_5]))));
            var_28 = ((/* implicit */unsigned int) min((var_28), (arr_9 [i_5] [i_5] [i_10] [(_Bool)1])));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (arr_15 [i_10 - 1] [i_10 - 1]) : (arr_15 [i_10 - 1] [i_10 + 1])));
        }
    }
    /* LoopSeq 2 */
    for (int i_11 = 4; i_11 < 21; i_11 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 2; i_13 < 21; i_13 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)91))));
                var_31 = ((/* implicit */unsigned int) 5ULL);
            }
            /* LoopNest 2 */
            for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
            {
                for (unsigned int i_15 = 1; i_15 < 22; i_15 += 3) 
                {
                    {
                        var_32 -= 1662069727U;
                        var_33 = (!(((/* implicit */_Bool) ((unsigned char) (short)17164))));
                        arr_44 [i_11] [2LL] [i_14] [i_15] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11 - 2]))))) << (((max((arr_40 [i_11 - 1] [0U] [i_15 + 1] [i_15]), (arr_40 [i_11 - 2] [(unsigned char)14] [i_15 - 1] [i_15 - 1]))) - (1152111623U)))));
                        var_34 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_39 [i_11 - 2] [i_12] [i_12 + 1] [i_14])) + (((unsigned long long int) arr_34 [i_12] [i_12 - 1] [i_12]))));
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) max((1606362635U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) > (134217727U))))));
            arr_45 [i_11] [(short)12] [i_12] = ((/* implicit */signed char) (!((!((!(((/* implicit */_Bool) 2965196536U))))))));
        }
        arr_46 [i_11 + 2] = ((/* implicit */unsigned char) ((short) (unsigned short)43684));
        arr_47 [i_11] [(unsigned short)19] &= ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_12)))), ((~(((/* implicit */int) arr_37 [i_11] [i_11] [20U]))))))) ? (((/* implicit */int) ((signed char) arr_38 [i_11] [i_11]))) : (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned short)43661)) : (-906363431)))));
        var_36 |= ((/* implicit */unsigned long long int) (+(max((var_13), (((/* implicit */int) (unsigned char)85))))));
        var_37 = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_33 [i_11])), (arr_32 [i_11 - 4]))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43704)))))));
    }
    /* vectorizable */
    for (unsigned int i_16 = 2; i_16 < 10; i_16 += 2) 
    {
        arr_50 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((67108608U) << (((((/* implicit */int) arr_6 [i_16] [i_16] [i_16] [i_16])) - (25442))))) : ((+(var_14)))));
        arr_51 [i_16] [i_16 - 2] = ((/* implicit */int) ((unsigned short) 877274893));
        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (-((+(var_7))))))));
    }
}
