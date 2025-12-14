/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((-588546401 ? 40154 : (-127 - 1))) % (((~var_8) ? var_0 : -var_6))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_12 = (max(var_12, (((-21070 ? 4294967295 : -100)))));
        var_13 = ((!(4 || var_5)));
        var_14 = 925893045;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_2] = (9 ? 1046862669 : -281188410);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_15 = (min(((1975943796 ? var_6 : ((0 ? -281188422 : (arr_5 [i_2]))))), (arr_5 [i_1])));
                                arr_16 [i_1] [6] [i_3] [i_5] [i_5 + 3] |= var_2;
                                arr_17 [3] [i_4] [i_2] [i_4] = (((arr_5 [i_5 + 2]) ? (((arr_5 [i_5 + 1]) ^ -281188429)) : (((arr_5 [i_5 - 1]) ? (arr_5 [i_5 + 2]) : (arr_5 [i_5 + 3])))));
                            }
                        }
                    }
                    var_16 -= (min(2881199234, ((var_10 ? (arr_15 [i_2 + 1] [i_1] [i_3]) : var_3))));
                    var_17 = var_9;
                }
            }
        }
        var_18 = arr_13 [i_1] [i_1] [i_1] [i_1];
    }
    var_19 = -7;
    #pragma endscop
}
