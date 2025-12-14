/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164484
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1 - 1] [(unsigned char)0] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0 + 1]))))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~((~((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))))));
                    var_10 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) arr_5 [i_1 - 2] [i_1 - 3] [i_1 - 1]))), (var_9)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((511) ^ (((/* implicit */int) (short)-10901))));
}
