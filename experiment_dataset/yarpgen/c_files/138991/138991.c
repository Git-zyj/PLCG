/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((((min(var_0, var_9))) ? (var_10 * 1607413893) : (((-1 ? 3 : -23))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_12 *= ((((((-127 - 1) ? 50447 : var_5))) ? (((!(arr_4 [i_1] [i_0])))) : (arr_0 [i_0] [i_1])));
            var_13 -= (arr_4 [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_2] = var_8;
            var_14 = (((arr_0 [i_0] [i_0]) ? (arr_7 [i_0] [i_2] [i_2]) : (((arr_6 [i_0] [i_0] [4]) / var_6))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_13 [i_0] [i_0] [i_0] = (((((-(arr_3 [i_0] [i_0])))) ? (((var_10 < (arr_10 [i_0])))) : (((!(arr_10 [i_0]))))));
            var_15 = 1914119348;
        }
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            var_16 -= (arr_9 [i_0] [i_4 - 2] [i_0 + 3]);
            var_17 |= ((4826116366482754395 ? ((((arr_7 [9] [9] [i_4 - 1]) || 0))) : 1030146293));
        }
        var_18 = ((-(arr_16 [i_0 + 2] [i_0 - 1])));
        arr_17 [i_0 + 2] = var_1;
    }
    var_19 = (var_0 != var_4);
    #pragma endscop
}
