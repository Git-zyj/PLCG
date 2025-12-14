/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((19987 ? 0 : 18446744073709551615)))) ? var_1 : (((((1 ? var_0 : 1))) ? var_2 : var_2)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_8 ? 0 : 1))));
        var_15 ^= var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [18] [i_1] = var_7;

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_16 = (min(1, 114));
                        arr_13 [i_1] [15] [i_1] = 1;
                        arr_14 [i_0] [i_1] [i_2] [i_3 - 2] = ((var_4 ? (min((((1 ? 30 : (arr_11 [i_0] [i_1])))), 17940976494983881888)) : (((((((arr_12 [i_3]) ? var_3 : (arr_6 [i_0] [10] [3])))) ? (((70 ? (arr_6 [i_0] [i_0] [6]) : 1))) : ((var_1 ? 9223372036854775807 : var_1)))))));
                        arr_15 [1] [i_1] [i_2] [i_3 + 1] = (((((562949952897024 ? 2447170006 : (arr_0 [i_1] [i_1])))) ? 2147483647 : 60853));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_17 ^= (((arr_16 [i_0] [i_0] [i_0]) ? (((0 ? var_3 : 892115550))) : 3904020499937986281));
                            arr_19 [i_1] [16] [15] [1] [16] [i_4] = (arr_16 [i_0] [20] [14]);
                            arr_20 [2] [i_1] = var_13;
                            arr_21 [9] [i_1] = (min((((arr_18 [2] [1] [i_2] [i_1]) ? (arr_17 [i_2 - 3]) : ((1 ? 1023 : -5514946060594959528)))), ((((1 ? 2155869471 : -5560361717429766884))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_18 = (((arr_18 [i_0] [i_0] [i_2 - 2] [i_1]) ? 1281494971639749502 : var_0));
                            arr_25 [i_1] [i_1] [i_1] [i_2 + 2] [i_1] [i_3] [i_1] = ((4294967295 ? (arr_11 [i_1] [i_1]) : 562949952897034));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_29 [1] [i_1] [4] [i_1] [i_6] = (min((((2447170006 ? 214 : 186))), ((1 ? 1 : 938261784))));
                            arr_30 [i_2] [i_1] [3] [7] [i_2] [i_2] = -6;
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_33 [i_1] = 0;
                        arr_34 [i_1] [i_2] [i_1] = (((((arr_0 [9] [i_2 - 3]) ? var_11 : (arr_0 [i_0] [i_2 + 1])))) ? ((127 ? 2139097824 : 0)) : 1);
                    }
                }
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
