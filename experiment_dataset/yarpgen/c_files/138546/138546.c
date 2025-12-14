/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 = (((arr_4 [i_1 - 1] [i_1 - 1]) || (arr_8 [i_0] [i_0] [i_0])));
                        var_21 = (max(var_21, 14478169276194997485));
                    }
                }
            }
            arr_11 [1] [16] = ((-(arr_3 [i_1 - 1] [i_1 - 1] [i_0])));
            var_22 = (((!14478169276194997485) + ((-(arr_7 [1] [1])))));
            var_23 = (min(var_23, 0));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_15 [1] [i_4] [i_4] = (arr_3 [i_0] [i_0] [i_0]);
            var_24 = (((arr_4 [i_4 - 1] [i_4 - 1]) ? var_17 : (arr_4 [i_4 - 1] [i_4])));
            arr_16 [i_4] [i_0] [i_4] = var_7;
            var_25 = ((!(arr_6 [i_0] [i_4] [i_4 - 1] [1])));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_26 = (((var_3 >= var_11) ? (arr_17 [1] [i_5]) : (((arr_8 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [15]) : 9006924376834048))));
            var_27 = ((((-(arr_10 [i_0]))) / (arr_18 [i_0] [i_0])));
        }
        arr_19 [21] = 0;
    }
    var_28 = var_0;
    var_29 = (((!-14713) + (((var_16 > (var_3 <= var_6))))));
    #pragma endscop
}
