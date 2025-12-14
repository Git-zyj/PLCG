/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = ((((3 % (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] &= ((((max((arr_1 [i_1 - 3]), (arr_1 [i_1 - 1])))) ? ((min(((-(arr_10 [i_0] [i_1 - 2] [1] [i_3]))), 0))) : (((!44061) ? (((min(180, 51)))) : (arr_4 [i_1 - 2] [i_1])))));
                            var_13 = min(881572887, -358035479);
                            var_14 = (max((((arr_3 [i_0]) & ((236 ? 125738241 : 9025702953339175536)))), (((!(arr_3 [8]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [1] = ((min(-4, 27353)));
                    var_15 = (min((arr_19 [i_6 - 1] [i_4 - 1] [i_4]), (!0)));
                }
            }
        }
    }
    #pragma endscop
}
