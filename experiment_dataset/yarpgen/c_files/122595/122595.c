/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(34338, var_0));
    var_13 = ((!(((min(31, -9156670825513362735)) == 3032844474))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = 86;
        var_15 += 1;
        var_16 = (max((arr_1 [i_0]), 3549803517769046417));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = (!var_4);
                        var_18 &= 133;
                        var_19 = (arr_6 [i_2 + 1] [i_2 + 3]);

                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            var_20 = (31198 ? (max(1, 1125899906842623)) : (arr_5 [i_0] [i_4 - 1]));
                            arr_13 [i_0] [i_3] [i_4] [i_1] [i_1] = (((arr_9 [i_0] [i_0] [i_2] [i_3]) >= (((+((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]) > 0))))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 *= (arr_6 [i_0] [i_0]);
                            arr_16 [i_3] = (~1);
                        }
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            arr_20 [i_0] [i_3] [i_2] = (((arr_0 [i_1]) || 1));
                            var_22 -= 2347764283;
                            var_23 = (((((var_3 & var_6) + 1)) % ((~(-106 || 100)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_23 [i_7] &= 1;
        var_24 = (min(((9223372036854775807 >> (32767 - 32728))), (-2147483647 - 1)));
    }
    #pragma endscop
}
