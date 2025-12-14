/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -169;
    var_14 = (min(var_2, (min(((-4128 ? 4127 : 669547946843182042)), -63))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(857491798, 420380390));
        var_16 = min((arr_3 [i_0] [i_0]), 12);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_2] [i_2] = min(192, (min((min(-594221837, 49443)), (min(-1119850771, 231)))));
                    var_17 = var_10;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_16 [i_3] = (((arr_13 [i_3] [i_5] [i_5 + 1] [i_5] [i_3] [i_3]) ? ((-(arr_15 [i_1] [i_2] [i_3] [i_4] [i_5 + 3]))) : (((((arr_6 [i_5 + 1]) + 2147483647)) >> (((arr_6 [i_5 - 2]) + 1169704078))))));
                                var_18 = (min(3, 10489291579025950939));
                            }
                        }
                    }
                    var_19 = ((~((var_11 ? (arr_4 [i_1]) : (min(64356860774626460, var_0))))));
                }
            }
        }
        arr_17 [i_1] |= -13;
        var_20 = ((~(((var_2 + 2147483647) >> (41135 - 41115)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, ((min(((min(var_1, (arr_4 [i_6])))), ((-(min(var_0, var_4)))))))));
                    var_22 = 5362291866544345309;
                    var_23 = (min((((-(arr_14 [i_1] [i_6] [i_6] [i_7])))), (min((arr_2 [i_7]), (arr_2 [i_7])))));
                    var_24 = (~var_4);
                }
            }
        }
        arr_23 [i_1] = (+(min((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]), 180)));
    }
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {
        arr_27 [i_8] = (((min(15288714366476527422, var_9))) ? ((min(35, -15714))) : -var_9);
        var_25 = (min(37633, 0));
    }
    var_26 &= var_10;
    #pragma endscop
}
