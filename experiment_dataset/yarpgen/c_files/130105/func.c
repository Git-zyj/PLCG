/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130105
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_7 [i_1] [i_0 + 2] [5LL]))) >= (((/* implicit */int) min((arr_7 [i_0] [i_0 + 2] [i_2]), (arr_7 [i_0] [i_0 + 2] [i_2]))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) max(((_Bool)1), (min((arr_7 [i_0] [i_1 + 1] [i_0 - 1]), ((_Bool)1)))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */short) ((int) ((((((/* implicit */int) (_Bool)1)) << (0))) << (((/* implicit */int) (_Bool)1)))));
    var_15 = ((/* implicit */short) var_8);
    var_16 = ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_1))));
}
