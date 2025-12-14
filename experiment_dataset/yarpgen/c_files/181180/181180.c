/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_0] &= (((var_1 ? var_15 : 0)));
                    var_18 = (max(var_18, ((((((-649594797 ? (arr_3 [i_1] [i_1]) : 0)) + (arr_2 [i_2]))) - var_2))));
                    var_19 = (max(var_19, (var_3 > 1017891970)));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_20 += (((var_6 || 4294967273) ? ((((-29120 || (arr_6 [i_0] [i_1] [i_3] [i_4]))))) : var_11));
                        var_21 = ((~(arr_5 [i_4] [i_4] [i_4 + 2] [i_4])));
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_22 |= var_14;
                        var_23 = (min(var_23, var_7));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        arr_19 [i_0] [i_3] [i_1] [i_3] [i_6] |= ((min(var_6, var_5)));
                        var_24 = var_9;
                        var_25 -= (1017891970 + (((arr_1 [i_6 - 1]) % (arr_1 [i_6 - 1]))));
                        var_26 = 1199279952;
                    }
                    arr_20 [i_1] [i_0] [i_0] = (((!((var_17 || (arr_0 [i_0]))))));
                }
                var_27 = min(var_7, (1017891974 && var_12));
                var_28 &= (max(-1017891983, -1965015323));
                var_29 ^= var_17;
            }
        }
    }
    var_30 = (max(var_30, (((((var_13 ? var_5 : var_2)))))));
    #pragma endscop
}
