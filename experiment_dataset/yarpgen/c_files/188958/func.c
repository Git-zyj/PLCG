/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188958
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
    var_10 -= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((long long int) var_0)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) min((2803937300366053772ULL), (((/* implicit */unsigned long long int) (unsigned char)15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (((unsigned int) var_8)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_3] [i_0] &= ((/* implicit */int) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (arr_9 [i_4] [i_4] [i_3] [i_4] [i_4]))) - (((unsigned int) arr_1 [i_2 + 1]))));
                                var_11 += ((/* implicit */_Bool) (~((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) & (arr_1 [i_0])))))));
                            }
                        } 
                    } 
                    var_12 = min((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (((arr_10 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))))));
                    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (((min((arr_9 [i_0] [i_0] [i_2] [i_2] [i_0]), (((/* implicit */unsigned int) (unsigned char)42)))) & (((/* implicit */unsigned int) (~(arr_0 [i_2]))))))));
                }
            } 
        } 
        var_14 = ((/* implicit */long long int) min(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) (unsigned char)15))))));
    }
    /* LoopSeq 2 */
    for (short i_5 = 2; i_5 < 21; i_5 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_13 [i_5]) : (arr_13 [i_5]))))))) : (((/* implicit */int) arr_14 [i_5 + 1]))));
        arr_15 [i_5] |= ((/* implicit */unsigned short) var_8);
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 1) 
        {
            arr_22 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_5);
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */int) ((short) arr_18 [i_7 + 1]));
                            arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [12] &= ((/* implicit */_Bool) (short)-20503);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_11 = 2; i_11 < 18; i_11 += 1) 
                {
                    arr_33 [i_11] [i_11] = ((/* implicit */short) ((int) arr_23 [i_6] [i_7 + 1] [i_6] [i_6]));
                    arr_34 [i_6] [i_6] [i_11] [i_6] [i_6] = (-((~(((/* implicit */int) (unsigned char)0)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) (((-(arr_16 [i_7]))) & (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_11] [i_11] [i_11] [i_6])))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_38 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_11 - 2] [i_7 + 1])) : (((/* implicit */int) arr_19 [i_7 - 1]))));
                        arr_39 [i_12] [i_11] [i_11] [i_6] [i_6] = ((/* implicit */unsigned char) var_4);
                        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-1371575982944147774LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : ((-(arr_25 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        arr_40 [i_6] [i_7] [i_7] [i_6] [i_6] [i_6] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_7] [i_7 - 1] [i_11 + 1]))));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) (-(arr_36 [i_6] [i_6] [i_7 - 2])));
                        arr_45 [i_6] [i_11] [i_6] [i_11] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_7 - 1]))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6]))));
                    }
                    var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) 1182852867U)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        arr_48 [i_6] [i_11] [i_14] = ((/* implicit */unsigned short) arr_26 [i_6] [i_6] [i_6] [i_11] [i_6]);
                        arr_49 [i_11] [i_11] [i_8] [i_8] [i_8] [i_11] [i_11] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
                        arr_50 [i_11] = ((/* implicit */int) ((arr_13 [i_6]) / (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (1122230474))))));
                    }
                }
                for (long long int i_15 = 2; i_15 < 20; i_15 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)39787))));
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) / (((arr_24 [i_15]) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                }
            }
            var_25 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_44 [i_6] [i_6] [i_6] [i_6] [i_7])))));
        }
        arr_53 [i_6] = ((/* implicit */unsigned char) 1371575982944147774LL);
    }
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((214607662U), (((/* implicit */unsigned int) -1122230474)))))));
}
