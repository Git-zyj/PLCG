/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(251, (var_5 <= var_12)))) ? ((min(var_2, (!var_6)))) : var_9));
    var_15 *= 1007493272;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (((-16402 + 2147483647) << (184828516 - 184828516)));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_16 ^= (((49 <= 35917) < 129));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_2] [7] [i_3] [i_2] = ((arr_6 [i_0] [i_1] [i_2 - 1] [i_3]) ? (arr_5 [i_2 + 3] [i_3] [8]) : 54398);
                            arr_16 [i_0] [i_2] [i_2] [i_3] [i_2] = (63299 < 3287474024);
                            arr_17 [i_2] = 16079;
                            arr_18 [i_0] [i_3] [i_2] [i_0] [i_0] = (arr_14 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2]);
                        }
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] = (-65 <= -39);
        var_17 = (min(var_17, ((((arr_10 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1]) ? ((var_3 ? (arr_3 [i_0]) : 4110138765)) : (arr_14 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 2]))))));
        arr_20 [i_0] = ((-((893512775 >> (137 - 137)))));
    }
    #pragma endscop
}
