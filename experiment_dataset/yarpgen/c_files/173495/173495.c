/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] = ((-(arr_1 [i_0 + 1])));
                    var_19 = (max(var_19, (((((8282456160472123697 ? ((var_7 ? var_15 : var_2)) : 0)) ^ ((((min((arr_1 [i_1]), (arr_4 [i_0 + 1]))) % 102))))))));
                }
            }
        }
    }
    var_20 = ((-var_12 ? var_1 : ((var_7 ? var_2 : -var_3))));
    #pragma endscop
}
