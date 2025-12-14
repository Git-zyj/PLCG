/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, ((((min(var_4, 365304009))) ? (((var_5 >> (var_6 - 3045437929)))) : (min(var_6, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 -= (!-19);
                            arr_12 [i_0] [i_0] [i_0] [i_3 + 2] [i_1] = (max(365304009, 5082));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((!((min((min(365304009, 65006)), (var_1 / 20159))))));
                            var_12 = ((1752336122 >> (1752336122 - 1752336094)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_13 += (max(((-var_3 | ((var_3 / (arr_6 [i_4]))))), (((!(var_5 ^ var_5))))));
                            var_14 = (min(var_14, (--2312666060197063368)));
                            var_15 = ((((((61852 - 4294967288) ? 2312666060197063367 : 7))) ? (min(var_8, (min(4294967295, 116)))) : (!9)));
                            var_16 = arr_16 [16] [i_1] [i_5];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
