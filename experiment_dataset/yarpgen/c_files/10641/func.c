/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10641
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
    var_20 = ((/* implicit */unsigned short) ((unsigned char) var_16));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_21 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((arr_5 [i_3] [i_3] [i_3] [i_3 - 1]) < (var_12)));
                        var_22 = ((/* implicit */long long int) (short)29724);
                        var_23 *= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-29729)) : (((/* implicit */int) var_1)))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_18)))) < (((/* implicit */int) (short)29724))));
                            var_25 = ((/* implicit */unsigned int) ((var_6) < (((/* implicit */long long int) arr_13 [i_0] [i_4] [i_0 - 2] [i_3 - 2] [i_4]))));
                            var_26 &= ((/* implicit */unsigned char) ((arr_13 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_3 + 4] [i_3 + 4]) * (arr_5 [i_0] [i_1] [i_2] [i_4])));
                            var_27 *= ((/* implicit */_Bool) ((arr_6 [i_0] [i_3 + 4] [(signed char)4]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_28 = ((/* implicit */_Bool) ((var_4) >> (((3880580421U) - (3880580391U)))));
                            arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29735)) ? (arr_5 [i_0] [i_1] [i_2] [(unsigned short)0]) : (3880580421U)))) ? (arr_9 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_7))));
                        }
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) 414386874U);
    }
    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        var_30 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_7)), (max((((/* implicit */unsigned int) arr_19 [i_6])), (var_4)))));
        arr_20 [i_6] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6]))) : (866407867U))));
    }
}
