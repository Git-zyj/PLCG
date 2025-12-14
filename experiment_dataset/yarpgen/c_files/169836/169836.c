/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((min(var_5, var_1)) | var_1)) != (((max(var_7, var_3)) & ((var_10 ? var_3 : var_2))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = (max((((var_1 != (max(var_3, var_10))))), (((arr_0 [i_0 - 1]) - (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_15 = (min(var_15, var_0));
                var_16 = (arr_4 [i_2] [i_0] [8]);
                var_17 = (((arr_6 [i_0] [i_0]) ? var_10 : var_12));

                for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, (arr_5 [i_3 + 2])));
                    var_19 = (arr_8 [i_0] [16] [15] [5]);
                    var_20 = (arr_7 [i_0] [i_0 + 1] [i_0] [i_0]);
                    var_21 += var_6;
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_22 = var_6;
                    var_23 += (((((((arr_12 [i_0] [i_1] [i_0] [i_4]) < var_6)))) >= (((arr_1 [20]) ? var_9 : (arr_5 [i_4])))));
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    var_24 = (((arr_15 [i_1] [14] [i_2] [i_2] [i_1] [i_0]) <= (arr_15 [i_1] [1] [i_1] [i_1] [1] [i_1])));
                    var_25 = (arr_11 [9] [i_0 + 3] [i_0] [16]);
                }
            }
            for (int i_6 = 4; i_6 < 21;i_6 += 1)
            {
                var_26 = var_12;
                var_27 = ((var_8 ^ (arr_1 [i_0 - 1])));
            }
            var_28 += var_6;
            var_29 += var_11;
            var_30 = (((arr_15 [10] [i_1] [i_0 + 4] [i_0] [i_0 - 1] [i_0]) ? var_5 : (arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])));
        }
        var_31 += (((max(var_7, (arr_9 [i_0 + 4] [i_0] [22] [i_0 - 1]))) == (arr_4 [i_0] [8] [i_0 + 1])));
        var_32 = (arr_1 [i_0]);
    }
    #pragma endscop
}
