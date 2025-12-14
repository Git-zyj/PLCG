/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = -1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 -= ((((!(~var_13))) ? (arr_7 [14] [14] [i_2 + 2] [i_2 + 2]) : (((((var_1 || (arr_0 [i_0] [i_0])))) % (arr_9 [i_0 + 1])))));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3 - 4] [i_1] = -1;
                        var_21 += ((((min(197, (((!(arr_11 [i_0] [i_1] [i_2 - 1] [i_2] [i_0])))))))) != ((-6114019106141558302 ^ (var_7 - 17981))));
                    }
                    for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] = ((((!(arr_0 [i_4 - 2] [i_0 - 2]))) && ((((arr_13 [0] [i_2 + 3] [i_0 - 2]) ? 3281 : (arr_13 [i_0] [i_1] [i_2 + 1]))))));
                        var_22 += (((((-((max(7, 1)))))) <= (max(var_0, 67108863))));
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_1] = var_12;
                    arr_17 [i_0] [i_1] [i_1] = ((!((max(((-6114019106141558305 ? (arr_1 [i_1] [i_0]) : 67108863)), (~1272201689))))));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_23 = 1;
        arr_20 [i_5] = (((((-(arr_4 [i_5] [i_5] [i_5 - 1])))) ? ((min((max(18, 1)), ((((arr_2 [i_5]) <= 1)))))) : 53));
        arr_21 [i_5] = ((-18446744073709551603 << (((((((-(arr_18 [i_5] [11])))) + 7566)) - 29))));
    }

    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        arr_25 [i_6] = ((((max(((max(-19347, (arr_9 [i_6])))), var_6))) ? ((((max(6114019106141558302, (arr_0 [i_6] [i_6])))))) : (-9274 - 6114019106141558302)));
        arr_26 [i_6 - 1] = (((min(var_4, var_18)) ^ (arr_18 [i_6 + 1] [i_6 - 1])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_24 += ((!(arr_29 [i_7])));
        var_25 += (var_12 | (arr_29 [i_7]));
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            {
                arr_35 [i_8] [i_8] = (arr_6 [i_8 - 2] [i_9] [i_9]);
                arr_36 [i_8] [i_8] = (!4739232620008491635);
            }
        }
    }
    #pragma endscop
}
