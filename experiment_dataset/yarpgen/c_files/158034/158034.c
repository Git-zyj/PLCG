/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = 23407;
            var_19 += (((arr_1 [8]) * (-23407 | var_6)));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_20 = (min(var_20, ((((arr_4 [i_2 + 2] [0] [i_2]) * (((arr_0 [i_2]) ? (arr_5 [i_2]) : (arr_4 [i_0] [12] [i_0]))))))));
            arr_9 [i_0] = (((-(arr_2 [i_0]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 15;i_4 += 1)
                {
                    {
                        var_21 = (((var_18 + var_7) * 23381));
                        arr_14 [i_0] = ((!(arr_7 [i_0] [i_2 - 1])));
                    }
                }
            }
            arr_15 [i_0] [i_0] = (arr_11 [i_2]);
        }
        var_22 = (((var_14 / var_9) ^ -2420332869477390169));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_23 += (((arr_16 [1]) < ((((min(23381, (arr_16 [0])))) ? var_5 : ((max((arr_17 [0]), -85)))))));
        arr_18 [i_5] = (((!23381) > ((max(-23375, (arr_16 [i_5]))))));
        arr_19 [20] [i_5] = ((+(((((arr_16 [i_5]) >= 15952432034308360516))))));
    }
    var_24 = var_7;
    var_25 = var_9;
    var_26 = (max(var_26, (((!((((var_11 | var_13) ? -255 : ((max(1, var_18)))))))))));
    #pragma endscop
}
