/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max((var_1 - var_1), (max(var_2, var_1))))) == (max((max(var_7, var_4)), (var_10 <= var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min((min((max(var_8, var_10)), (var_2 - var_6))), ((max(((min(var_8, var_12))), (min(var_5, var_12)))))));
                arr_6 [i_0] [i_1] = (((((min(var_6, var_4)))) > (max((max(var_7, var_3)), var_10))));
                var_15 = (min(var_15, ((min(var_3, (max((min(var_7, var_12)), (~var_12))))))));
            }
        }
    }
    #pragma endscop
}
