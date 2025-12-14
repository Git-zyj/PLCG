/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 |= (~2048242613);
                    var_20 = (((((2246724659 ? (arr_0 [9]) : var_6)))) ? (max((arr_3 [i_2 - 2] [i_1] [i_0 + 1]), ((~(arr_3 [i_2] [i_1] [i_0]))))) : (min((((arr_3 [i_2] [i_1] [i_0]) ? (arr_1 [22] [i_1]) : 2743853839)), ((1245005566 ? 1245005566 : 379446547)))));
                }
            }
        }
        var_21 = ((-(arr_2 [i_0] [i_0 - 1])));
        var_22 = (max(var_22, 2921235127));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_23 *= max((min(3915520748, 1)), 379446524);
        var_24 &= 2246724695;
        var_25 = var_11;
    }
    var_26 -= (~2048242598);
    var_27 -= var_18;
    var_28 ^= (((max(((1245005543 ? var_1 : 4139358295)), (min(7, 2031812255))))) ? ((1548917617 ? var_7 : ((1245005543 ? var_1 : var_11)))) : 3049961750);
    #pragma endscop
}
