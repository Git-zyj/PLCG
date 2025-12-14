/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10863
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0]))) : (9420360015520992232ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1] [i_1 - 1])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (9420360015520992232ULL) : (((/* implicit */unsigned long long int) arr_0 [15LL] [i_1])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 - 1] [i_0 - 1]))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (-((~(14213114U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_13)))) > (((/* implicit */int) ((unsigned short) var_6)))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_8 [(short)21] [i_2]))) & (((((/* implicit */_Bool) (short)-16875)) ? (arr_11 [i_2] [(short)18]) : (((/* implicit */long long int) 0)))))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) < (((/* implicit */int) (signed char)121))))), (((unsigned int) (signed char)0))));
                                arr_20 [(signed char)18] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)-326)) < (((/* implicit */int) (short)-16881))))) << (((((((/* implicit */_Bool) arr_17 [19] [i_3] [19] [19] [i_6])) ? (arr_16 [i_2] [i_2] [i_4] [i_2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(signed char)15]))))) - (1487750073U)))))) && (((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_3 - 3] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 0))))))))));
}
