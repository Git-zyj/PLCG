/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (~72);
        arr_3 [i_0] = ((-(arr_2 [i_0] [i_0])));
        var_20 = (min(14, ((-(arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] = (((((((min((arr_5 [i_1] [i_1] [i_0]), var_16))) ? (20 ^ var_16) : -4))) ? (arr_4 [i_0] [i_0] [i_1]) : (((arr_4 [i_0] [i_0] [i_0]) ? 0 : (arr_4 [18] [18] [21])))));
            var_21 ^= (((((~(arr_2 [i_0] [i_0])))) && (~13)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_22 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]);
                        var_23 &= (((max(10133814228492068788, (arr_1 [i_2] [i_3]))) & (((~(arr_7 [i_1] [i_2] [i_1]))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_24 = (var_11 > var_17);
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_3] [i_0] = (arr_10 [i_0] [i_0] [5] [i_2] [i_3] [i_4]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_1] [i_6] &= ((var_6 ? ((-7033705941309693508 / (((22882 ? 30 : -985847452))))) : (((var_6 ? 33 : 4275502753)))));
                        var_25 = (max(var_25, (((((max(7157, (arr_10 [i_0] [8] [i_0] [i_5 - 1] [i_6] [i_6])))) ? (max((arr_11 [i_5 - 1] [i_5 + 1] [i_5 - 3]), (arr_7 [i_5] [i_1] [i_5 + 1]))) : 72)))));
                        var_26 *= (max((min(((var_0 - (arr_1 [i_5] [i_6]))), (arr_12 [i_0] [i_0]))), 2223273678447595754));
                        var_27 *= ((~(arr_8 [i_5] [i_5 + 1] [i_5 - 3] [i_5 - 3])));
                    }
                }
            }
        }
    }
    var_28 = (min((min(var_11, (((var_0 ? 24123 : 35))))), var_3));
    #pragma endscop
}
