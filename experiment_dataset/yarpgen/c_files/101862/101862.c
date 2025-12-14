/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = ((-2379 ? (max(584684107697074116, -30)) : ((((((var_1 ? 22 : 17862059966012477510))) ? (arr_3 [i_0 - 2] [i_0] [i_0]) : var_5)))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_11 = (((max((arr_0 [i_0 + 1]), 290298545817303780)) | ((max(-7736186957401625500, -1)))));
                        var_12 = (max(710744693324974112, (arr_7 [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_13 = ((max(0, -88)));
                        arr_15 [i_0] [i_0] [i_0] [i_0] &= (min(((min(var_3, (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (max(2627921087132831517, var_0))));
                        var_14 = ((((65535 ? (!248) : ((var_1 ? 710744693324974112 : (arr_12 [i_0] [i_0] [i_0] [i_0]))))) != 152));
                        var_15 = (2750223 | 10);
                    }
                    arr_16 [i_0] [i_0] = -9223372036854775806;
                    var_16 = -9223372036854775806;
                    arr_17 [i_0] [i_0] [i_0] = (((!-6097233046367951515) && var_7));
                }
            }
        }
    }
    var_17 = 1;
    var_18 = ((min(9, var_6)));
    #pragma endscop
}
