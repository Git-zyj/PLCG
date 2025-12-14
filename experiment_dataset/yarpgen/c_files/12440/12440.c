/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_11 = 1;
        var_12 -= ((((7 && ((max(-1867767239, 17010)))))) > var_2);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 *= var_5;
        var_14 = var_9;

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_15 = (17010 * 6002789829439247030);
                var_16 = arr_1 [i_2 - 1] [i_2 + 1];
                var_17 = var_2;
                var_18 ^= ((11459063661650247226 ^ (arr_6 [i_3] [i_3])));

                for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_19 ^= ((arr_8 [2] [i_4 - 1] [i_4 + 1] [i_3]) || (23 > var_10));
                    var_20 &= arr_12 [i_4 - 1] [14] [i_4 - 1] [i_4 - 1];
                    var_21 = 11459063661650247226;
                }
                for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_22 = (((arr_16 [i_6 - 1] [i_6 - 1] [11] [i_2] [5]) | (arr_16 [i_6 - 1] [i_6 - 1] [7] [i_2] [i_6 + 1])));
                        var_23 = 3132440253;
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        var_24 -= (-127 - 1);
                        var_25 = var_9;
                    }
                    var_26 = (max(var_26, ((((arr_1 [i_2 + 2] [i_2]) - 0)))));
                    arr_20 [1] [1] [0] [i_2] = (arr_19 [i_5] [i_5 + 1] [i_5 + 1] [12]);
                }
                for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, (((var_9 == (arr_21 [16] [16] [i_3] [i_3] [i_8 + 1]))))));
                    var_28 *= (((arr_5 [i_1] [i_1]) || ((var_10 >= (arr_4 [i_1])))));
                }
            }
            arr_23 [i_2] = (((arr_15 [i_2 + 2] [i_2 + 1] [19] [i_2]) ^ (arr_15 [i_2 + 1] [i_2 + 1] [3] [i_2])));
            arr_24 [i_2] [i_1] [i_2] = ((~(arr_3 [i_1] [i_2 + 2])));
        }
        var_29 *= arr_5 [14] [14];
    }
    var_30 = (max(var_30, ((((((max(1, var_9)))) * (max(((max(0, 8654))), var_6)))))));
    #pragma endscop
}
