/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118897
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0] [i_1]), ((short)32741)))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) var_8))))) <= (max((((/* implicit */unsigned long long int) var_0)), (arr_4 [i_1 - 1])))));
                arr_6 [i_1] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) var_3)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1] = ((/* implicit */int) ((short) arr_4 [i_1 + 1]));
                        var_10 *= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) (~(((/* implicit */int) arr_8 [i_1 - 1] [i_4] [i_1]))));
                                var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -7160062045575402311LL)) ? (((/* implicit */int) (short)-21548)) : (((/* implicit */int) (signed char)127))))) <= (791135265U)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            {
                arr_28 [i_6 - 1] [i_6 - 1] [i_7] = ((/* implicit */short) (-(((int) arr_8 [i_6 - 1] [i_6 - 1] [i_7]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (var_9)));
                }
                /* vectorizable */
                for (long long int i_9 = 4; i_9 < 17; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_15 += ((/* implicit */short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_14 [16] [i_7]))));
                        var_16 *= ((/* implicit */unsigned int) arr_11 [i_9 - 2] [1] [i_6]);
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_10 - 1] [i_9] [i_10 - 1] [i_6])) ? (arr_25 [i_9 - 1] [i_10 - 1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        arr_37 [i_6 - 1] [i_6 - 1] [i_9 - 3] [(short)15] [i_9] [14U] = ((/* implicit */unsigned char) arr_25 [i_6 - 1] [i_6] [i_6 - 1]);
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        arr_40 [i_6 - 1] [i_6 - 1] [i_9] [i_11] = ((/* implicit */unsigned int) ((4294967295U) <= (((/* implicit */unsigned int) ((arr_33 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7]) ? (((/* implicit */int) (short)9864)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_18 += ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (unsigned short)25324)))));
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            arr_44 [i_6] [i_6] [i_6] [i_11] [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */short) ((arr_12 [i_6 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 - 1] [i_9 - 4])))));
                            arr_45 [i_6 - 1] [i_11] [i_11] = ((/* implicit */int) (((~(arr_12 [i_9 + 3]))) << ((((~(((/* implicit */int) (_Bool)0)))) + (32)))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            arr_48 [i_11] [i_11] [i_9 - 2] [i_9] [i_13] [i_11] [i_13] = ((/* implicit */int) ((((/* implicit */int) (short)-18615)) < (((/* implicit */int) arr_18 [i_11] [i_13] [i_13] [i_6 - 1] [i_9 + 2]))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_7] [14] [i_9 + 3] [i_11] [i_13])) + (((/* implicit */int) (short)32767))))) ^ ((+(arr_20 [i_6 - 1] [i_7] [i_9 - 4] [i_9 - 3] [(_Bool)1]))))))));
                        }
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) <= (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 3132112165U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8506))) : (16161535711986267971ULL)));
                    }
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_6 - 1])) ? (((((/* implicit */int) arr_1 [i_7] [i_9 + 1])) & (((/* implicit */int) (signed char)65)))) : (((/* implicit */int) arr_51 [i_7] [i_7])))))));
                }
                arr_52 [i_6 - 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_7])) - (38252))))), ((-(((/* implicit */int) arr_33 [i_7] [i_6] [i_6 - 1] [i_6]))))))) * (5977661469996889350LL)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)0)))))));
}
