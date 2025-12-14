/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162868
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
    var_14 -= ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_15 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2571895307U)) & (arr_0 [i_0])));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((signed char) arr_0 [i_0])))));
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_8))))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_19 [(short)8] [i_2] [i_3] [i_2] [10] = ((/* implicit */short) arr_8 [i_2] [6]);
                            arr_20 [i_5] [i_5] [(unsigned short)12] [(unsigned short)12] [i_0] [i_0] &= ((/* implicit */unsigned char) var_4);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_12))));
                        }
                    } 
                } 
            } 
            arr_21 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_12);
            /* LoopSeq 2 */
            for (short i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned int) var_0);
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned short) ((_Bool) arr_9 [i_8] [i_7 - 3] [i_7] [i_7]))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_0] [i_2] [i_6] [i_7])), (max((var_13), (((((/* implicit */_Bool) arr_22 [i_8] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(short)9] [(short)9] [i_6] [i_6 - 1]))) : (var_12))))))))));
                            var_22 *= ((/* implicit */short) min((((/* implicit */int) arr_23 [i_0] [i_8] [i_6 + 1])), (max((((((/* implicit */_Bool) (unsigned char)30)) ? (var_3) : (((/* implicit */int) (unsigned short)62022)))), (((/* implicit */int) arr_29 [i_0] [i_7] [i_6 - 1] [i_6 - 1] [i_8] [i_6] [i_6]))))));
                            var_23 += ((var_3) <= (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (~(arr_22 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max((2523550302488855184ULL), (((/* implicit */unsigned long long int) (unsigned short)49117))))) || (((/* implicit */_Bool) (unsigned char)0)))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                var_25 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_5))))))), ((+(((unsigned int) (unsigned short)16419))))));
                arr_33 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_6 [i_2]));
            }
        }
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])) : (0ULL))))));
            var_27 = ((/* implicit */short) (+((-(((/* implicit */int) arr_35 [i_0] [i_10]))))));
        }
    }
    var_28 = ((/* implicit */unsigned short) var_7);
    var_29 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
}
