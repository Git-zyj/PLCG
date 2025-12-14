/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((((((((-(arr_1 [i_0 + 1])))) ? (((4194303 + (arr_6 [4] [4] [4])))) : ((-(arr_0 [i_0] [i_0])))))) && (((var_12 ? var_6 : var_12)))));
                arr_7 [i_0] [i_1] [i_1 - 1] = (arr_6 [i_0 + 3] [i_1 + 1] [i_1 + 2]);
                var_15 = (min(var_15, var_10));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 |= ((((((max(46, var_0)) > ((var_1 + (arr_3 [12])))))) | ((((1 ? 1 : var_12))))));
                    var_17 += (((min(-2, var_13)) < -15458));
                    arr_10 [i_0] [i_0] [i_0] [i_0 - 1] = -4194300;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_18 = ((-(arr_8 [i_1 - 1] [i_0 + 3] [i_0] [i_0])));
                    arr_15 [i_0] [i_1 + 1] = var_8;
                    var_19 = arr_11 [i_0];
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_4 - 1] = var_4;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_5] = (arr_4 [i_0] [i_0] [i_4]);
                        arr_22 [i_0] [i_1] [i_0 - 1] [i_5] = (arr_11 [i_0]);
                        var_20 = (max(var_20, ((((((arr_17 [i_0] [i_0] [i_4 - 1]) ? (arr_8 [i_0] [i_5] [20] [i_5]) : 16)) << ((((21686 ? 3262295981390785492 : var_7)) - 3262295981390785468)))))));
                        var_21 *= ((var_5 == (arr_4 [i_0 + 3] [i_0] [i_0 + 4])));
                    }
                }
            }
        }
    }
    var_22 = 18446744073709551615;
    #pragma endscop
}
