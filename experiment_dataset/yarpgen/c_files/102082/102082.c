/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [0] = 32637;
        arr_3 [i_0] = 9878748427688423834;
        var_13 = (arr_1 [i_0]);
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [8]);
        arr_9 [i_1] = ((-((-(min((arr_0 [i_1]), 193))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_14 = (arr_7 [i_2]);
        var_15 |= (arr_5 [i_2]);
        var_16 = (min(((var_4 | ((807053994 ? var_5 : var_6)))), -16107));
        var_17 = var_5;
    }
    var_18 = -var_3;

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_19 = (arr_12 [i_3]);
        arr_16 [i_3] [i_3] = max((arr_5 [i_3]), var_2);
        var_20 = (-((-(min(32899, -1741783080)))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_21 = (max(var_21, ((max(((!(!-1))), ((((!(arr_19 [i_4] [i_4]))) || 33)))))));
        var_22 ^= (~3295503901313629223);
    }
    #pragma endscop
}
