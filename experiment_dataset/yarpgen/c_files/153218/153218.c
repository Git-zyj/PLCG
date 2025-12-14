/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (!(((arr_0 [i_0 - 1]) != -26119)));
        arr_2 [i_0] = (~(arr_1 [i_0]));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                {
                    var_14 = arr_5 [i_1 - 1] [i_2];
                    var_15 ^= (max(((max(var_4, (arr_6 [i_1] [i_1])))), (min((max(11811388222109628623, (arr_5 [i_1 - 1] [i_1 - 1]))), var_0))));
                }
            }
        }
        var_16 = (max(8465980060308381653, 1));
        arr_10 [i_1] = ((-(max(26119, (arr_1 [i_1])))));
        var_17 = (--26117);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [i_4] = var_0;
            var_18 = (arr_4 [i_4]);
        }
    }
    var_19 |= ((((min(var_12, var_1))) | (min(var_11, var_8))));
    #pragma endscop
}
