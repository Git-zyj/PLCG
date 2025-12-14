/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((var_6 << (((max(41575, -5263720948550817850)) - 41572)))) + var_6)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = 24752;
        var_13 = (max(var_10, 1019336713));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_14 = 63488;
        var_15 = (max(var_15, var_4));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_16 = (3690138235 * 1092142044);
        var_17 = 64;
        var_18 ^= var_5;
        var_19 *= (arr_5 [i_2]);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    {
                        var_20 = ((1932 ? 255 : (max(3853678186, (-2147483647 - 1)))));
                        var_21 = 3202825251;
                    }
                }
            }
        }
        var_22 = 65067;
    }
    #pragma endscop
}
