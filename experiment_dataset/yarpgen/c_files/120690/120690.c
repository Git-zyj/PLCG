/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!7696669350431824669);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = (12033682218492125725 + 12033682218492125725);
                    arr_6 [i_2] [1] [i_0] |= (max(1, 10750074723277726946));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (0 & 0);
                        var_13 *= (~1);
                        arr_10 [i_0] [i_1 - 4] [i_1 - 4] [i_0] [i_2] [i_3] = ((1 ? 1 : 1));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] = ((15584571628746962684 ? 1 : 9111494614335782413));
                        var_14 = (min(var_14, (1 >> 1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
