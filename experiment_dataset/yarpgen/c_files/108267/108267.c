/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (arr_4 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_11 = (max(((((arr_6 [i_0]) ? (arr_6 [i_0]) : (((arr_6 [i_0]) | var_1))))), (min(((min(var_3, (arr_3 [i_1] [i_1] [i_2])))), (arr_1 [i_2])))));
                            arr_10 [i_0] [i_1 + 2] [i_3] [i_3] |= (max((arr_6 [i_0]), 14906));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_12 -= (((max(var_3, 18256))) ? (arr_8 [i_0] [i_0 + 2] [i_0 + 1]) : (min((arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5]), (arr_7 [i_4] [2] [i_4] [i_4]))));
                            arr_16 [i_1] = (min((min(14906, var_8)), 1529222092));
                            var_13 = (min(((((min(14906, 7936))) ? (max(35184372084736, 2690200987)) : var_6)), 1182401906));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((var_0 - ((-22 ? 941120253 : 255))));
    var_15 = (((var_6 ? var_5 : (min(var_0, var_7)))) << (!2147483647));
    #pragma endscop
}
