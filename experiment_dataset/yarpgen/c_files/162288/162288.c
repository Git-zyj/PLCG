/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 -= 1322616458;
        arr_2 [i_0] = min(((((41388 / 1) | ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))), (((((167 / (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : -2669774745)));
        arr_3 [i_0] [i_0] = ((!((((min((arr_0 [i_0] [1]), (arr_1 [i_0]))) | (min(var_14, (arr_1 [i_0]))))))));
        var_20 = (((((min(-1613746103268197223, 24762)) > (((arr_0 [i_0] [i_0]) ? 300681194 : var_11)))) ? ((((54955149 >= var_5) != (arr_1 [i_0])))) : -27853));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_0 [i_0] [i_1]);

            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                arr_10 [1] [1] [i_2] = 1625192551;
                arr_11 [i_0] [i_1] [i_2] [i_1] = ((arr_8 [12] [i_1] [i_2 - 1]) ? (arr_8 [i_0] [i_1] [i_2 + 1]) : 37);
                arr_12 [i_0] = (arr_5 [i_2] [i_0]);
                var_21 = (((arr_8 [i_2 + 2] [i_2 - 1] [i_1]) * (arr_8 [i_2] [i_2 + 2] [i_2])));
                var_22 -= (((3137 ? -1385404695 : var_9)));
            }
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 = (max(((((min((arr_8 [i_0] [i_3] [i_3]), var_16))) ? (min(var_1, (arr_7 [i_3] [i_3] [i_0]))) : 94)), ((3147 ? (8774305360172804121 / 18446744073709551615) : (((var_6 ? -3371913863565797895 : (arr_9 [i_3] [5] [i_0]))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_3] [i_4] [i_5] [i_0] = ((!(arr_0 [i_3] [i_5])));
                        var_24 -= (min((arr_1 [i_4]), (!-1322616459)));
                        arr_20 [6] [i_0] [i_0] [15] [i_0] = var_4;
                        var_25 += ((((((arr_0 [i_5] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_3] [i_4])))) ? (arr_0 [i_4] [i_4]) : (arr_0 [i_3] [i_3])));
                    }
                }
            }
            var_26 = (~3137);
            arr_21 [3] = (max(4959981238694542433, -var_9));
        }
    }
    var_27 = 8;
    #pragma endscop
}
