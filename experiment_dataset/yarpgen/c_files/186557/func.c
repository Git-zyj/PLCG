/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186557
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_0])))))))));
                var_12 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_0]))))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) (+(var_3)));
}
