/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (!58467);
    var_14 = (58475 ? 59215 : 6321);

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 -= (~var_4);
        var_16 ^= (min(((-21 ? 21 : 52)), 58));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 ^= var_0;
            arr_5 [i_1] = var_9;
            arr_6 [i_0] [i_1] = (max(-124, 32610));
        }
        var_18 |= var_4;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((114 ? 6327 : -52)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_20 = (min(var_20, (~21439)));
            var_21 = ((arr_8 [i_2] [i_3]) ? (arr_1 [i_3]) : (24471 | 9495991191861976243));
            var_22 = (min(var_22, ((((((13697 ? var_7 : 112))) ? var_3 : ((var_8 ? (arr_1 [10]) : (arr_9 [i_3] [i_2]))))))));
            arr_12 [i_2] [i_2] [16] = ((21374 ? (arr_9 [1] [17]) : ((-14949 ? -928554451 : (arr_9 [i_2] [i_3])))));
        }
        arr_13 [i_2] |= (1805646675 ? 136 : -196942030);
        arr_14 [i_2] = (min((arr_9 [i_2] [i_2]), (~152926934)));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_23 ^= (min(7077, 2405099609));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_24 -= (min((max((max(var_9, 7077)), ((-5686351185663747842 ? 152926934 : -707653383)))), 3280049954));
                        var_25 = (arr_26 [i_6] [i_6]);
                        var_26 = ((17786354210684938795 ? -5113 : -38));
                    }
                }
            }
        }
    }
    #pragma endscop
}
