/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = ((28935 == (arr_1 [i_0 + 2])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = var_16;
            arr_7 [i_0] [i_1] = ((!(arr_5 [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] = (((arr_13 [i_0] [i_0] [8] [i_3 - 2] [i_3 - 3]) >> (var_15 - 2469975697386501805)));
                        var_17 -= arr_10 [i_0 + 1] [i_1] [i_2] [i_3 - 3];
                    }
                }
            }
            var_18 = (max(var_18, ((((arr_0 [i_0 + 3]) ? (!48485) : -1)))));
            var_19 ^= (((((var_2 / (arr_0 [8])))) ? (((((arr_10 [i_0] [5] [5] [i_0]) || 4160749568)))) : (((arr_10 [i_0] [i_0] [6] [i_0]) ? 1377982262 : 7816))));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (!var_10)));

            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_25 [i_4] = (arr_24 [i_5 + 1] [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 1]);
                            var_21 = ((~(arr_12 [i_4] [i_0 + 2] [i_6] [i_5 + 2])));
                        }
                    }
                }
                arr_26 [i_4] [i_5 + 2] = (arr_23 [i_0 + 1] [i_4] [i_4] [i_0 + 1] [i_4] [i_5] [i_4]);
                arr_27 [i_0] [i_4] = (~8406245198021625113);
                var_22 = (max(var_22, ((((~(arr_0 [i_0 + 2])))))));
            }
        }
        var_23 = var_4;
    }
    var_24 = min(var_4, (-var_10 || var_8));
    var_25 = (((((min(1319, var_3)))) || var_16));
    var_26 = (((((var_4 ? 7 : var_9) * (((min(var_7, -66))))))));
    #pragma endscop
}
