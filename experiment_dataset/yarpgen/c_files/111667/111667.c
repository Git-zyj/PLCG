/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 += 18756;
                var_15 = ((((max(-24147, 30461))) > 34358689792));
                var_16 -= (min((max(-23850, 57)), var_4));
                arr_6 [3] = -24147;
            }
        }
    }
    var_17 -= (max((((!((min(8160, 8154)))))), (var_8 % var_0)));
    #pragma endscop
}
