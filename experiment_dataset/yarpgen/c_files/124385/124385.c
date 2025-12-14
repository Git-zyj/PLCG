/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_11 = (((((!(arr_4 [i_1]))) && (!4294967279))) && (((var_4 ? 1 : 4294967291))));
            var_12 = (min(var_1, var_2));
            var_13 = var_3;
            var_14 += (((((((min((arr_4 [i_0]), var_5))) || (((var_1 ? var_9 : var_9)))))) > (((arr_4 [i_0 - 2]) ? var_3 : var_7))));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_15 = min(((var_8 ? (max(var_4, var_9)) : (arr_1 [i_2] [1]))), var_6);
            var_16 = 98;
        }
        for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_17 = (min((!22), (((max((arr_6 [i_0 + 2] [i_3]), 1624925082)) << (!866119224)))));
            var_18 = ((((max(var_9, (arr_0 [i_0]))))) || (arr_3 [5] [i_3]));
            arr_9 [8] = (min(((((arr_7 [i_3 + 2]) ? -44 : var_1))), (((((0 ? var_0 : 92))) ? var_2 : (arr_5 [i_0 + 1] [i_0 + 1])))));
            var_19 = ((((!(arr_8 [i_0 + 2] [i_3 - 1])))));
        }
        var_20 = ((-((~(var_0 > 1)))));
        arr_10 [3] [i_0] = ((arr_4 [i_0 + 1]) ? (max(88, var_0)) : (32 >= -8468550123471584266));
        var_21 = (arr_0 [i_0 - 2]);
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        arr_14 [i_4] [i_4 + 1] = ((-var_0 ^ (arr_12 [i_4 + 2])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_17 [i_4] [i_4] [i_5] = var_4;
            var_22 = -var_1;
        }
        arr_18 [i_4] = 1;
        var_23 = ((~(min((arr_13 [i_4 - 2] [i_4 - 2]), (arr_16 [i_4 - 1])))));
    }
    #pragma endscop
}
