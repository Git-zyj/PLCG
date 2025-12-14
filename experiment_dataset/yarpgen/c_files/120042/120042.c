/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [6] [i_1] [i_0] = 65535;
                    arr_9 [i_0] [i_2] [i_2] = 5487633778666913345;
                }
            }
        }
    }
    var_19 = ((16826563689871892469 ? 0 : 3404315728));

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (((((-(arr_5 [i_3] [i_3] [i_3])))) ? (min((arr_5 [i_3] [i_3] [20]), (arr_10 [i_3] [i_3]))) : (arr_10 [i_3] [i_3])));
        arr_13 [i_3] = ((((min(((16826563689871892450 ? var_9 : 0)), ((32767 ? 4294967289 : 890651581))))) ? (max((!65535), (arr_6 [i_3] [i_3] [i_3]))) : (!2900501558178542275)));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 22;i_6 += 1)
                {
                    {
                        var_20 = 4294967295;
                        var_21 = (min(-2109111885, 240));
                        var_22 |= (!32764);
                        arr_21 [i_3] [i_4 - 2] [i_4] [i_4] = ((min((arr_20 [i_4 - 2] [i_6 + 2] [i_4 - 2] [i_4]), (arr_20 [i_4 + 1] [i_6 - 4] [i_6] [i_4]))));
                        var_23 = -98;
                    }
                }
            }
        }
        var_24 = 15546242515531009340;
        arr_22 [23] = ((!(arr_1 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    var_25 = -28;
                    arr_30 [i_7] = (arr_23 [i_7]);
                    var_26 = 255;
                }
            }
        }
        var_27 = (arr_5 [i_7] [i_7] [1]);
        var_28 = (~254);
        var_29 = 0;
    }
    #pragma endscop
}
