/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135500
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
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = var_15;
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_13))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 -= min(((~((+(var_2))))), (((/* implicit */long long int) (!(var_15)))));
        arr_4 [0LL] [0LL] |= (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)97))))));
        arr_5 [i_0] [13] = ((/* implicit */int) (((~((-(var_10))))) >> (((((int) var_10)) + (1821262186)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) (+(var_11)));
        var_23 -= ((/* implicit */long long int) var_13);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) ((var_12) <= (((var_12) & (var_14)))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                {
                    arr_19 [i_2] [0LL] = ((long long int) var_2);
                    arr_20 [i_2] [i_2] [24] [24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_18 [i_2] [(_Bool)0] [i_4 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) var_18))))))));
                    arr_21 [i_2] [(_Bool)0] [(signed char)11] = ((/* implicit */unsigned short) arr_10 [i_4 + 2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                arr_28 [(short)21] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1897561889)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))));
                                arr_29 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_12 [i_4 - 1] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                arr_36 [i_2] [i_2] [i_8] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_15))))) && (((/* implicit */_Bool) ((unsigned short) var_17)))));
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                arr_37 [i_2] [i_2] = ((/* implicit */_Bool) var_2);
                /* LoopSeq 4 */
                for (short i_9 = 1; i_9 < 24; i_9 += 3) 
                {
                    var_25 = ((/* implicit */long long int) (-(var_16)));
                    var_26 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(-956085302495723063LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 2147483647)) ? (957672574664458389LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)28)))))));
                    var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_9 - 1]) : (var_3)));
                }
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_45 [i_2] [i_2] = ((((/* implicit */_Bool) ((var_14) % (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) ((var_5) || (((/* implicit */_Bool) arr_41 [i_2] [(signed char)21] [i_7] [i_2] [i_2]))))) : ((-(var_16))));
                    arr_46 [17] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_3))) < (var_16)));
                    arr_47 [i_2] [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) var_7);
                }
                for (signed char i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    arr_50 [i_2] = var_17;
                    var_28 = ((_Bool) var_6);
                }
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_29 += ((/* implicit */_Bool) var_6);
                    var_30 = ((/* implicit */signed char) (-((-(arr_42 [i_2] [i_7] [i_2] [(unsigned short)12] [(unsigned char)20] [(unsigned short)12])))));
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_14))));
                }
            }
            for (short i_13 = 0; i_13 < 25; i_13 += 3) /* same iter space */
            {
                arr_57 [i_2] [12] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_7)))));
                var_32 = ((/* implicit */int) max((var_32), ((-(2147483647)))));
                arr_58 [0LL] [0LL] [i_2] [i_13] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [(signed char)3] [i_2] [i_2] [i_7] [21LL] [i_13]))) : (var_2)))));
            }
            for (short i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_2] [16] [i_14] [i_14] [i_2] [i_14])) ? (arr_22 [23] [i_14] [(unsigned char)7] [i_2] [i_2] [(short)19]) : (arr_22 [10LL] [i_2] [i_2] [i_7] [i_14] [i_14])));
                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
            }
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_2] [i_7] [i_2] [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_25 [i_7] [(unsigned short)24] [i_7] [i_7] [(unsigned short)12])) ? (arr_18 [(unsigned char)1] [(unsigned char)1] [7LL]) : (((/* implicit */long long int) var_13)))))))));
        }
        arr_63 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) arr_22 [i_2] [i_2] [6] [i_2] [i_2] [i_2]));
    }
}
