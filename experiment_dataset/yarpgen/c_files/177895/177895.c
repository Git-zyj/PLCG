/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_10, 181));
    var_12 = (min(var_12, (!var_9)));
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_14 += (((arr_5 [i_0] [i_1]) ? (var_9 < 2899875042) : (1395092254 ^ var_4)));
            arr_6 [i_0] = ((!(arr_5 [i_1] [i_1 + 1])));
        }
        var_15 = 2899875065;
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (arr_5 [i_2] [i_2])));
        arr_11 [i_2] [i_2] = ((((45083 >= (arr_3 [i_2] [i_2] [i_2 + 3])))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_17 = (~11130251480121831200);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        var_18 = (min(var_18, (2899875028 < 6220378276273507209)));
                        arr_22 [i_6] [i_6] [i_6] [i_4] = (((arr_15 [i_3 - 1] [i_4 + 1] [i_4 + 1]) - (arr_18 [i_3])));
                        var_19 += 1395092265;
                        var_20 = (max(var_20, (((-6220378276273507203 <= (arr_19 [i_3 + 3] [i_4 - 1] [i_6 - 1]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_29 [i_7] [i_8] = ((1395092231 ? 1282665063 : 57866));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_21 = ((-((((arr_23 [i_7] [i_7]) >= -322810495)))));
                            var_22 = ((arr_10 [i_7]) * (arr_32 [i_7] [i_7] [i_8 + 1] [i_7 + 1]));
                        }
                    }
                }
            }
            var_23 -= (1 | -102);
        }
        for (int i_12 = 2; i_12 < 13;i_12 += 1) /* same iter space */
        {
            var_24 = arr_26 [i_7];
            var_25 = 3012302232;
            var_26 = ((arr_2 [i_7 + 3]) ? ((var_5 ? 1282665063 : 298)) : -64897);
            var_27 ^= ((-(arr_1 [12])));
            var_28 = (max(var_28, var_3));
        }
        arr_42 [i_7] [i_7] = ((~(arr_21 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 2])));
        arr_43 [i_7] = ((!(arr_41 [i_7 + 1])));
        arr_44 [i_7] [i_7] = 1;
        var_29 ^= ((47036 ? (2899875065 != var_9) : 85));
    }
    #pragma endscop
}
