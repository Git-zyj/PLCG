/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 = (((!(arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = ((((((arr_1 [i_0 + 1] [i_1 + 1]) || 8114080085687253763))) == (((((~(arr_6 [i_0 - 1] [i_0] [i_0] [i_0]))) != (arr_4 [i_0]))))));
                    var_21 += ((!(~56)));
                    var_22 = (max(var_22, 49));
                    var_23 = (min(1, (arr_1 [i_0 - 1] [i_0 + 1])));
                }
            }
        }
    }
    var_24 = 3840;
    var_25 -= ((var_11 ? ((3563817819 ? 19 : -279414369849135249)) : (~var_5)));
    var_26 += ((var_15 ? 12057028750526801492 : ((min((~-1), 2354)))));
    #pragma endscop
}
