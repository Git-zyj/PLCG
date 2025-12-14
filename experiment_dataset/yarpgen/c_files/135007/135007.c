/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -1;
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (min(var_20, var_13));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [7] [i_1] [i_0] [i_3] [i_1] [9] = (((arr_9 [i_1] [i_0] [i_1 - 1] [i_1] [i_3 - 1]) * -var_4));
                        arr_12 [i_0] [i_1 - 1] [0] [i_3] = ((!(var_16 & -1)));
                        var_21 = (min(var_21, (!-6994077546443443166)));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [0] [i_1 - 2] [i_1] [i_2] [i_0] [i_4] = ((!(arr_8 [i_1] [i_1] [i_1 - 2] [i_1])));
                        arr_16 [i_0] [i_1] [i_1 - 2] [i_1] [i_1] = var_3;
                        arr_17 [i_0] [i_0] [i_2] [i_4] = (((((arr_8 [i_0] [i_1] [9] [i_4]) >> (((arr_8 [i_0] [i_1] [i_2] [i_4]) - 51617)))) >> (var_10 - 103)));
                    }
                    var_22 = (min(var_22, ((((((var_5 < (arr_5 [i_0] [i_0] [1] [i_2])))) >> (var_6 > var_2))))));
                    arr_18 [i_0] [i_0] [i_2] [i_2] = (arr_7 [i_0] [i_0] [i_1] [i_2]);
                    var_23 = 109;
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, ((max(var_9, (((38 == ((((arr_1 [i_1]) && var_15)))))))))));
                    arr_22 [i_0] [i_1] [i_0] = min(((max(((-1535244779462541624 ? var_6 : 97)), (arr_9 [i_0] [i_0] [i_1 - 2] [i_1] [i_5])))), (arr_19 [i_5] [i_1] [i_1]));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_25 = (min(var_25, ((((245 <= -11) || (arr_3 [i_0]))))));
                    arr_26 [i_6] [5] [i_6] [i_0] = (((arr_23 [i_0] [i_1 - 1] [i_0]) ? (max((arr_23 [i_0] [i_1 - 1] [i_0]), (arr_23 [i_0] [i_1 - 1] [i_0]))) : (((min(27945, 17))))));
                    arr_27 [i_0] = ((((max(15, (arr_2 [i_0] [i_1 - 2] [i_1 - 2])))) ? (((var_6 > (arr_5 [i_0] [i_6] [i_6] [i_1 + 1])))) : (max((arr_20 [9] [i_1 - 2] [i_6] [i_6]), (min(37, -1))))));
                    arr_28 [i_0] [i_1] [i_0] = ((-12 ? -47 : -1));
                }
                var_26 = (min(var_26, ((((((-((min(var_12, 10632)))))) >= ((3 ? 9178746607221943462 : -1)))))));
                var_27 = (min(var_27, (min((max((arr_23 [i_1] [i_1] [i_1]), (!5))), ((min(((~(arr_21 [i_1] [i_1] [i_0]))), (((var_17 < (arr_6 [6] [i_0] [i_1 - 2] [1])))))))))));
            }
        }
    }
    #pragma endscop
}
