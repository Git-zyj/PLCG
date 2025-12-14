/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((((1048576 % var_5) ? 2166791973 : (min(-434951145, 2778748515))))) ? (24231 ^ 696210103743993865) : (((((max(127, var_1))) ^ 2128175322)))));
    var_19 = (~var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = ((((-127 + 2147483647) << (13614239214242377434 - 13614239214242377434))));
                var_21 = (arr_4 [5] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_22 = var_0;
                            arr_10 [i_0] [1] [i_2] [i_2] [8] [i_3] = var_14;
                        }
                    }
                }
                arr_11 [i_0] = var_12;
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] [3] = var_9;
        var_23 = (max(var_23, (arr_13 [15])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_5] [i_5] [i_5] [16] = 6235262148265558797;
                    arr_21 [i_4] [9] [i_5] = (!var_16);
                }
            }
        }
        var_24 = (max(var_24, ((-((696210103743993865 << (((arr_19 [i_4] [6] [i_4]) - 5011))))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_25 |= (((max(-131764166049752619, -1281777643))) || (((max(var_10, 7083562640962568007)))));
        var_26 = (max(var_26, ((min(((~(max((arr_15 [6]), 12211481925443992825)))), (~1))))));
        var_27 *= (13489 == 2166791973);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_28 &= (arr_12 [i_8]);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 14;i_11 += 1)
                {
                    {
                        var_29 = (min(var_11, (arr_13 [i_10 - 1])));
                        var_30 |= (max((min((arr_18 [i_10 + 1] [i_9] [i_10] [i_11]), (arr_34 [i_10 - 1] [i_11] [i_10] [i_11]))), (arr_31 [i_10 - 1] [i_9] [i_10])));
                        arr_36 [9] [i_9] [i_9] [i_8] [1] = ((4280120292 % (arr_28 [i_8])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
