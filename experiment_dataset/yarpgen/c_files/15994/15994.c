/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = (max(var_15, var_4));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [2] [2] = (((-(-127 - 1))));
                    var_16 += ((16634743502097526777 ? (((arr_0 [i_0 + 1] [i_0 - 2]) ? 18446744073709551611 : (arr_0 [i_0 + 1] [1]))) : 16634743502097526777));
                    var_17 = (((arr_2 [i_1]) * 1812000571612024839));
                }
            }
        }
    }
    #pragma endscop
}
