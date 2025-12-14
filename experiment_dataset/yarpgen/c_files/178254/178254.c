/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((~(arr_8 [i_0] [i_1] [12] [i_3] [i_2]))))));
                                var_13 -= min(-var_3, (((arr_4 [i_2] [i_3]) ? 255 : -var_4)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_14 = (min(var_5, 18));
                                var_15 = (((((40 ? -32763 : -2283649331744866515))) ? (!65527) : ((((min(var_3, 1))) ? ((min(65535, var_6))) : (min(274877874176, 5))))));
                            }
                        }
                    }
                }
                var_16 = 1;
                arr_19 [i_0] [i_0] [3] = (~11369754496711215012);
                arr_20 [i_0] [i_0] = 18446744073709551615;
            }
        }
    }
    var_17 = ((!(((-var_11 ? 15 : 1)))));
    var_18 = 2251799813668864;
    var_19 = (max(var_0, var_2));
    #pragma endscop
}
