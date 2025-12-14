/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (min(var_11, 66));
        arr_3 [i_0] = min((arr_2 [i_0] [i_0]), (((arr_2 [i_0] [i_0]) * 3006545101)));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (((min(4194240, 1288422201)) % (((((((min(250, 181)))) != var_5))))));
        arr_7 [i_1] [i_1] = ((min(74, (min(var_4, 181)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_12 += 4236908932;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_13 *= (((arr_11 [i_2] [i_3]) / (arr_11 [i_2] [i_3])));
            arr_14 [i_2] = (511 ? 2717279635 : 7);
        }
        var_14 = ((7 << (((arr_12 [i_2] [i_2] [i_2]) - 3172040683))));
        var_15 += (arr_9 [i_2]);
    }
    var_16 = max((max(0, 2698918948)), var_6);
    var_17 |= var_4;
    #pragma endscop
}
