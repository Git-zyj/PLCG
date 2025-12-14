/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (min(var_3, var_3));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!(((32 ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((((((((var_2 ? (arr_0 [i_0]) : 154))) ? (((1511398563 ? var_2 : (arr_1 [i_0])))) : (min(var_17, 102))))) && (0 - 4023536436)));
        arr_4 [i_0] [i_0] = (((!2147483647) >= ((var_0 ? ((1082128992655878303 ? var_7 : 0)) : -1778127633))));
        var_21 ^= (arr_1 [i_0]);

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1 + 3] = var_17;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_22 = var_12;
                        var_23 = ((2783568738 ? -2861880143918552339 : 12292));
                        var_24 = (max(var_24, ((max(1812710042, ((min(-85, ((33003 ? 52432 : (-2147483647 - 1)))))))))));
                        arr_14 [i_3 - 1] [i_0] [i_0] [i_0] = (arr_12 [i_1 - 1] [i_3]);
                    }
                }
            }
            arr_15 [i_0] = -157;
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_25 = (((4744086400874480624 ? (arr_16 [i_4]) : 142)));
        arr_18 [i_4] [8] = var_15;
        var_26 = (min(var_26, (((((-1082128992655878304 ? (arr_1 [7]) : var_13)) << (((arr_1 [i_4]) - 317666830)))))));
    }
    var_27 = var_8;
    var_28 -= var_12;
    #pragma endscop
}
