/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [8] [i_0] = (arr_6 [i_2] [21] [21]);

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_11 = (min(var_11, ((((((((29 & (arr_1 [i_0] [i_0])))) ? var_2 : var_2))) ? (!1) : (((arr_5 [i_1] [i_2] [i_3]) ? (arr_9 [i_3 - 3] [i_3 - 1] [i_3 + 2] [i_3 - 2]) : (((arr_6 [i_0] [i_0] [i_0]) * (arr_9 [i_0] [i_1] [i_1] [i_3])))))))));
                        arr_10 [i_0] [i_1] [i_0] [i_2] [i_3 - 4] = ((((arr_4 [i_0]) ? (~1577544683) : 1)));
                        var_12 = (((arr_1 [i_1] [i_1]) ? 242 : (((0 + var_8) ? var_2 : ((max(1, (arr_4 [i_0]))))))));
                    }
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_4] = ((!(((~(arr_5 [i_0] [i_0] [i_4]))))));
                        arr_15 [i_4] [i_1] = ((~(((-2032610520 + 2147483647) >> 1))));
                        var_13 *= ((((max(-1, var_6))) ? (((1 ? var_6 : var_7))) : (((var_0 + (var_6 - 1))))));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] = (((min((arr_5 [i_4 - 4] [i_4 - 2] [i_4 - 4]), ((var_7 ? (arr_1 [i_1] [i_4]) : var_0)))) << (((arr_3 [i_0] [i_0] [i_4]) + 726222730))));
                    }
                    var_14 ^= var_7;
                    var_15 = var_9;
                }
            }
        }
    }
    var_16 = (~2483661667821809626);
    #pragma endscop
}
