/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((((((-10 ? 160 : 51238)))) ? var_5 : var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((~(arr_1 [4] [4])));
                arr_4 [i_0] [i_1] [i_0] = (var_3 < -6993742958630905455);
            }
        }
    }
    #pragma endscop
}
