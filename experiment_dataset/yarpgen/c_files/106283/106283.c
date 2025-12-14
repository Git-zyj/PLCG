/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = ((((((min((arr_3 [i_1]), (arr_0 [i_2] [i_3])))) ? (arr_7 [i_1] [i_0 - 1] [i_2]) : (-958 / var_10))) / (arr_5 [i_0 - 2] [i_0 - 2] [i_1] [i_1])));
                        arr_10 [i_1] [i_2] [i_1] = (((((-(arr_3 [i_1])))) ? ((min((arr_3 [i_1]), (arr_3 [i_1])))) : (((4553853961457510643 < (arr_3 [i_1]))))));
                        arr_11 [i_0 - 2] [i_1] [i_2] [i_3] = (min((((arr_2 [i_0 - 1]) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : var_0)), var_8));
                        var_16 = (~(max((min(281474976710655, -22)), ((min((arr_2 [i_0]), (arr_9 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    arr_17 [i_5] = (((((1 ? var_6 : (arr_16 [i_5] [i_4 - 1] [i_5] [i_5])))) ? ((4035225266123964416 / (((1023 & (arr_6 [7] [i_0 + 1] [i_5] [i_0])))))) : var_8));
                    var_17 = ((((281474943156224 - (arr_4 [i_0] [i_4 - 1] [i_4]))) ^ (arr_1 [i_4])));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    arr_27 [18] [i_7] [i_7] [i_8 - 1] = var_9;
                    var_18 ^= (-1 ? 1773452212467392850 : (min(-1355047530, -2311294471290436856)));
                }
            }
        }
        arr_28 [i_6] = -26969;
        arr_29 [i_6] = (max(739232056, ((max((arr_24 [i_6] [i_6] [i_6]), (arr_21 [i_6] [1] [i_6]))))));
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        var_19 = -4145473317798969193;
        arr_33 [i_9] [i_9] = (((var_6 ? (arr_19 [i_9 + 1]) : (arr_19 [i_9 + 1]))));
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_20 = var_14;
        var_21 = (max(var_21, ((((1048575 >= 65535) < ((max(3696258851, 1))))))));
        arr_37 [i_10] = 16376;
        var_22 ^= (arr_34 [16]);
        arr_38 [i_10] = ((36 ? -84 : 86));
    }
    var_23 = ((((242 != (max(var_12, var_10))))));
    #pragma endscop
}
