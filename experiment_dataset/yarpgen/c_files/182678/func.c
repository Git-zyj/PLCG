/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182678
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
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-11))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [11ULL] [i_1] [i_1] [i_3 - 4]))));
                        var_14 *= ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)28446)) : (((/* implicit */int) (signed char)-13))))) : (((((/* implicit */unsigned int) arr_7 [i_3])) - (arr_5 [i_2]))));
                        var_15 = ((/* implicit */short) (+(((/* implicit */int) (short)12926))));
                    }
                    var_16 *= ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2 + 1] [i_2]))));
                    var_17 |= ((/* implicit */unsigned int) ((signed char) (signed char)-11));
                }
                for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((-738842908) / (((/* implicit */int) (signed char)-4))))) : ((+(17906763523026677994ULL))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_1 + 2]), (arr_7 [i_1 + 1])))) ? (max((arr_7 [i_1 + 1]), (arr_7 [i_1 + 1]))) : (((arr_7 [i_1 + 2]) & (((/* implicit */int) (_Bool)1))))));
                        var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((max((((/* implicit */int) (_Bool)1)), (0))) - ((-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])))))) : (((int) ((((/* implicit */_Bool) -1587792124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [(short)2] [i_1 - 1] [(unsigned short)12] [i_1])))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((unsigned short) arr_3 [i_1 + 2] [i_1 + 2] [i_8 + 2]));
                                var_22 = ((/* implicit */long long int) (-(((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((-6010411843539667531LL) + (6010411843539667534LL)))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), ((!(((/* implicit */_Bool) arr_12 [i_1 + 1] [i_8 + 3] [i_6]))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned short) (+(16042913511457236134ULL)));
                }
                var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((0) << (((((/* implicit */int) (unsigned short)65514)) - (65497)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_1] [i_1] [i_0]))))) : ((-(arr_18 [i_0])))))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) 2454941242U);
    /* LoopSeq 3 */
    for (long long int i_9 = 3; i_9 < 19; i_9 += 3) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)64986), (((/* implicit */unsigned short) (signed char)18)))))))) % (((((/* implicit */_Bool) ((unsigned long long int) (signed char)11))) ? ((~(((/* implicit */int) arr_2 [i_9 + 3] [i_9] [i_9])))) : ((+(((/* implicit */int) arr_1 [i_9 + 1])))))))))));
        var_28 = ((/* implicit */long long int) min((((/* implicit */int) ((short) ((arr_7 [i_9]) / (-1587792124))))), ((-(((/* implicit */int) (unsigned short)30770))))));
        var_29 = ((/* implicit */unsigned char) arr_4 [i_9] [i_9] [i_9] [i_9]);
    }
    for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_11 = 4; i_11 < 20; i_11 += 2) 
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((short) arr_4 [i_10] [i_11 - 3] [i_11] [i_11 - 3])))));
            var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1587792148))));
            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
        }
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_10] [i_10]), (arr_0 [i_10] [i_10])))) ? ((~(arr_0 [i_10] [i_10]))) : (((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))) : (arr_0 [i_10] [i_10])))));
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((((/* implicit */unsigned int) max((arr_23 [i_10]), (((/* implicit */int) arr_11 [i_10]))))), (((max((660367950U), (((/* implicit */unsigned int) (short)-31068)))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)6))))))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 18; i_13 += 3) 
        {
            for (int i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    {
                        var_35 = ((/* implicit */int) (~(((unsigned long long int) arr_17 [i_13] [i_13 - 1] [i_13 + 1] [i_13]))));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)140)) ^ (((/* implicit */int) ((((/* implicit */_Bool) -1587792129)) && (((/* implicit */_Bool) arr_32 [i_14] [i_13])))))))) ? ((+((~(arr_21 [i_13 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49140))))))));
                        var_37 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_12] [i_13 - 1]))))), (((unsigned long long int) min((arr_4 [i_12] [i_13 - 1] [i_14] [i_12]), (((/* implicit */unsigned short) arr_2 [i_13] [i_13] [i_12])))))));
                        var_38 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) (_Bool)1)), (min((arr_35 [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) (signed char)-92)))))));
                        var_39 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-11)), (arr_38 [i_15])))) ? ((~(((/* implicit */int) (unsigned short)27240)))) : (((/* implicit */int) max((arr_13 [i_14] [i_14] [i_14]), (arr_13 [i_12] [i_13 + 1] [i_14])))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned char) ((long long int) max(((~(0U))), (((/* implicit */unsigned int) arr_36 [i_12] [(unsigned char)8])))));
    }
}
