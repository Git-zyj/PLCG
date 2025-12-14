/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179628
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
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))));
    var_19 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_15)) : (var_7))))), (((/* implicit */int) min((var_4), (var_4))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_3 [22U] |= ((/* implicit */signed char) ((_Bool) min((arr_2 [i_0]), (((((/* implicit */int) (short)511)) <= (((/* implicit */int) (short)500)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_16))))))) * ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-511)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_21 = var_14;
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_3 + 1]) : (((unsigned int) var_13))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~((+(((/* implicit */int) var_11)))))))));
                }
            } 
        } 
    }
    for (short i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        arr_17 [i_4] [(unsigned char)0] = ((/* implicit */unsigned long long int) arr_13 [i_4] [16LL] [i_4] [(short)14]);
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            arr_20 [i_5] = (!(((/* implicit */_Bool) var_7)));
            arr_21 [i_4] [i_5] = (short)-506;
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                {
                    arr_27 [i_6] [(short)4] [(short)0] [i_6] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) arr_12 [i_4] [i_6] [13U] [22U]))))) ? (arr_18 [i_6] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4 - 1] [i_4 - 1] [i_4 + 2]))))) : (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) arr_16 [i_4] [i_7])), (var_0))))))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_6])) ? (((unsigned long long int) arr_13 [i_4] [i_6] [i_6] [i_7])) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_16 [i_4] [1ULL]) : (((/* implicit */int) var_12))))) / (arr_8 [i_4]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (unsigned char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                for (short i_10 = 2; i_10 < 15; i_10 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((max((((long long int) var_0)), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (_Bool)1))));
                        var_26 &= ((/* implicit */int) ((arr_16 [i_9] [(unsigned char)11]) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_19 [i_9]))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) 2296835809958952960ULL);
}
