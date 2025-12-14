/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 += var_9;
        arr_3 [i_0] = 255;
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1 - 3] = var_5;
        var_12 += (!var_5);
        arr_8 [i_1] [i_1] = var_0;
        arr_9 [i_1] = min((((var_7 ? 0 : var_7))), 0);
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_13 = (((arr_10 [i_2]) ? ((var_5 - (var_8 * var_4))) : (min((max(var_2, (arr_11 [i_2] [i_2]))), ((max(var_3, (arr_10 [i_2]))))))));
        var_14 += ((min((arr_10 [i_2]), (min(1, var_3)))));
        var_15 += ((+((~(((arr_11 [i_2 - 3] [i_2]) ? (arr_10 [i_2]) : 17539242254483134025))))));
        var_16 = (max((44 ^ var_5), var_3));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            arr_18 [i_3] [i_3] [i_4] = ((-(var_10 && var_10)));
            arr_19 [i_3] [i_3] [i_3] = var_9;
        }
        arr_20 [i_3] = ((((-var_8 < ((var_5 ? var_6 : 1)))) ? (18 / -906469624) : ((((min(var_2, var_3))) ? ((var_6 ? 1 : 215)) : ((min((arr_17 [i_3]), (arr_10 [i_3]))))))));
        var_17 += (arr_12 [i_3]);
        arr_21 [i_3] = (max(((var_9 ? (~1) : var_2)), 1));
        var_18 |= (((((1 ? ((var_9 ? var_0 : 642539188)) : (((1 < (arr_13 [i_3]))))))) ? ((9113215568308891837 ? 1 : ((var_7 ? var_9 : 1)))) : (!var_9)));
    }
    var_19 |= (var_7 ? var_3 : 16383);
    var_20 = ((var_4 ? var_4 : var_2));
    #pragma endscop
}
