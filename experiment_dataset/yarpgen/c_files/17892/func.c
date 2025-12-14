/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17892
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
    var_10 = ((/* implicit */_Bool) 134152192);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) ((int) (+(((/* implicit */int) (unsigned char)250)))));
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (2817842630U) : (2817842620U)))) || (((/* implicit */_Bool) 1477124675U))));
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_7))));
                }
            } 
        } 
    } 
}
