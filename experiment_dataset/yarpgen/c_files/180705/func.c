/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180705
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */int) max((min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) 473415733)) ? (((/* implicit */int) var_14)) : (-473415734)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */long long int) arr_5 [i_0] [i_0]))))) ? (min((arr_3 [i_0] [i_0]), (-473415720))) : (((((var_17) + (2147483647))) >> (((arr_6 [i_0] [i_1]) - (9148343704856117960ULL))))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */int) ((long long int) arr_1 [i_0] [i_1]));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_5))));
}
