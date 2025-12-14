/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 += ((+((((((arr_0 [3] [i_0]) ? (arr_0 [i_0] [i_0]) : var_5))) ? (arr_0 [i_0] [0]) : ((((arr_0 [i_0] [i_0]) ? (arr_1 [7]) : (arr_1 [i_0]))))))));
        arr_2 [i_0] = -var_9;
        var_19 = (((max(3220654729, ((49368 ? 3220654729 : var_10))))) ? (arr_1 [i_0]) : ((((!(arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((!((((min((arr_1 [i_0]), var_8)) & ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))));
        arr_4 [9] = (((arr_0 [i_0] [i_0]) & (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 += (arr_7 [i_1]);
        arr_9 [i_1] = 3220654754;
        arr_10 [1] [i_1] = (arr_6 [i_1]);
    }
    #pragma endscop
}
