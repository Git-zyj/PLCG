/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((31172 * (var_5 >> 1)));
    var_11 = (min(((31172 ? ((var_1 ? 12917808087083641627 : -31200)) : (-1539352138 / 31193))), var_6));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((1 < var_6) ? ((var_6 ? var_6 : 31171)) : (~var_1)));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((1 << (-1 + 6)));
            arr_6 [i_0] [i_0] = (((((var_2 ? var_6 : 18446744073709551606))) ? var_5 : var_9));
        }
    }
    #pragma endscop
}
