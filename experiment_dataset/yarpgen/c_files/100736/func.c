/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100736
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((var_9) ? (((/* implicit */int) (short)-23805)) : (((((/* implicit */int) var_2)) | (((/* implicit */int) var_5)))))))));
    var_20 += ((/* implicit */unsigned short) var_11);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_21 -= ((/* implicit */short) ((arr_8 [i_0] [i_1] [i_4 + 3] [i_3] [i_4 - 1]) > (((/* implicit */int) ((short) arr_11 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3])))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_10 [i_0] [14] [i_0] [i_0] [4LL]))));
                                arr_13 [i_1] [(short)1] [i_2 - 1] [i_2 + 2] [(short)1] [i_2 - 1] [(short)1] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_7 [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0 + 3])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_7 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */long long int) max((max(((!(((/* implicit */_Bool) 3272778472658529700ULL)))), (((((/* implicit */int) (short)-29115)) < (((/* implicit */int) (short)-29115)))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(short)8] [i_1] [i_2 - 1] [i_5]))) == (0U)))));
                                var_24 = ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5 - 1] [i_6 + 2] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_0 + 3] [i_6 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_15 [i_5 - 1] [i_1] [i_6 + 2] [i_2 - 1])) : (((/* implicit */int) arr_15 [i_5 - 1] [i_1] [i_6 + 2] [i_2 - 1])))) : (((/* implicit */int) ((short) arr_6 [i_5 - 1] [i_5 - 1] [i_6 + 2] [i_2 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 &= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((18049448560123209442ULL) / (((/* implicit */unsigned long long int) 1611634672U))))) ? (((/* implicit */int) ((unsigned short) (short)-23800))) : ((+(104274882)))))) == (((((var_11) & (var_8))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (short)23805)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_1))));
}
