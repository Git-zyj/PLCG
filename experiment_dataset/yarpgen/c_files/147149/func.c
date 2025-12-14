/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147149
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~((+(((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (4157008645573352684LL))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) var_9))))));
                    arr_8 [i_0] [(unsigned char)16] [i_0] |= ((/* implicit */unsigned short) (unsigned char)154);
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32749))) - (4157008645573352710LL))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7443529960140687985LL)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (unsigned char)157)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) var_11);
                        arr_18 [i_3] = ((/* implicit */unsigned long long int) var_8);
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) (+(8388607U)))))));
                            var_19 = ((/* implicit */int) arr_11 [i_6]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_3] [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) ((unsigned long long int) 18446744073709551614ULL)))));
                            arr_24 [i_7] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_20 &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_8])) || (((/* implicit */_Bool) -477323728))))) % (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                            var_21 += ((/* implicit */int) (~(((unsigned long long int) (_Bool)1))));
                            var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [0ULL] [i_8]) & (((/* implicit */int) (unsigned char)28))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)155)))) : (((/* implicit */int) ((signed char) arr_11 [(short)8])))));
                        }
                    }
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((int) arr_10 [i_3]));
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4] [i_0])) ? (((/* implicit */int) arr_3 [i_3] [i_0])) : (((/* implicit */int) var_5))));
                        arr_29 [i_9] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_4] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9]))) : (arr_13 [i_9] [i_3] [i_3] [i_0])));
                    }
                }
            } 
        } 
    }
    for (short i_10 = 4; i_10 < 16; i_10 += 2) 
    {
        var_25 += ((/* implicit */unsigned long long int) var_5);
        arr_32 [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165)))))))), (arr_2 [i_10])));
        var_26 = ((/* implicit */unsigned int) arr_7 [i_10 + 1]);
        var_27 = var_1;
    }
    var_28 = var_10;
}
