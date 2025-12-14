/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = arr_1 [8] [8];
                var_21 = ((!((((((arr_2 [i_0] [i_0]) + (arr_3 [i_0] [i_1])))) && (((-(arr_2 [i_0] [i_1]))))))));
                arr_4 [3] = arr_2 [i_0] [i_1];
                var_22 = ((((min((arr_2 [12] [5]), (arr_0 [i_0] [i_0])))) ^ (((((~(arr_0 [i_0] [i_0])))) ? ((min((arr_0 [i_0] [i_1]), (arr_3 [i_0] [i_0])))) : (((!(arr_3 [i_0] [i_0]))))))));
            }
        }
    }
    var_23 = var_18;
    var_24 = (max(var_24, (((var_19 ? ((min(var_19, (var_1 <= var_5)))) : ((((var_0 & var_19) >= (~var_19)))))))));
    var_25 = var_18;
    var_26 = var_19;
    #pragma endscop
}
