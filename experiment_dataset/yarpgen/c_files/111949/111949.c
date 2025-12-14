/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max(var_12, -999062385));
                arr_4 [i_0] [i_0] [i_1] |= (arr_0 [i_0]);
                var_13 ^= ((205 ? 186 : 189));
            }
        }
    }
    var_14 += ((66 ? (((((59232 ? 71 : var_1))) - (max(189, var_7)))) : -10832));
    #pragma endscop
}
