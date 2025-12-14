/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 13396601426115775262;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((((-52 / (var_3 * 52)))) ? (max((min(202, 16465954829897365135)), 92)) : -330805214);
                arr_6 [i_1] = (((arr_3 [i_0] [i_0]) * var_7));
            }
        }
    }
    var_12 = ((var_4 ? (((((min(9918330937814608158, 202))) && -16148020786592525118))) : var_6));
    var_13 = (-78 * var_1);
    #pragma endscop
}
