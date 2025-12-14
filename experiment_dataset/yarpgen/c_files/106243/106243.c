/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-1, 1515082088));
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 = (max(((!(arr_4 [i_0 + 1] [i_2 + 2]))), (!var_1)));
                        var_16 |= (((((~(arr_8 [i_1] [22] [i_0 + 1] [i_2] [i_2 + 2])))) * (max((arr_6 [i_1] [i_1] [i_2]), (arr_8 [i_1] [i_2] [i_2] [i_2] [i_2 + 3])))));
                        var_17 = min((((arr_6 [i_0] [i_0] [i_0 + 1]) * (arr_6 [i_0] [i_0] [i_0 + 1]))), (((arr_6 [i_0] [i_0] [i_0 + 1]) ? (arr_6 [i_0] [i_0 - 1] [i_0 + 1]) : var_4)));
                    }
                }
            }
            var_18 = (max(var_18, (arr_0 [i_1])));
        }
        var_19 |= (((arr_7 [8]) ? (arr_1 [i_0 - 1]) : (((arr_1 [i_0]) / var_7))));
        arr_10 [0] |= (max(((-(arr_9 [i_0] [18]))), (arr_9 [i_0] [0])));
        arr_11 [i_0] = (var_4 - 2104575255);
    }
    #pragma endscop
}
