/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117498
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
    var_17 = ((/* implicit */unsigned long long int) (~(var_3)));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned int) var_2)) : (arr_0 [i_0 - 4])));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((unsigned int) arr_5 [i_0 - 4] [i_0]));
                        arr_12 [i_3] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_5 [i_2] [i_1]) != (((/* implicit */long long int) arr_0 [i_0]))))) ^ (((/* implicit */int) arr_3 [i_0 - 4] [i_3 + 1]))));
                        arr_13 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_8 [i_3] [i_3] [i_1] [i_2] [i_3] [i_3]) : (((int) arr_1 [i_1]))));
                    }
                } 
            } 
        }
        var_19 = (-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 20; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(65535)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_20 [i_0] [i_4] [i_5 + 2] [i_4]))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_13)))))))) ? (((/* implicit */long long int) (~((+(0)))))) : (((((/* implicit */_Bool) (-(arr_15 [i_0])))) ? (9223372036854775807LL) : ((-(-1185409555608889966LL)))))))));
                    arr_21 [i_5] [i_5] = ((65524) - (925993631));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? ((~(arr_17 [i_4] [i_5] [i_4] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_16 [i_4] [i_6] [i_7])))));
                                var_22 = ((/* implicit */long long int) (-(((((unsigned int) 3)) << ((((-(-1314105726))) - (1314105715)))))));
                                arr_28 [i_0] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((_Bool) (_Bool)0)), ((((~(var_1))) != (((/* implicit */int) arr_9 [i_0] [i_4 - 1] [i_4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) min((((/* implicit */long long int) min((arr_32 [i_8] [i_8]), (arr_32 [i_10] [i_9])))), (max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (arr_32 [i_9] [i_9])))), (arr_31 [i_9])))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_41 [i_11] = ((/* implicit */short) -1);
                        /* LoopSeq 2 */
                        for (int i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1220730042U)) ? (arr_31 [i_8]) : (((/* implicit */long long int) var_3))))))))) ^ (arr_32 [i_8] [i_12 + 4])));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((698194530U) >> (((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8] [i_8])))))))));
                        }
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            arr_46 [i_8] [i_9] [i_8] [i_9] [i_11 + 1] = ((/* implicit */short) ((signed char) ((int) arr_39 [i_8] [i_9] [i_10] [i_13])));
                            var_26 = (+(arr_44 [i_9] [i_10] [i_11 + 1]));
                            var_27 = ((/* implicit */unsigned long long int) -7036576439743777171LL);
                        }
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30265)) ? (3880023763U) : (((/* implicit */unsigned int) -1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        for (long long int i_15 = 4; i_15 < 20; i_15 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-((-(var_1)))))), (((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_9] [i_9] [i_10] [i_9] [i_15 + 1]))) : (((((/* implicit */_Bool) arr_29 [i_8])) ? (arr_33 [i_8] [i_10]) : (((/* implicit */unsigned long long int) -65552))))))));
                                arr_53 [i_8] [i_8] [i_15] [i_8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_43 [i_15 - 3] [i_15] [i_15 - 1] [i_15 + 2] [i_15])))) ? (((/* implicit */int) arr_37 [i_8] [i_8] [i_10])) : (((/* implicit */int) ((short) 7612346905279439557LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
