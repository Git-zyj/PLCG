/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171766
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) var_4);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_14 = arr_1 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)349))) : (arr_10 [i_1] [i_2] [i_2]));
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_1 [i_3]))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [2] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [(unsigned short)10] [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_1] [5U] [i_1]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned short) var_9);
        var_18 = arr_9 [i_4] [i_4];
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) var_8);
                    arr_23 [i_4] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4] [i_5] [i_6] [i_4])) ? (((/* implicit */int) arr_6 [i_4])) : (var_9)));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) arr_0 [i_4]);
                        var_21 = ((/* implicit */unsigned char) max((var_21), (arr_21 [i_4] [i_4] [i_7])));
                        var_22 -= ((/* implicit */unsigned char) arr_12 [i_4] [i_5] [i_6] [(unsigned short)1]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 4; i_8 < 12; i_8 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_8 + 1] [i_8 - 1] [i_8 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_4] [10] [i_4] [10] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_7])) : (((/* implicit */int) arr_29 [i_5] [i_5] [i_6] [i_5] [i_8 - 4]))))) : (arr_8 [i_4] [i_5] [i_8])));
                            var_24 = ((/* implicit */unsigned short) arr_22 [i_6] [i_5] [i_4]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */int) arr_2 [i_6] [i_9]);
                            var_26 |= ((/* implicit */int) arr_22 [i_4] [i_5] [i_4]);
                            var_27 = ((/* implicit */unsigned long long int) arr_12 [i_4] [i_5] [i_6] [i_6]);
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_8 [i_4] [i_7] [i_9]))));
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) arr_6 [i_4]);
    }
    var_30 = ((/* implicit */unsigned long long int) var_11);
}
