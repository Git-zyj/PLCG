/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((max(var_7, (((var_5 + 2147483647) >> (var_1 - 14198101995330417036))))), var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_3 [i_0] [i_0] [8]);
                var_11 = (max(((-19404 | ((var_2 & (arr_5 [i_0 - 1] [1]))))), ((((max((arr_1 [i_1] [i_1]), var_0))) ? ((((arr_2 [8]) > (arr_1 [i_1] [i_0 - 1])))) : 27307))));
            }
        }
    }
    #pragma endscop
}
