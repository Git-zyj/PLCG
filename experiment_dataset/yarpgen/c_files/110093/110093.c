/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_18 = (min(var_18, (arr_2 [i_1 + 3] [i_1 - 1])));
            var_19 = (arr_1 [i_0]);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_1] = (arr_0 [i_0]);

                for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_20 += (min(((((var_5 ? (arr_3 [i_3 + 2]) : var_8)) - 47)), (13226 > 16995519222814208700)));
                    arr_11 [i_0] [i_1] [i_0] [i_0] = (((arr_2 [i_3 - 3] [i_1 - 1]) ? 16995519222814208695 : (((min((arr_2 [i_3 - 1] [i_1 - 1]), 248))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_2] [i_0] [i_0] [i_0] = var_3;
                        arr_15 [8] [8] [i_2] [8] [i_2] [8] [i_0] = 18413448627451709965;
                        arr_16 [i_3] [i_1] [i_2] [i_0] = (arr_0 [i_0]);
                        arr_17 [i_4] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_4 [i_3 + 1] [i_1 + 3]) | (arr_4 [i_3 - 2] [i_1 + 2])));
                    }
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_21 *= 121;
                    arr_21 [i_0] [i_0] = (arr_20 [i_0] [i_2] [i_1] [i_0] [i_0]);
                }
                for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_22 = (((((3 >= (arr_13 [i_6 + 1] [5] [i_0] [i_0] [i_0] [i_0])))) * 32));
                    var_23 = (max(var_23, ((max(((((arr_20 [2] [i_1 - 1] [i_1 + 1] [i_6 - 1] [i_6 + 2]) ? -112 : (arr_20 [1] [i_1 - 1] [i_1 + 1] [i_6] [i_6 + 2])))), (max((arr_4 [i_0] [i_6 + 1]), 16995519222814208693)))))));
                    var_24 ^= var_2;

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_27 [i_0] = var_4;
                        arr_28 [i_1] [i_1] [i_0] = 0;
                        arr_29 [i_0] [i_1] [12] [i_6] [i_7] |= ((-(arr_26 [4])));
                        var_25 = (arr_22 [i_0] [i_1] [i_1] [i_0]);
                    }
                }
                for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] = (((arr_20 [i_0] [i_2] [i_1] [i_1 + 2] [i_0]) ? (1 + 1) : (max(683207697784356660, 127))));
                    arr_33 [i_8 - 2] [i_0] [i_0] [i_0] = 52;
                }
            }
        }
        arr_34 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_26 = (((((3513835078 ^ ((max(52, 262166195)))))) ? 120 : (min((arr_30 [i_9] [i_9]), (arr_20 [12] [i_9] [8] [i_9] [i_9])))));
        arr_37 [i_9] = (arr_18 [i_9] [i_9] [i_9]);
        var_27 = (max(var_27, (((((((arr_12 [i_9]) % (arr_12 [i_9])))) / (min((max((arr_2 [i_9] [i_9]), (arr_0 [0]))), (arr_19 [i_9] [i_9] [i_9] [i_9] [i_9]))))))));
    }
    #pragma endscop
}
