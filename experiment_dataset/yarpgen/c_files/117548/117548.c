/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 *= (arr_9 [6]);
                                var_19 = (((((((4145665268 | (arr_12 [i_0] [1] [i_0] [i_3] [i_4])))) ? ((-99 ? 21828 : (arr_4 [i_0 - 1] [i_0] [i_0]))) : (-26277529 <= -21829))) - (((-(335581172 || 1))))));
                                var_20 = -21847;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (arr_4 [i_1] [18] [18]);
                arr_15 [i_0] [i_0] = 9007199254740991;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] = var_5;
                            var_21 = ((((arr_12 [i_0 + 1] [i_0] [i_0] [i_0] [1]) ? (arr_12 [i_0 + 2] [18] [i_0] [i_0] [i_0 + 2]) : (arr_12 [i_0 + 2] [18] [i_0] [6] [4]))));
                            var_22 = (((max(var_13, 8313333045455121768))));
                            arr_23 [9] [3] [i_5] [i_0] [i_6 + 2] = ((+((((((arr_16 [i_6] [i_5] [i_1] [i_0]) <= (arr_8 [i_0] [i_0] [i_6])))) / ((min((arr_18 [12]), 21845)))))));
                            arr_24 [0] &= (min(255, (min(1717, (arr_9 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, 440821719));
    #pragma endscop
}
