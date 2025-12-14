/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (~(((((var_4 - 1) + 9223372036854775807)) << (var_11 - 8956916922364806052))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((var_4 ? ((~(arr_6 [i_1] [i_1 - 2] [i_2 - 1]))) : (((~(arr_2 [i_1 - 1] [i_1 - 1] [i_2 - 1])))))))));
                    var_15 = (((((((4294967286 ? (arr_1 [i_0]) : 1))) / (arr_5 [i_1 + 2] [i_0])))) ? (arr_6 [i_0] [i_0] [i_0]) : ((~(arr_0 [i_0]))));
                    var_16 = -1;
                }
            }
        }
        var_17 = (min((10525 - var_8), (arr_6 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_18 = (max(var_18, var_7));
        var_19 = (min(var_19, ((((((((arr_5 [i_3] [4]) == 12265388622598541764)))) & (arr_5 [i_3] [12]))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_12 [i_4] = (((arr_10 [i_4]) >> var_5));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_20 += (arr_19 [i_4] [i_4] [i_4] [i_4]);
                            var_21 = (arr_18 [i_6 + 2] [i_6 + 2] [i_6 + 2]);
                        }
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            arr_27 [i_7] = (~var_8);
                            arr_28 [i_4] [i_7] [i_4] [i_4] = (arr_14 [i_7 - 3] [i_7 + 1]);
                        }
                        var_22 = 60;
                    }
                }
            }
        }
    }
    var_23 = max((((min(1, 1)) ? (var_4 / 99) : var_11)), var_3);
    var_24 ^= (var_8 ? (!var_1) : var_0);
    #pragma endscop
}
