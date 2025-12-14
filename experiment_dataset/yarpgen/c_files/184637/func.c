/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184637
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_11))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 ^= ((/* implicit */int) ((((_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_7 [i_0] [i_1] [i_2])));
                    var_15 = ((/* implicit */int) var_7);
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2080374784ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (2080374784ULL)));
                    var_16 -= ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((23519343U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
}
