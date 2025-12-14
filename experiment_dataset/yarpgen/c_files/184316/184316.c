/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min((-127 - 1), ((~(((arr_2 [12]) ? (arr_2 [i_0]) : (arr_1 [7] [i_0])))))));
        var_18 = (!8372224);
        var_19 = min((~16944201832098728756), ((-(arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (~9248128088434084383);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] = ((!((max((min((arr_7 [i_2] [i_1]), (arr_4 [i_1]))), (arr_5 [i_1]))))));
            var_20 = ((-((~(arr_4 [i_1 - 1])))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_21 = ((~(arr_10 [i_3] [i_3])));
        var_22 = (arr_10 [i_3] [i_3]);
    }
    var_23 = ((((max(((min(8372224, 648262534))), ((var_2 ? var_13 : var_12))))) | ((+((var_10 ? (-127 - 1) : var_4))))));
    #pragma endscop
}
