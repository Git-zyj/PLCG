/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1995;
    var_11 = (max(var_11, ((min(var_8, ((~((max(var_4, var_8))))))))));
    var_12 = (min((0 % -1), ((((~1399999857) ^ (~-19))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((var_0 + (var_9 - -35))))));
                arr_5 [i_0] [i_0] = (var_1 + var_4);
            }
        }
    }
    var_14 ^= ((-1 ? 0 : ((max(((min(var_1, 1))), var_5)))));
    #pragma endscop
}
