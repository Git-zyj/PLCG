/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((max((var_1 - 222), var_6)), var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((87 ? -15177 : (arr_3 [i_0] [i_0])))) || 1);
        var_13 = (~65535);
        arr_4 [i_0] [i_0] = (((arr_0 [i_0] [5]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 *= (arr_6 [i_1] [i_1]);
        var_15 = ((~(arr_6 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            var_16 = (max(var_16, ((!((!(arr_9 [i_2] [i_2])))))));
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_17 *= (min((arr_8 [i_2] [i_3]), var_7));
                        var_18 = (((arr_10 [i_2] [i_2] [i_4 - 2]) ? ((((min(var_6, -15177))) * -var_1)) : (((-(arr_11 [i_2] [i_2] [i_5]))))));
                        var_19 = max(65, (min((arr_9 [i_3] [i_3]), (~1))));
                        var_20 = (min(var_20, 1));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_21 = (min(0, (((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]) >= ((((arr_14 [i_8]) ? var_9 : (arr_16 [i_2] [i_2] [2]))))))));
                            var_22 = ((-(((4257262401 - 4257262401) >> 0))));
                            var_23 = -3863;
                        }
                    }
                }
            }
        }
        var_24 = ((15169 >> (min(13, 3206221674))));
    }
    var_25 = -31;
    var_26 = (min(var_26, (((max((1055370718 + 1), 21))))));
    #pragma endscop
}
