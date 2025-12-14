/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = ((((0 ? (arr_1 [i_1 - 1] [i_1 - 2]) : (arr_1 [i_1 - 2] [i_1])))) || (((((var_7 || (arr_3 [i_0] [i_1] [i_1]))) ? ((~(arr_2 [i_0] [i_0] [i_1]))) : (arr_2 [i_0] [i_1 + 2] [i_1 - 1])))));
                var_15 -= (((arr_0 [i_0] [i_0]) >> (((~-33) - 24))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_16 |= (arr_1 [i_0] [i_2]);
                    var_17 -= (((((-(max(532676608, 0))))) ? ((+(max((arr_4 [i_0]), 67108863)))) : 1));
                    var_18 = ((!(!1)));
                }
            }
        }
    }
    var_19 = (min(var_7, (((min(1, 1)) ? var_2 : ((var_2 ? -93 : var_0))))));

    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_3 + 2] [i_4] = (10908 && ((((max((arr_11 [i_3 + 2]), (arr_10 [i_3 + 2])))) && ((((arr_13 [i_3] [i_4] [5]) >> 1))))));
            var_20 = (min(var_20, (((((((((8190 ? -16 : 16721748173319545292))) ? (((min(1, 1)))) : (min(-5107407848660174793, 721045485913286666))))) ? (~15) : (-8883714996347487711 <= var_5))))));
            var_21 = 1;
            var_22 = ((((min(((((arr_11 [i_3]) <= (arr_12 [7])))), (min(var_11, (arr_6 [i_3 + 3] [i_4] [i_4] [i_4])))))) ? (arr_7 [i_3]) : 1));
            arr_16 [i_4] [i_4] = ((((arr_13 [i_3 + 1] [i_4] [i_4 - 2]) / (16721748173319545292 || 26326))));
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_23 = (min((max(var_2, ((((arr_7 [i_3]) <= -6340209505267888890))))), var_0));
            var_24 += ((((arr_11 [i_3]) - var_8)) >> (((((arr_14 [i_3 - 2] [i_3]) * 4095)) - 788185890)));
        }
        var_25 = (max((arr_12 [i_3]), (((!(arr_3 [i_3] [i_3 - 1] [i_3 - 2]))))));
        arr_19 [i_3] [i_3] = (~24414);
    }
    #pragma endscop
}
