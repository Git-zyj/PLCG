/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = ((~(arr_7 [10] [i_1] [i_1] [i_2])));

                            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_0] [1] [i_0] [i_2] [i_2] [i_3] [i_4] = (arr_9 [i_0] [i_0] [i_0] [i_0] [2]);
                                var_16 = (arr_3 [i_0]);
                                arr_15 [i_2] [i_1] [i_2] [i_4] = 49421;
                                var_17 = 517179263484088941;
                                var_18 = ((-(((arr_0 [i_4]) | (arr_0 [i_0])))));
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((((max(((max((arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2]), 2921))), ((8329 ? -517179263484088941 : 6229869509641887337))))) ? ((((min(185, var_7))) ? (arr_5 [i_0] [i_2] [i_3]) : (arr_13 [i_0] [i_1] [i_2] [i_2] [i_5]))) : (max(245, 517179263484088941))));
                                var_19 = (min((1874130292 / 9173468699339567851), (!65238)));
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_20 = (((((var_13 / (arr_5 [i_1] [i_2] [i_6])))) ? (max(26959, -var_4)) : ((-((var_9 ? var_1 : var_6))))));
                                arr_21 [i_0] [i_1] [i_2] [i_2] [i_3] [i_6] = ((-((18446744073709551615 ? 517179263484088941 : -5172836079844016744))));
                            }
                            var_21 = (((max(((var_10 & (arr_20 [i_2] [i_2] [i_2]))), ((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]) % (arr_3 [i_2])))))) / ((((var_6 > var_10) + (((4441102454484933738 <= (arr_2 [i_0])))))))));
                        }
                    }
                }
                arr_22 [i_0] [i_0] [i_1] = (min(1874130292, 7120377646244361373));
                arr_23 [i_0] = ((-5172836079844016744 ? -517179263484088937 : 2097151));
            }
        }
    }
    var_22 = (((min(3097077437286288276, (((var_11 ? var_5 : var_7))))) * (var_0 < var_9)));
    #pragma endscop
}
