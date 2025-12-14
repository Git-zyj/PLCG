/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((var_7 ? (max((arr_0 [i_1 + 3]), ((110 ^ (arr_0 [i_0]))))) : var_11));
                arr_7 [i_0] = -1342207769;
                var_20 = (max(var_20, ((min((255 / 7684481845794114227), ((((arr_3 [i_1 + 4]) / var_19))))))));
            }
        }
    }
    var_21 += var_19;
    var_22 = var_14;
    #pragma endscop
}
