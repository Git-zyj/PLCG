/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((((~26) + 2147483647)) << (((min(var_5, var_1)) - 990400601))))) > (((-7126319283082720465 ^ 55231763587679935) - ((var_3 ? (arr_3 [i_1]) : (-9223372036854775807 - 1))))));
                    arr_9 [i_0] [i_0] [i_2 - 1] [i_2] = (~var_10);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_13 += ((~((((var_11 & var_9) > (((min(19410, 1)))))))));
        var_14 = (!var_5);
    }
    var_15 = var_7;
    #pragma endscop
}
