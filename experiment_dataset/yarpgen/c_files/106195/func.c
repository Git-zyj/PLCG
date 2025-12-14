/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106195
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(max(((+(arr_4 [i_0] [i_1 - 1]))), (((/* implicit */long long int) var_3))))));
                var_10 = ((/* implicit */signed char) (((-(arr_2 [i_1 + 1] [i_1] [i_1]))) % (((/* implicit */int) var_8))));
                var_11 *= ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((min((var_6), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max(((~(var_5))), (((/* implicit */long long int) var_0)))))));
    var_14 = ((/* implicit */signed char) min((var_4), (var_4)));
}
