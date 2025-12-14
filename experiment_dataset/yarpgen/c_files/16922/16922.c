/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min((((103 >> (var_1 + 3696625738545530175)))), (min(((min(218, -99))), var_3))));
    var_11 = (max(var_11, ((max((((max(var_4, var_0)))), (max(var_3, var_4)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] = -122;
            arr_5 [i_0] = 11424564491712485745;
            var_12 = (min(var_12, var_1));
            arr_6 [i_0] [i_0] = var_9;
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_13 = var_7;
            var_14 += (arr_1 [i_2 - 1] [i_2 + 3]);
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_15 = 1;
                            var_16 += 0;
                        }
                    }
                }
            }
            arr_20 [i_3] [i_3] [i_0] = (var_7 + -99);
            var_17 *= var_1;
            var_18 ^= (-1914873696 ? (var_1 | var_3) : (~var_1));
        }

        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            var_19 += (arr_10 [i_0] [i_7 + 2]);

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_20 = (min(var_20, var_3));
                var_21 = (((arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8]) ? 616969090 : var_1));
            }
        }
    }
    for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_22 = (min(var_22, var_3));
        var_23 *= min(var_7, (arr_27 [20]));
    }
    for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] = (max((min((arr_26 [i_10 + 2] [i_10 + 2]), var_4)), (min(var_0, (arr_26 [i_10 - 1] [i_10 - 1])))));
        arr_32 [i_10] = ((!((!((min(var_5, var_5)))))));
        arr_33 [i_10 + 1] [i_10] = -var_2;
    }
    var_24 = (max(var_24, 3495347684));
    var_25 ^= var_8;
    #pragma endscop
}
