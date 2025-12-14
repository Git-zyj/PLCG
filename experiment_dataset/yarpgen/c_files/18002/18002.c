/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? -143 : (~3384808412)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_17 = -var_4;
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));
        var_18 = (min(var_18, (arr_1 [2] [i_0])));
        var_19 = (~910158884);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 = ((~(max((~104), (min((arr_1 [6] [6]), (arr_3 [3] [i_1])))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_21 = (max(var_21, ((max((arr_6 [i_1] [i_1] [i_2]), 143)))));
            var_22 = (max(((-(arr_1 [i_2] [i_2]))), ((~(arr_1 [i_2] [4])))));
            arr_9 [9] = (min((~var_9), ((((arr_4 [i_1] [i_2]) ? var_10 : var_12)))));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_23 = ((!(arr_6 [i_3] [i_2] [i_1])));

                for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    var_24 = var_9;
                    var_25 = var_11;
                }
                for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_5] [i_3] [i_2] [i_2] [i_1] = ((-((-(arr_17 [i_5] [i_5] [i_3] [i_2] [i_2] [3])))));
                    arr_21 [i_1] [i_1] [i_1] [i_5] [i_3] [i_1] = ((-((((1024 ? 97 : 1))))));
                }
            }
        }
    }
    #pragma endscop
}
