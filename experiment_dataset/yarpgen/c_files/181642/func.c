/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181642
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (var_11)))) ? (((arr_3 [i_0] [i_1]) | (((arr_3 [(_Bool)1] [i_1]) & (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((arr_3 [8] [i_1]) <= (((/* implicit */unsigned long long int) var_5))))), (min((((/* implicit */long long int) var_12)), (arr_4 [(unsigned char)15] [i_0] [i_1])))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)62))))) ? (((((/* implicit */_Bool) min((var_3), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) arr_0 [i_0]))))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_0 [i_0]))) >= (min((((/* implicit */unsigned int) var_4)), (arr_0 [i_0])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            {
                arr_14 [i_2] [5ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))) : (1767974172550050311ULL))) > (((/* implicit */unsigned long long int) min((arr_13 [i_2]), (((/* implicit */unsigned int) arr_9 [i_3] [i_3]))))))))) : (((arr_13 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 3])))))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_23 [i_2] [i_3 + 1] [i_4] [i_5] [i_4] [i_5] [i_2] = min((((((/* implicit */_Bool) arr_19 [i_2] [i_3] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((var_9) ^ (var_11)))) : ((-(arr_3 [i_2] [i_6]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [i_5]) ? (((/* implicit */int) arr_11 [i_5] [(short)9])) : (((/* implicit */int) arr_2 [i_4])))))))));
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) arr_20 [i_3 + 2] [i_3 + 2])), (max((((/* implicit */unsigned int) var_1)), (var_9))))), (((/* implicit */unsigned int) -1643955690))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
