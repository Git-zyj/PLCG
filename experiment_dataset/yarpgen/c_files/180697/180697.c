/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((((max(1, -12))) ? var_13 : 60711));
                    var_16 = (max(var_16, ((((((var_4 ? -var_13 : ((var_14 ? var_11 : (arr_3 [i_0] [i_1] [i_0])))))) || var_8)))));
                    arr_8 [i_0] [i_1] [i_0] = var_11;
                    var_17 = (max((var_0 / var_6), (arr_4 [i_0])));
                }
            }
        }
    }
    var_18 = (max(var_3, (((((var_5 ? var_8 : -17550))) ? var_2 : var_12))));
    var_19 *= var_13;
    #pragma endscop
}
