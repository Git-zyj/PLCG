/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((+(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : ((32382 ? (arr_0 [i_0]) : var_9))))));
        arr_2 [i_0] [i_0] = ((~((1 ? 33154 : 56340))));
        arr_3 [i_0] = (((13109285502535250300 ? 25 : 127)) <= (arr_1 [i_0] [i_0]));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_12 = (3840 ? 1415459853 : 191);
                        var_13 = (min(var_13, 186));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    var_14 = (((33154 || 21498) ? -18 : ((18272 ? 4294967286 : var_8))));
                    arr_17 [i_5 + 1] [i_4] [i_0] [i_0] = ((-126 ? ((min(127, 20))) : -78));
                    var_15 = 40176;
                    arr_18 [i_4] [i_4] [1] = ((-1111252704 * (117 + 4259219602707354757)));
                }
            }
        }
    }

    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {

            for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_32 [i_8] [i_8] [i_8] [i_7] [i_7] [i_7] = (17153792573157784711 > 6011059897098099224);
                            arr_33 [i_6] [i_6] [i_8] [i_8] [i_8] [i_9 + 1] [i_10] = ((~(arr_23 [i_9 + 2] [i_9 + 1] [i_9 + 2])));
                        }
                    }
                }
                var_16 = var_1;
            }
            for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
            {
                var_17 |= var_10;
                arr_36 [i_6 - 4] [i_6 - 4] = (arr_19 [i_6 - 4] [i_6]);
                var_18 = ((var_4 ? (arr_27 [i_11 + 4] [i_11 + 4] [i_11 - 2]) : (arr_23 [i_6 + 1] [i_6 + 1] [i_11 + 2])));
            }
            var_19 = (var_6 - 1940741405003180529);
        }
        var_20 = 21488;
        arr_37 [3] = ((((min(-98, 18172))) || (((((max((arr_26 [i_6] [i_6 - 2] [i_6]), (arr_26 [20] [i_6] [1])))) ? var_2 : ((18 ? 152 : 16506002668706371088)))))));
    }
    #pragma endscop
}
