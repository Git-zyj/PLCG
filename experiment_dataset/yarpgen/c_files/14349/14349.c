/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_11 = (var_7 ? ((((!((((arr_4 [i_0]) ? 3042803874 : (arr_2 [i_1])))))))) : 0);
                    arr_8 [i_2] [i_1] [i_2] [i_2] = 0;
                }
                var_12 = 0;
                var_13 = 2381433451;
            }
        }
    }
    var_14 = ((!(((var_6 ? (min(var_7, var_8)) : (min(12, 0)))))));
    var_15 = var_3;
    #pragma endscop
}
