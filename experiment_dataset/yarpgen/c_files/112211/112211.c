/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_0);

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~((-(arr_1 [i_0 + 2])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((!(((~(arr_4 [i_0] [i_0 - 1]))))));
            arr_7 [i_0] = (+-236);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_14 = ((!(~152)));
            var_15 = ((~(~-26273)));
            arr_10 [i_0] [i_2] = -11922839164834616798;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_0] [i_0] = ((~((~(arr_9 [i_0 - 1])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_21 [4] [4] [4] [i_5 - 1] |= -137;
                        arr_22 [i_0] [i_4] = (!-var_6);
                        arr_23 [i_4] [i_0] [2] [i_5 - 1] [i_4] = ((!((!(arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                    }
                }
            }
            arr_24 [i_0] = ((~(!25)));
        }
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
    {
        var_16 = ((!((!(arr_8 [i_6 + 1] [5] [i_6])))));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_36 [i_8] [i_7] [i_8] [6] [i_9] = (+-770);
                        var_17 *= (~-var_2);
                        arr_37 [i_7] [i_7] [i_8] [i_9] = ((!(!-9107858647546240415)));
                    }
                }
            }
            var_18 = -var_4;
            var_19 -= ((~(((!(arr_25 [i_6 + 1]))))));
            arr_38 [i_6] [i_7] = -8942435220038181928;
        }
    }
    var_20 = (~var_0);
    var_21 = var_2;
    #pragma endscop
}
