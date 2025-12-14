/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104751
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 |= ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]))), (min((((/* implicit */unsigned long long int) (short)-16705)), (12534599721003980239ULL)))))));
        var_20 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) 4665257296713850903ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (4665257296713850903ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23253)) % (((/* implicit */int) (short)-9180))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)0))))) ? ((~(((/* implicit */int) (unsigned short)17749)))) : (((/* implicit */int) (unsigned short)41864)))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-((((!(((/* implicit */_Bool) (unsigned short)23664)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))) : (4665257296713850919ULL))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = arr_2 [i_0];
                    var_22 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-16383))));
                    var_23 ^= (short)16382;
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (arr_0 [i_3]) : (((/* implicit */int) (short)-24018)))))))));
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        arr_16 [(unsigned char)16] [i_3] [i_4 + 2] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_4 [i_4 + 1] [i_4 + 1] [i_4 + 2]) <= (((/* implicit */unsigned int) (+(var_8))))));
                        arr_17 [i_3] [i_3] [i_5] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) arr_8 [i_5]);
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_13))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_4 [i_3] [i_3] [i_3]))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 3) 
    {
        var_27 = ((/* implicit */_Bool) var_18);
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 3; i_10 < 12; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            {
                                arr_30 [i_7] [i_11] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_2 [i_9]))))));
                                var_28 = ((/* implicit */unsigned long long int) arr_15 [i_7] [i_8] [i_7] [i_10 - 3] [i_11]);
                            }
                        } 
                    } 
                    arr_31 [i_7 + 1] [i_8] [i_9] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (unsigned char)110)) / (((/* implicit */int) arr_26 [i_7] [i_8] [i_8] [i_9] [i_9])))));
                    var_29 = ((/* implicit */short) arr_19 [i_7] [i_9]);
                    var_30 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)30366)) ? (((/* implicit */int) (unsigned short)8738)) : (((/* implicit */int) (short)-1))));
                    /* LoopSeq 3 */
                    for (short i_12 = 1; i_12 < 9; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((unsigned char) ((short) (short)25977)));
                        var_32 = ((/* implicit */unsigned long long int) ((arr_9 [i_7 - 2] [i_7 - 2] [(unsigned short)19]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9])))));
                    }
                    for (short i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */unsigned char) arr_0 [i_7]);
                        var_34 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_13 [i_7 - 1]))))) : ((+(arr_9 [i_7] [i_8] [i_13]))));
                    }
                    for (short i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
                    {
                        var_35 ^= ((/* implicit */unsigned long long int) arr_22 [i_7 + 1] [(unsigned short)7]);
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(4665257296713850919ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_12)))));
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) (+(arr_9 [i_7 - 2] [i_7 - 1] [i_7])));
        var_38 = ((/* implicit */_Bool) arr_4 [i_7 + 3] [i_7] [i_7]);
    }
    var_39 |= ((/* implicit */unsigned long long int) var_6);
    var_40 = 8537167270834195782ULL;
}
