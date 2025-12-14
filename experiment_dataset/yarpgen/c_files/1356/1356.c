/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_11 = 5280457055790850964;
                            arr_10 [i_0] = ((((min((arr_3 [i_1] [i_1] [i_0]), (arr_5 [i_0])))) != ((-118 ? (max(976645725033781030, -1173240643)) : 16237742039307919311))));
                            arr_11 [i_0] [i_0] [i_0] = ((1173240650 ? 0 : (arr_2 [i_1] [i_1] [i_1 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_12 |= (((((((arr_4 [i_0] [10] [i_5]) ? var_6 : (arr_6 [0] [0] [i_0] [i_0] [0])))) ? (((min(220, var_0)))) : var_1)));
                            arr_17 [i_5] [i_0] [i_1 - 1] [i_4] [i_0] [i_0] = 1173240656;
                            arr_18 [i_0] = (arr_4 [i_4] [i_4] [i_4]);
                        }
                    }
                }
                var_13 = ((-10 < (((!((max(1, 216))))))));
            }
        }
    }
    var_14 = ((((!((max(1173240644, var_5))))) && var_2));
    #pragma endscop
}
