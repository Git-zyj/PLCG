/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= -3502430137101980938;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_12 = ((~(arr_1 [i_0])));
        var_13 = (min(var_13, ((min(((min(((max(1, 64))), var_5))), (max((min(var_10, var_8)), (((1535 >> (var_7 + 5257)))))))))));
        var_14 *= var_2;
        var_15 -= (min((arr_0 [20]), (arr_1 [18])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (-32767 - 1);
        var_16 ^= ((var_9 ? (((!((max(var_4, (arr_0 [2]))))))) : (((!(arr_1 [16]))))));
        var_17 = (min(((var_10 ? var_2 : (arr_3 [i_1 - 3] [i_1]))), (arr_3 [i_1 - 2] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_11 [0] |= var_2;
                    var_18 = (-106 != 1);
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
