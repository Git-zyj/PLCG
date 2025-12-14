/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 -= (((((((max((arr_0 [i_0]), var_1))) ? (max(var_9, (arr_1 [8]))) : -17257))) ? 218 : var_5));
        arr_2 [1] [0] = ((min((arr_1 [i_0]), (6 != 8003))) ? ((57527 ? 14180635832641962540 : -904445647)) : var_8);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [12] = ((-(!-904445648)));
        var_14 = (min(var_14, (arr_4 [i_1])));
        arr_7 [i_1] = ((((+((((arr_3 [i_1] [i_1]) < -1))))) > ((((-(arr_3 [3] [3]))) * (!55542)))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_15 = (max((arr_9 [i_2]), (arr_8 [i_2])));
        var_16 = (((arr_5 [i_2]) + var_0));
        arr_10 [2] [2] |= ((!(((arr_5 [i_2 - 1]) || ((min((arr_8 [i_2]), var_7)))))));
        arr_11 [i_2] = (-904445637 - 255);
    }
    var_17 = var_10;
    #pragma endscop
}
