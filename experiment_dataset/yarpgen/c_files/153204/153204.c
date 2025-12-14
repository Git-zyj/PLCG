/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_10 = (~var_5);
                    var_11 |= (arr_3 [i_0 - 3] [i_0 + 1]);
                }
            }
        }
        var_12 = (min(var_12, (((+(min((~32737), ((var_9 * (arr_8 [i_0] [i_0] [i_0] [i_0 - 2]))))))))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        var_13 = (min(var_0, 2));
                        var_14 = ((((((-32738 ? 2199023255551 : (arr_5 [i_3 - 2] [i_4] [i_5]))))) ? 2199023255551 : var_8));
                        arr_21 [i_3 - 1] [i_4] [i_3 - 1] [i_3 - 1] = 425180006;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_15 = 3869787305;
                        var_16 = ((~(((var_5 && (arr_7 [i_7] [i_3 - 1] [i_8 - 1]))))));
                        var_17 += (((min(107209821, -6)) & (arr_5 [i_8 - 1] [i_8 - 1] [i_9])));
                        var_18 ^= 20;
                        var_19 = (max(var_19, (((((arr_6 [i_9] [i_7 + 3] [i_8] [i_9]) ? (arr_3 [i_7 + 2] [i_8]) : var_3))))));
                    }
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
