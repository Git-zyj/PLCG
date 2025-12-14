/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_13 = ((!(arr_1 [i_0] [i_0 - 1])));
        var_14 = (arr_1 [i_0 + 4] [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, 4086106296));
                    arr_7 [i_0] [i_0] [i_2] = 268369920;
                    var_16 = 65535;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] [i_3] = 65529;
        arr_11 [i_3 - 1] [i_3] = (((var_0 < var_11) || (~268369901)));
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (((((-(arr_1 [i_4 + 1] [i_4 + 1])))) ? (((min((arr_12 [i_4 - 1]), (arr_12 [i_4 + 1]))))) : (((arr_1 [i_4 + 1] [2]) * 72057592964186112))));
        var_17 = (min((arr_8 [i_4]), ((((min(54053, var_6)) <= ((((arr_1 [i_4 + 1] [i_4]) + 4026597359))))))));
    }
    #pragma endscop
}
