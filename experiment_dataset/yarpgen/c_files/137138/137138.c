/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, (arr_1 [i_0])));
        arr_2 [i_0] = (((3622684820531271158 / -18912) / 4294967273));
        arr_3 [i_0] = ((-(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (((((arr_4 [i_1]) || (arr_0 [i_0]))) && ((!(arr_0 [i_0])))));
            arr_8 [i_0] [i_0] [i_1] = ((-((-(arr_0 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 &= (arr_10 [i_0] [i_2]);
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((((arr_17 [i_2] [i_2] [i_2] [i_2] [i_4] [i_5]) % (arr_11 [i_4]))) % ((-(arr_17 [i_2] [i_2] [i_3] [i_4] [10] [i_5]))))))));
                            arr_19 [i_0] [i_2] [i_3] [i_3] [i_0] [i_4] = ((-((((arr_17 [i_0] [i_2] [i_3 + 1] [i_3 + 1] [i_4] [i_5]) <= (arr_6 [1] [6] [6]))))));
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] [i_0] = ((-((-(arr_0 [i_0])))));
            var_17 = ((((~(arr_9 [i_0] [i_2]))) == ((1 / (arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_18 = (((((((arr_21 [i_6]) || (arr_21 [i_6]))))) <= (arr_21 [24])));
        arr_23 [i_6] &= ((((-(arr_22 [i_6] [i_6]))) > (((arr_22 [i_6] [i_6]) & (arr_22 [i_6] [i_6])))));
        arr_24 [i_6] [i_6] = ((!(arr_21 [i_6])));
    }
    var_19 = -6894228482392648743;
    #pragma endscop
}
