/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-671716040 ? var_0 : (((var_0 ? 4294967290 : -var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 &= (arr_5 [i_1] [i_0 - 1]);
                var_21 = (max(var_21, (((+(((((var_18 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_1])))) ? -573920950 : (min((arr_5 [i_0] [i_0]), (arr_0 [i_1]))))))))));
                var_22 = var_0;
                var_23 -= 4294967292;
            }
        }
    }
    var_24 = (max((((var_6 ? var_3 : (var_8 < var_9)))), var_14));
    #pragma endscop
}
