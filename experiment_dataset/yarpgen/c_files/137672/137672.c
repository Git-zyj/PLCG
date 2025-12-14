/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = var_11;
        arr_2 [5] [i_0] = 1;
        arr_3 [i_0] [i_0] = 119;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = 12897;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_16 = (arr_6 [i_0] [i_3]);
                        arr_14 [11] = ((var_0 ? 255 : (!54220)));
                        arr_15 [11] [12] [1] = 9223372036854775807;
                    }
                }
            }
            var_17 = ((-((99 - (arr_5 [i_0])))));
        }
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = ((min(3, var_11)));
        arr_21 [i_4 - 1] [i_4] = (((!255) <= (((!(arr_11 [i_4 - 1]))))));
    }
    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_18 = var_11;
            arr_26 [i_6] [i_5] [i_6] = (((((3471753896591889431 ? (arr_24 [i_5 - 1] [i_5] [i_6]) : (((arr_24 [i_6] [i_5] [i_6]) << 0))))) ? var_8 : ((min((arr_6 [i_5] [i_5]), (arr_13 [i_5] [i_5] [10] [4]))))));
            arr_27 [i_6] = ((99 ? (var_2 + 8823070397364488967) : (((!(arr_8 [i_5 + 1]))))));
        }
        arr_28 [i_5] [i_5] = 10639;
    }
    var_19 = var_0;
    #pragma endscop
}
