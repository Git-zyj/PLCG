/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = (max(var_12, var_8));
        var_13 ^= (max((arr_1 [i_0 - 1]), (arr_2 [i_0 + 4])));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            {
                var_14 ^= (((arr_7 [i_2]) ? var_9 : (arr_5 [i_1 + 1] [i_2])));
                arr_8 [i_2] [i_2 + 2] = (min((min((arr_4 [i_1]), (arr_6 [i_1] [i_1] [i_2]))), (((((arr_4 [i_2]) ? 65535 : (arr_3 [i_1]))) * (arr_5 [18] [19])))));
            }
        }
    }
    var_15 ^= (max(var_0, var_2));
    var_16 = ((-((max(var_8, ((max(var_5, var_2))))))));
    #pragma endscop
}
