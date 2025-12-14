/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_14 &= ((~(((((arr_2 [i_0 - 1] [i_0 - 2]) + 2147483647)) << (((((arr_2 [i_0 + 3] [i_0 - 1]) + 14246)) - 17))))));
        var_15 -= (arr_0 [i_0]);
        arr_3 [i_0] |= (!(((((min(var_0, 7272540843850465406))) ? ((7272540843850465421 ? -7272540843850465407 : 9223372036854775807)) : var_5))));
        var_16 = (arr_1 [i_0] [i_0]);
        var_17 |= var_10;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 &= (+(((8282073959696033502 >= var_4) ? (((18810 ? (arr_7 [i_1]) : (arr_6 [i_1])))) : (min(4867400595403136330, var_1)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 24;i_4 += 1)
                {
                    {
                        var_19 = (arr_7 [18]);
                        arr_15 [i_1] [i_2] [i_2] = 0;
                        var_20 = (min(((-(arr_10 [i_1]))), ((min(var_3, 110)))));
                        var_21 = (min(var_21, ((min(((((min(20, var_3))) ? (arr_12 [i_1] [i_2] [i_2] [i_3] [i_4]) : 110)), (!0))))));
                    }
                }
            }
        }
        var_22 = (max((arr_11 [0] [i_1]), (max(((var_2 % (arr_4 [i_1]))), (arr_5 [10] [i_1])))));
        var_23 += (max((arr_11 [i_1] [i_1]), 91));
    }
    var_24 = ((!(((var_9 ? var_12 : (min(var_5, 23)))))));
    #pragma endscop
}
