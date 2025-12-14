/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_12 = (max(var_12, ((((((((((arr_1 [i_0]) & -8997831451545198864))) ? (!-5784453574147461177) : (((arr_2 [i_0] [6]) & 0))))) | -13)))));
        arr_3 [i_0] = ((((((max(var_11, var_5)) >> (-var_6 + 143)))) || var_1));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 = (max((((arr_5 [i_1 - 1]) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]))), (~-38)));
        var_14 = (((((1 ? 22821 : -32508))) > 5737933634251130087));
        var_15 = ((!((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
        var_16 = (((((((min((arr_5 [i_1]), var_0))) ? (~16) : -1))) | (~3210029810)));

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_17 = ((((((((arr_7 [i_1] [i_1]) ? var_6 : (arr_4 [i_2]))) + var_7))) ? (!6244842966072600845) : (max((42727 - 17), ((1775037880593716208 ? var_10 : var_1))))));
            arr_9 [i_1] [i_1] [i_1] = ((-(arr_7 [i_1] [i_1])));
            arr_10 [i_1] [i_1] = ((((min(24524, 236))) ? (((min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1]))))) : ((-13 ? var_10 : (arr_5 [8])))));
            var_18 = (~var_9);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_16 [i_4] [9] [i_1] [i_4] = ((!(arr_11 [i_1] [i_1])));
                var_19 = ((!(((5784453574147461177 ? 42700 : 328630164)))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_20 = (((((var_4 ? (arr_17 [i_1] [i_1]) : (arr_13 [i_4] [i_4])))) ? (!var_8) : 1));
                            var_21 = ((-(((arr_11 [i_1] [5]) ? (arr_7 [i_3] [i_1]) : var_3))));
                        }
                    }
                }
            }
            var_22 *= ((var_1 ^ ((((arr_12 [16] [i_3] [i_3]) == var_4)))));
            arr_23 [i_1] [i_1] [i_3] = (((((var_2 ? var_7 : (arr_21 [i_1] [i_3] [i_3] [i_3] [i_1])))) ? (((arr_20 [i_1] [i_1] [i_1] [i_3] [10]) ? 1 : (arr_17 [i_1] [i_1]))) : var_2));
        }
    }
    var_23 = (min((min((var_4 != -28750), 939737803)), 19689));
    #pragma endscop
}
