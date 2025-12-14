/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] &= (arr_2 [i_0 + 2]);
        var_19 = -var_4;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_20 = (max(var_20, 17660824262309601372));
                var_21 = 106;
            }
            var_22 = ((65 ? (arr_8 [5]) : 205));
        }
        var_23 &= ((-(arr_7 [i_1])));
        arr_13 [i_1] = ((6 ? (((((var_2 ? var_17 : (arr_12 [i_1])))) ? (arr_11 [i_1] [i_1] [i_1]) : ((max(1091057471, (arr_3 [i_1])))))) : ((min((arr_6 [i_1]), -65)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_24 [i_1] [i_4] [i_5] [i_4] = ((((((-(arr_9 [i_1] [i_4]))) + 2147483647)) >> ((((-(arr_9 [i_6] [i_1]))) + 7537))));
                        arr_25 [i_1] [i_4] [i_5] [i_4] = (arr_3 [i_1]);
                        var_24 = (((((-((-(arr_22 [i_1] [3] [3] [i_6])))))) ? var_0 : ((((arr_19 [i_1]) > var_18)))));
                    }
                }
            }
        }
    }
    var_25 = 190;
    #pragma endscop
}
