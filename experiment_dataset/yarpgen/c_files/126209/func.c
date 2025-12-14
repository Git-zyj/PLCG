/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126209
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_3))))))), (arr_2 [i_1 - 1])));
                    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_3))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [19] [19] [i_3] = ((/* implicit */long long int) ((var_5) / ((-(arr_1 [i_0])))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 1] [2LL] [i_0]))))) * ((+(((/* implicit */int) arr_0 [i_1]))))));
                        arr_12 [(_Bool)1] [(_Bool)1] [4LL] [i_3] = ((/* implicit */long long int) var_3);
                    }
                    var_13 = ((/* implicit */long long int) max((2621363155U), (((/* implicit */unsigned int) 667969732))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_4])), (arr_7 [i_4] [i_4] [i_4]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_1)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    arr_22 [i_4] [i_5] [i_6] &= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_10 [i_4] [11ULL] [11ULL] [i_5] [i_6])))) > (arr_1 [i_5]))))));
                    var_15 = ((/* implicit */_Bool) arr_6 [i_4]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) arr_7 [i_4] [i_4] [(signed char)13]);
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_4])) + (max((var_9), (((/* implicit */int) var_4)))))) - (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) arr_18 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_14 [i_4])))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_18 &= ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_7] [i_7] [i_7])) * (((/* implicit */int) var_4))));
        var_19 += ((/* implicit */long long int) arr_23 [(signed char)4]);
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_28 [i_8 + 1])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_8] [i_8 + 1])))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((var_5) * (((((/* implicit */int) (!(var_4)))) & (((/* implicit */int) var_0)))))))));
        var_21 = ((/* implicit */int) arr_24 [i_8 + 1] [i_8]);
    }
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                {
                    arr_39 [i_9] [i_10 + 2] [i_10 + 2] = ((/* implicit */signed char) ((max((arr_23 [i_10 + 2]), (arr_23 [i_10 + 1]))) ? (((((((/* implicit */_Bool) arr_0 [i_11])) ? (arr_9 [i_9]) : (((/* implicit */int) arr_13 [i_11])))) | (((/* implicit */int) arr_30 [i_10 - 1])))) : (var_9)));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_45 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_4)))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (arr_38 [i_10] [i_10] [i_10] [11]))) * (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((arr_17 [i_9] [i_9] [i_9]) | (((/* implicit */long long int) var_3))))), ((+(var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) != (-7800744903957789579LL)))))))));
                            }
                        } 
                    } 
                    arr_46 [i_9] [i_11] [i_11] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11] [0ULL])) / (((/* implicit */int) var_6)))), (((((/* implicit */int) var_4)) & (var_3))))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_9]))))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_23 [i_9]))))));
                }
            } 
        } 
    } 
}
