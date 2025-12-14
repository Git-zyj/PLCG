/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1596
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
    var_10 = ((/* implicit */long long int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) max((min((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_1]))), (((/* implicit */short) (((+(arr_0 [i_0]))) >= ((~(-9223372036854775806LL))))))));
                arr_6 [i_1] [i_0] [i_1] = var_4;
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) -9223372036854775806LL);
}
