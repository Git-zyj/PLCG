/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 = (~var_13);
                        arr_13 [i_2] [i_1] [i_2] [i_3] |= ((768 ? 77 : (arr_9 [i_0] [i_0] [i_0] [i_0])));
                        arr_14 [i_0] [i_3] [i_2] [19] = (min((max((arr_3 [i_0]), -22778)), ((((((-29759 ? -4303876220106732014 : 32767))) ? 11398 : 1287067314)))));
                    }

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        arr_17 [i_4 + 2] [i_4 + 2] [i_4] [i_4] = (min((((arr_10 [i_4 + 2] [i_4] [i_4] [i_4]) ? 22778 : (arr_10 [i_4 - 1] [i_4 + 2] [i_4] [i_1]))), (((!(arr_10 [i_4 + 1] [i_4] [i_4 + 2] [i_0]))))));
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] |= (~var_10);
                        arr_19 [i_2] [19] [i_4] [i_0] [i_1] [i_1] = (((((arr_7 [i_0] [i_4 + 1] [i_2] [i_4 + 2]) ? var_1 : var_8)) >> (((max((arr_7 [i_0] [i_4 + 2] [i_2] [i_4 + 1]), (arr_7 [i_0] [i_4 + 1] [17] [17]))) + 1076467510377209256))));
                    }
                }
            }
        }
    }
    var_17 = var_6;
    var_18 = ((117 ? (!var_12) : (!var_13)));
    #pragma endscop
}
