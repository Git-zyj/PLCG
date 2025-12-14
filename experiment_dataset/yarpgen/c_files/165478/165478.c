/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 *= 1809545701;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [1] [1] [i_1] = -1809545701;
                    var_17 -= ((((-(arr_1 [i_0] [i_1 - 1]))) + (max((max((arr_6 [i_0] [i_1] [i_2]), -1031293902)), (arr_4 [i_2] [i_1 - 1])))));
                }
            }
        }
        var_18 = ((1809545709 ? (((!(((arr_4 [i_0] [i_0]) || 1245763471))))) : (((3059860250 != (max(3046178769, 1073741823)))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_19 *= (arr_12 [i_0] [i_0]);

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_20 = (((!((max((arr_10 [i_0] [i_0] [1]), 0))))));
                        arr_15 [i_0] [i_3 + 2] [i_3] [i_4] [i_4 + 1] [i_0] = min((((31 ? var_3 : (arr_9 [1])))), ((-(arr_2 [i_4]))));
                    }
                    var_21 *= ((2409707534 | ((max(0, 2115198711)))));
                }
            }
        }
        var_22 *= ((max(var_14, 1809545702)));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_23 = (((~1031293915) ? 243 : ((-97 ? 101 : 48919))));
        arr_18 [i_6] [i_6] = (max(-1809545691, (((arr_17 [i_6]) ? (arr_17 [i_6]) : (arr_16 [i_6] [i_6])))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_24 = (((arr_20 [i_7] [i_7]) || ((min((arr_21 [i_7]), (arr_21 [i_7]))))));
        arr_22 [i_7] [i_7] = ((var_12 - (((((arr_17 [i_7]) && 3)) ? 9057 : var_15))));
    }
    var_25 = (max((~4294967293), 6565));
    #pragma endscop
}
