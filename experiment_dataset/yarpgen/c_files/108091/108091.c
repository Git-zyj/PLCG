/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 *= (((1 >> (((arr_2 [i_0]) + 6670149377156272262)))));
        var_15 = (!-28323);
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (min((max((min(121, 2703621782)), 52574)), ((min(-5, 31539)))));
        var_17 *= (max((min(8191, ((-(arr_3 [13]))))), (((arr_3 [i_1]) * (arr_3 [i_1])))));

        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_8 [i_1] [6] = ((((max((arr_5 [2] [1]), (max(1, -7853722283661114555))))) || (!1261147465)));

            /* vectorizable */
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_18 = (min(var_18, ((((arr_7 [i_2 - 1]) * (arr_11 [i_1] [i_2 - 1] [i_2 - 1]))))));
                arr_12 [i_1] [i_1] [i_2] [i_3] = (arr_6 [i_2 + 2]);
            }
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_19 *= 52574;
            var_20 -= 125;
        }
    }
    var_21 = (min(var_3, (((6116216579527671411 < (~var_8))))));
    #pragma endscop
}
