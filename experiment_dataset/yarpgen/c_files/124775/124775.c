/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (min((((-122 ? (arr_1 [i_0]) : ((max(7, 214)))))), ((-1750748397 ? (arr_0 [i_1]) : 145))));
                var_14 = (min((max(((3004098351846415394 ? var_11 : 2014807834)), ((4294967295 ? 1 : 1)))), (arr_4 [i_1] [2])));
                var_15 ^= (((arr_3 [1]) ? 0 : (arr_0 [i_0])));
                var_16 = var_0;
            }
        }
    }
    var_17 = ((var_0 ? 144106391982833664 : var_9));
    #pragma endscop
}
