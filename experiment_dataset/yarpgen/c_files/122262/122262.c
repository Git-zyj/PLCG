/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (var_9 ^ var_13)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(2199023255424, 173));
        arr_4 [i_0] = (min(0, (max((((arr_1 [i_0]) + var_5)), (arr_2 [i_0])))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [3] = ((~(arr_6 [i_0] [i_1 - 2] [i_0])));

            for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
            {
                arr_12 [i_0] [i_1] [i_0] [12] = -4065;

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_15 = (((arr_13 [15] [i_3] [i_1 - 2] [8] [i_0] [9]) ? 1771915760 : (arr_0 [i_2])));
                    arr_16 [i_0] [i_0] [i_3] = (((arr_15 [i_1 - 2] [i_1] [i_2] [5] [8] [i_2]) ^ -26935));
                    var_16 = (max(var_16, (~var_12)));
                    arr_17 [i_0] [2] [i_0] [i_0] = var_1;
                }
                arr_18 [i_0] [i_1 + 1] [i_1] &= ((-(arr_14 [4] [8] [i_1] [i_1 - 1] [i_1 - 1] [i_0])));
                arr_19 [i_0] [i_1] = (-9223372036854775807 - 1);
                var_17 *= var_7;
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                var_18 = (max(var_18, (var_0 * -8)));
                arr_23 [i_0] [i_1 - 2] [i_4] [i_0] = (i_0 % 2 == zero) ? ((((arr_11 [i_1 - 2] [i_0]) >> (var_11 - 39619)))) : ((((((arr_11 [i_1 - 2] [i_0]) + 9223372036854775807)) >> (var_11 - 39619))));
            }
            arr_24 [i_0] [i_1] [i_1] = (arr_9 [i_0] [i_1] [i_0] [i_0]);

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_19 = (arr_2 [i_0]);
                arr_29 [i_0] [11] [i_5 + 1] = (arr_15 [i_0] [i_1] [i_5 + 2] [i_1] [i_0] [14]);
            }
            arr_30 [i_0] = (arr_21 [i_0] [i_1 - 1]);
        }
        arr_31 [i_0] = (((!-4090) == var_5));
        arr_32 [i_0] [i_0] = (max(-4068, 4070));
    }
    #pragma endscop
}
