/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_5 | (min(-1, ((min(var_3, var_4)))))));
    var_12 = (-((((min(var_2, var_3))) ? (min(var_8, 1)) : (((16383 ? var_10 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min((min(((var_9 ? 2341930720774284691 : 1)), -var_4)), ((min(1, var_4)))));
                var_14 = (((min(var_9, -2341930720774284690))) ? var_8 : (arr_0 [i_0 + 1]));
            }
        }
    }
    #pragma endscop
}
