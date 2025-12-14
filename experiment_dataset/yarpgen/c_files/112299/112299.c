/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = -15;
                    var_21 = (((arr_0 [i_2 + 2]) - -801819847957537599));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_9 [i_3] [i_3] = ((+((var_13 ? (arr_7 [i_3]) : (arr_7 [i_3])))));
        arr_10 [i_3] = (max(((((15 ? var_7 : (arr_7 [i_3]))))), ((((var_6 - (arr_8 [i_3]))) << (((-801819847957537578 + 801819847957537598) - 20))))));
        arr_11 [i_3] = ((((((arr_7 [i_3]) ? ((((arr_7 [i_3]) < var_0))) : ((max((arr_7 [i_3]), var_3)))))) - (min(var_4, (arr_8 [i_3])))));
        arr_12 [i_3] = (((arr_7 [i_3]) | (arr_8 [i_3])));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = 801819847957537599;
        var_22 = var_14;
        var_23 = ((-(((min(10901054963103544986, (arr_14 [i_4] [i_4])))))));
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_24 = -var_11;
            var_25 = var_12;
        }
        var_26 = ((var_19 >= (((arr_6 [i_5] [i_5] [8]) & (min(var_16, var_0))))));
        arr_22 [i_5] = ((-(((arr_3 [i_5 + 1] [i_5]) ? var_13 : (arr_3 [i_5 - 1] [i_5 + 1])))));
    }
    #pragma endscop
}
