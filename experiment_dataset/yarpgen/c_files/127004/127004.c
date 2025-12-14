/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 7820243730773641602;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = (((~(((var_4 != (arr_5 [i_0] [i_1])))))));
                    arr_9 [i_2] [i_2] [i_1] [i_2] = (((((-(arr_0 [i_1] [i_2 + 1])))) ? (((~(arr_0 [i_0] [i_1])))) : (arr_0 [i_0] [i_0])));
                    arr_10 [i_0] [i_0] [i_2] = (max(3313081389180270473, (min(1920505982, -3313081389180270473))));
                }
            }
        }
        arr_11 [i_0] = (min(((var_1 - (!var_10))), var_3));
        var_13 = (max(var_13, (((~(arr_4 [i_0] [i_0] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_14 = ((min(-3313081389180270466, 3313081389180270477)));
        arr_15 [i_3] [i_3] = ((max(var_3, -3313081389180270474)));
        var_15 = (max(492011718630953339, var_7));
    }
    #pragma endscop
}
