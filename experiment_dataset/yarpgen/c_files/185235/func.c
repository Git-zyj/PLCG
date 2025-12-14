/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185235
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 + 1])) || (((/* implicit */_Bool) var_3)))) ? (((arr_4 [7] [7] [i_1 + 1]) << (((arr_4 [i_0] [i_1] [i_1 + 1]) - (14561951946421514988ULL))))) : (((((/* implicit */_Bool) 457805285)) ? (arr_4 [i_0] [i_1] [i_1 + 1]) : (arr_4 [i_0] [i_1] [i_1 + 1])))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))))) && (((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0])))))), ((-(((unsigned long long int) (short)-9053))))));
                var_20 ^= ((/* implicit */int) (((-(arr_1 [i_1 - 2] [(short)2]))) / (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - (var_2)))))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) var_18)) * (((/* implicit */int) var_18)))) < (((int) var_8))))), (7170634871689457545LL)));
}
