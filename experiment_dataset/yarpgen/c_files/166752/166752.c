/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(137, (((((1 ? -22220 : 158))) ? var_2 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((max((arr_5 [i_1]), ((-(arr_0 [i_0] [i_1])))))) ? -7963497211206122554 : ((min((max((arr_3 [i_0] [1]), (arr_3 [i_0] [1]))), var_11)))));
                arr_7 [i_0] = (8288725484257200872 ? (((arr_2 [i_0]) ? (arr_2 [i_1]) : (arr_2 [i_0]))) : (arr_2 [i_1]));
                arr_8 [i_0] = (-2147483646 || var_2);
                arr_9 [i_0] [5] [i_1] = ((((min((arr_1 [i_0] [i_0]), 1))) * ((((((arr_4 [i_0]) & (-127 - 1)))) ? (max(0, var_1)) : (arr_3 [i_1] [i_0])))));
                arr_10 [i_0] [i_0] = (max(63065, 2147483647));
            }
        }
    }
    var_14 = (((((((max(var_7, var_4))) ? 127 : 54964))) ? ((((1 ? var_3 : -1937320499)))) : var_6));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_21 [6] = (max(2858749285, (1 & 1)));
                    arr_22 [i_4] [i_3] [i_4] [i_4] = (min((((((1 ? var_2 : 63780))) ? 166 : var_12)), 10764651324057367367));
                }
            }
        }
    }
    #pragma endscop
}
