/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155607
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
    var_15 = ((/* implicit */short) (~((+(((int) (short)0))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [6] = ((int) (~(((/* implicit */int) var_10))));
                arr_5 [i_0 + 1] [4] [i_1 + 1] = (~(((/* implicit */int) (short)-28328)));
                var_16 ^= ((((((/* implicit */int) (short)-18)) ^ (((/* implicit */int) (short)1023)))) % ((~(((/* implicit */int) var_14)))));
            }
        } 
    } 
}
