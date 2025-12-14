/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = var_3;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_12 = (max(var_12, (!325343361)));
            var_13 |= (min(var_6, (arr_3 [i_0])));
        }
        var_14 = ((((!(((-(arr_3 [i_0])))))) || ((((arr_5 [12] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_3 [i_0]))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_15 = (arr_2 [i_0] [0]);
            var_16 = (max(var_16, ((min(var_2, (min(((var_7 ? (arr_2 [i_0] [11]) : (arr_4 [3] [3]))), ((max((arr_1 [i_0] [i_0]), var_1))))))))));
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 = ((var_8 || ((min((arr_8 [i_3] [i_3]), (((var_5 ^ (arr_9 [i_3] [i_3])))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_18 *= var_2;
                        var_19 = (max(var_19, (arr_8 [i_3] [i_3])));
                    }
                }
            }
        }
        var_20 = var_10;
        arr_17 [2] = ((-(((((var_9 ? var_3 : (arr_8 [i_3] [14]))) == var_2)))));
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_20 [i_7] [i_7] = (min((!var_4), (max(1, 8008986735095827132))));
        var_21 *= (max(-var_5, ((-((max(var_5, var_3)))))));
    }
    var_22 |= (((1462477375 * (((var_2 ? var_9 : var_10))))));
    var_23 = (((min(var_6, 24021)) < ((min(var_1, ((var_10 ? var_0 : var_7)))))));
    var_24 = (min(((max(var_3, 3969623926))), ((var_8 ? (var_5 / var_2) : 107))));
    #pragma endscop
}
