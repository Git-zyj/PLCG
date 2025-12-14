/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189318
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
    var_16 = ((/* implicit */unsigned int) -8195767987972020585LL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) / (((unsigned int) arr_3 [i_0])));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */int) var_13);
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_2 + 3])) * (((/* implicit */int) arr_3 [i_2 - 1]))));
                        arr_13 [i_3] [i_1] [i_2] [i_1] [0U] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_19 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) && (arr_9 [i_0] [i_0]))) && (((/* implicit */_Bool) var_11))));
        var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6)));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        arr_16 [i_4] &= ((/* implicit */short) (-(((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 22; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                arr_28 [i_8] [i_7] [i_8] [i_7] [i_6] [i_7] [i_4] &= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_13)) && (var_14)))));
                                arr_29 [i_6] [i_5] [i_6] [i_8] [i_7] = ((/* implicit */int) (!((_Bool)1)));
                                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_24 [i_4] [i_5] [i_6] [(unsigned char)3]) << (((((/* implicit */int) arr_19 [i_8] [i_5] [i_4])) - (12574))))), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_8] [i_7] [i_6] [i_6] [i_5 + 2] [i_4] [i_4]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_13)))) : (var_9)))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_5] [i_6] [i_7])), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [(unsigned char)23] [i_8] [i_7] [i_5 - 3] [i_5 + 2] [i_5 - 2]))) : (max((((/* implicit */long long int) var_10)), (var_7)))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_6])) - (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_3)))))));
                            }
                        } 
                    } 
                    arr_30 [i_6] [i_4] [i_4] |= ((/* implicit */unsigned long long int) arr_25 [i_4] [i_4] [i_5 - 3] [i_5] [(_Bool)1] [i_6] [i_6]);
                    arr_31 [i_4] &= ((((/* implicit */int) (unsigned short)2194)) & (((/* implicit */int) (unsigned short)2198)));
                }
            } 
        } 
        arr_32 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34519)) ? (((/* implicit */int) (_Bool)1)) : (arr_22 [i_4] [i_4] [i_4])))) ? (((var_4) | (((/* implicit */int) arr_19 [i_4] [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4])) || (((/* implicit */_Bool) arr_22 [i_4] [(short)9] [i_4])))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
    {
        var_23 += ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9]))))), (((((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [8U] [i_9])) + (((/* implicit */int) arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        arr_35 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((_Bool) var_0)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_22 [i_9] [i_9] [i_9]) : (var_4)))) ? (((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_18 [i_9] [i_9]))))));
        var_24 = ((/* implicit */unsigned int) (~(max((arr_22 [i_9] [i_9] [i_9]), (arr_22 [i_9] [i_9] [i_9])))));
        arr_36 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_11)))))) << ((((+(var_6))) + (1308687071)))));
    }
    var_25 |= ((/* implicit */unsigned long long int) var_10);
}
