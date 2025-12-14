/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 |= ((-1441654282 ? ((var_5 ? var_1 : ((((arr_3 [i_0] [i_1 + 2] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))))) : 34419));
                var_13 = (max(var_13, (((+((((((arr_3 [i_0] [i_0] [i_0]) ? 3538373526 : 1314700106))) ? var_6 : var_10)))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] = (!183);
        var_14 -= var_8;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] = (arr_8 [i_3] [i_3]);
        arr_13 [i_3] |= var_0;
        var_15 = (min(var_15, 3707718119));
    }
    var_16 = var_9;
    #pragma endscop
}
