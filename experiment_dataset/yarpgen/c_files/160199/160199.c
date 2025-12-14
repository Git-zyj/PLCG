/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = (max(((-1064673721 ? (arr_0 [i_0] [11]) : (((((arr_0 [i_0] [i_0]) && 2147483648)))))), (((2147483638 ? (((!(arr_0 [2] [1])))) : ((min(var_3, var_3))))))));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) <= 2147483647));
        var_12 = (((((~(arr_0 [i_0] [i_0]))) + 2147483647)) << (((arr_0 [i_0] [i_0]) - 22137)));
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 8))) ? ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : ((((arr_0 [i_0] [1]) < (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (arr_5 [i_1] [10]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        var_13 = (arr_7 [i_1]);
                        var_14 -= (((arr_7 [5]) >> ((((0 >= (arr_5 [i_1] [0])))))));
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = (((510 + (11748237999417734841 + 15))));
    }
    var_15 = var_0;
    #pragma endscop
}
