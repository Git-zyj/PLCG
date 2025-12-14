/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = var_9;
        var_11 *= (var_3 ? (((((((arr_1 [i_0]) ? (arr_1 [10]) : -10))) ? (!var_4) : (arr_2 [i_0] [0])))) : var_5);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            arr_16 [3] [i_2] [6] = 14314089853469825201;
                            var_12 = ((-(((arr_8 [i_0] [i_1] [i_2]) ? (arr_8 [i_1] [i_1] [i_2 + 1]) : var_9))));
                        }
                        arr_17 [i_2] = ((!(((1 + (arr_7 [i_2 + 2]))))));
                        var_13 = (max(var_13, 5216150724048874424));
                        var_14 -= 234881024;
                    }
                }
            }
        }
    }
    var_15 = (((((var_5 ? ((var_9 ? var_1 : var_6)) : (var_2 && var_0)))) && (var_3 >= var_1)));
    #pragma endscop
}
