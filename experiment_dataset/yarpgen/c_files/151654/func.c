/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151654
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
    var_15 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6)))) ? (((int) var_12)) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) var_10)) - (111))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_3] [i_4] [4] [4] &= ((/* implicit */_Bool) arr_12 [i_4] [(_Bool)1] [i_2] [(_Bool)1] [i_4] [i_3]);
                                arr_15 [(signed char)4] [23ULL] [(signed char)4] [i_3] [i_0] [(signed char)21] [i_1] = ((long long int) min((((((/* implicit */_Bool) 32768)) ? (arr_6 [i_4] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (arr_7 [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) min((var_11), (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) (~(var_3)))) : (arr_8 [i_2])))));
                }
            } 
        } 
    } 
}
