/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169971
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
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = ((((arr_1 [i_0] [i_1]) ? (arr_4 [i_2] [i_1] [i_0]) : var_7)));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = ((((((min(var_2, var_3))) ? (~var_9) : (min(1824817564, -1967116117)))) >= ((~(arr_1 [i_0] [i_1])))));
                        var_15 = (max(var_15, (arr_2 [i_0])));
                    }
                    for (int i_4 = 4; i_4 < 23;i_4 += 1)
                    {
                        arr_14 [i_0] [17] [17] [i_0] = (~-1967116109);

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] = ((~(!var_10)));
                            var_16 = (min(var_16, ((((min(7000, var_5)))))));
                            var_17 = ((((arr_0 [i_4 - 4] [i_4 + 1]) | (arr_13 [i_2] [i_2] [i_2] [i_2]))));
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] = ((((((~(arr_8 [i_0] [i_2] [i_4] [i_5])))) ? (arr_10 [i_0]) : ((max(var_6, 58520))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_1 / ((((min(var_7, var_0))) ? ((var_5 ? 58526 : var_1)) : (var_6 != var_3)))));
    #pragma endscop
}
