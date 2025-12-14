/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = max(-8658048914257866828, (min((arr_1 [i_0 + 1]), (arr_3 [i_0 - 3]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 |= (max((min(1768083902616130016, var_4)), 760471213993780647));
                            var_17 = ((!(((((1874912481 ? 1874912491 : 1874912488)) >> (((max(var_12, 2420054819)) - 2420054808)))))));
                            var_18 -= var_5;
                            arr_10 [i_0] = (((min(((1874912507 ? 1874912488 : (arr_0 [i_0]))), 2420054789))) ? ((((!(arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 4]))))) : 1874912508);
                        }
                    }
                }
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
