/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177152
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
    var_20 = ((/* implicit */long long int) ((max((var_4), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (var_12)))))) ^ (var_4)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_1 [15ULL])));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1418765312)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [11U] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4)))) * (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_1 - 2] [i_2]))))))) : (((/* implicit */long long int) var_19))));
                }
            } 
        } 
    } 
}
