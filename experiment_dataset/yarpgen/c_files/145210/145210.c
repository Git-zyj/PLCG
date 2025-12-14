/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_5;
    var_20 = (min(63359, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((2 ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    var_21 = ((-(arr_4 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 3])));
                    var_22 = (((~var_7) ? (((-(arr_0 [i_2])))) : 4294967295));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_5 [i_5 - 2] [i_3] [i_3 - 1])));
                        var_24 |= (1 <= 241);
                        arr_13 [i_5] [i_3] [i_5] [i_3] [i_3] = (arr_12 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]);

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_25 = ((((-4259004664061636974 | (arr_4 [i_0] [i_0] [i_0] [i_0]))) + ((1457622962 ? (arr_2 [6] [i_6]) : -1))));
                            arr_17 [i_0] [i_3] [1] [i_5] [4] = ((((((arr_1 [i_0] [3]) | var_15))) ? var_12 : (arr_4 [i_3 - 1] [i_3 - 1] [i_5 - 1] [4])));
                            var_26 = 1457622944;
                            var_27 = ((((arr_4 [i_0] [i_0] [3] [3]) == var_7)));
                        }
                        var_28 = (max(var_28, (((1279725237 ? var_3 : 7325553821951762493)))));
                    }
                }
            }
        }
        var_29 = (arr_10 [i_0] [i_0] [2]);
        var_30 = (min(var_30, (((1 ? 6644485534520115072 : 1457622964)))));
        arr_18 [i_0] = (((arr_9 [5] [i_0] [i_0]) ? var_6 : (arr_9 [4] [1] [2])));
    }
    #pragma endscop
}
