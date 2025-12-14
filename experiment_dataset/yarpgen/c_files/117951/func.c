/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117951
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) (+(8388607U)))))))) > (min((((/* implicit */unsigned int) -773118071)), (var_6)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) max((5933700663668080410ULL), (((/* implicit */unsigned long long int) (unsigned short)61066))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((((345685047240017088ULL) >= (((/* implicit */unsigned long long int) -773118071)))), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) && (((/* implicit */_Bool) arr_2 [i_0 - 2]))))));
                                var_14 = ((/* implicit */unsigned long long int) ((short) arr_2 [i_3]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_7 [5] [i_1] [i_1] [i_1 + 2])) << (((((((/* implicit */unsigned long long int) 8U)) * (18446744073709551615ULL))) - (18446744073709551578ULL)))));
                                arr_15 [i_0] [i_1] [i_2] [i_5] [10ULL] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-30001)))), (((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_0 + 2] [(signed char)13] [i_2 + 2]))))) ? (min((max((((/* implicit */long long int) -773118071)), (-3033671504282173463LL))), (((/* implicit */long long int) ((var_2) >> (((773118091) - (773118068)))))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50395)) / (((/* implicit */int) (unsigned short)59936))))) & ((+(var_6))))))));
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3227251435463104400LL))));
                            }
                        } 
                    } 
                    var_17 = ((max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_11 [i_0 + 1] [i_1] [i_1] [i_1 + 3])))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)3072)), (1970014632)))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((unsigned long long int) (unsigned short)29978)) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                    arr_16 [i_0] [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned int) 9223372036854775807LL);
                }
            } 
        } 
    } 
    var_18 -= ((unsigned int) ((((/* implicit */unsigned long long int) max((1737348170), (((/* implicit */int) (unsigned short)30168))))) < (var_9)));
}
