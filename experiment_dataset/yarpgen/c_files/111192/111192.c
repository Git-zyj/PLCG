/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!var_2) + var_1)) != var_5));
    var_11 = (var_1 >= var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 |= (!((25054 && (arr_3 [i_0]))));
        var_13 = (~var_2);
        var_14 = (((arr_0 [i_0] [i_0 + 3]) << (((arr_0 [i_0] [i_0 - 1]) - 3010800464442998395))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        var_15 += (min(0, -1328628377800941317));
                        var_16 = (max((((arr_13 [i_1]) ? ((-1328628377800941319 ? 1328628377800941316 : 4294967295)) : ((var_6 ? 1328628377800941324 : (arr_6 [i_1]))))), (arr_4 [11] [i_1])));
                    }
                }
            }
        }
        var_17 = (((!4294967295) ? (((-5881469175469535977 ? (arr_3 [i_1]) : (~var_4)))) : (((((~(arr_9 [i_1] [i_1] [i_1])))) ? (var_5 | 1) : 1328628377800941316))));
        var_18 = 40499;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_19 = (((((~(arr_18 [i_5])))) ? ((~(arr_17 [i_5]))) : var_0));
        var_20 ^= ((1 ? var_0 : (((~(arr_18 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_21 = var_2;
        var_22 += -32757;
    }
    #pragma endscop
}
