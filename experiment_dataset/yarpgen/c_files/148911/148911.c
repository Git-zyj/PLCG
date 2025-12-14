/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!((min(-var_2, var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_11 = ((!(!var_4)));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_12 = var_4;
                        var_13 = (max(var_13, var_3));
                    }
                }
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    var_14 -= (min(51698, var_3));
                    var_15 += (~var_1);
                    arr_15 [i_0] [i_0] = var_8;
                    var_16 = -75;
                    arr_16 [i_0] [i_1 + 2] = 4449006022513361417;
                }
                var_17 |= ((!((min((min((arr_12 [i_0]), 224)), ((var_6 ? var_2 : 88)))))));
            }
        }
    }
    #pragma endscop
}
