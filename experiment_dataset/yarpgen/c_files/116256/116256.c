/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(var_0, var_16)) >= var_0))) != (-25921 == -811234457));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = min(((((arr_4 [i_0] [i_1] [i_0]) >= var_7))), -811234430);
                var_19 = ((-(((min(681591265199706597, var_7))))));
            }
        }
    }
    var_20 = 811234429;
    #pragma endscop
}
