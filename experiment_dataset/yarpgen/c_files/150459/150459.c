/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 ^= -1;
            arr_4 [i_0] [i_1] [i_0] = arr_2 [i_0];
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_9 [i_0] = ((~(((arr_0 [i_0]) * (arr_0 [i_0])))));
            var_16 = ((((max(6, 52086))) - (arr_7 [i_0] [i_0])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_17 = ((((((arr_11 [i_0]) ? 9040 : var_14)) >> (1627957691 <= 1))));
            arr_13 [i_0] [i_3] = (max(((((((arr_8 [0] [i_3]) ? (arr_8 [i_3] [i_3]) : 25568))) && (arr_0 [i_0]))), 1));
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_18 = (((((-((-(arr_8 [i_0] [i_4])))))) ? (arr_20 [i_0] [15] [i_5] [21] [21]) : ((((((arr_3 [i_0] [i_5] [i_6]) | 8588886016))) ? (((min(var_14, 12288)))) : ((4111786030560632334 ^ (arr_17 [i_0] [i_0])))))));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [12] [i_0] [6] [i_0] [i_7] = (((((-(arr_20 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? -30 : (~1)));
                            arr_25 [i_0] [i_4] [1] [6] [i_4] [i_4] = ((1 ? (((((var_13 ? var_7 : var_10))) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (1 == var_3))) : (((((arr_8 [i_0] [i_0]) == (arr_20 [i_0] [i_4] [18] [i_6] [i_7])))))));
                            var_19 = min((33771 || 27), 43346);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_20 = ((-2252 ? (((arr_15 [i_0]) ? (arr_18 [i_0] [4] [i_5] [i_6]) : (max((arr_16 [i_5] [i_0]), var_13)))) : ((min(((1 ? 2033936888 : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_28 [i_0] [i_0] [i_5] [i_0] [i_0]))))));
                            arr_29 [i_0] [i_8] [i_0] [i_6] [4] = ((-var_4 / ((min(var_1, 31743)))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_9] [i_5] = (!4648194207237210640);
                            arr_33 [i_0] [1] [i_5] [i_0] [i_9] = (min(-15, (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            arr_34 [i_0] [i_0] [i_5] [i_6] [5] [i_9] [5] = ((min(1, 1)) != -9035);
                            var_21 *= 1;
                        }
                    }
                }
            }
        }
        var_22 *= (max((((((var_13 + (arr_10 [i_0] [i_0]))) - -var_8))), (((arr_8 [i_0] [i_0]) ? ((var_14 ? 2049901313693151063 : 15869)) : (arr_19 [1] [12] [1])))));
    }
    var_23 = (16586 >= 1);
    #pragma endscop
}
