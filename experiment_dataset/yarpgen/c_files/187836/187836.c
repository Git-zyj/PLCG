/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] = (arr_2 [i_1]);
            var_10 = (min(var_10, (((var_3 ? ((((!(arr_0 [i_1 + 4] [i_0]))))) : (min(1, (arr_2 [i_0]))))))));
            arr_5 [i_0] [i_0] = (max(var_7, (arr_0 [i_0] [i_1 + 1])));
        }
        arr_6 [i_0] [i_0] = 6881191501615388835;
    }
    var_11 = (((((var_6 + ((var_2 ? var_9 : -6881191501615388840))))) ? ((var_7 ? var_8 : (var_0 + var_1))) : (max(var_1, var_5))));
    var_12 = (1 + var_4);
    #pragma endscop
}
