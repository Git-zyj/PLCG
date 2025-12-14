/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min((min((arr_2 [i_0] [0] [i_0]), (min((arr_3 [i_1]), (arr_5 [i_0]))))), ((min((arr_2 [i_0 - 1] [1] [i_0 - 1]), (min((arr_2 [10] [8] [i_1]), (arr_0 [18])))))))))));
                var_15 = (min((arr_1 [i_0]), (arr_0 [i_0])));
                arr_6 [i_0] = (((min((arr_0 [i_0 + 4]), (arr_5 [i_0])))));
                arr_7 [i_0] [i_0] = (arr_0 [i_0 + 3]);
            }
        }
    }
    var_16 = (min((max(var_11, (max(var_11, var_10)))), (max(var_0, (max(var_9, var_5))))));
    var_17 = (max(var_9, (max(((min(5437201192564512490, var_2))), (min(var_10, var_7))))));
    #pragma endscop
}
