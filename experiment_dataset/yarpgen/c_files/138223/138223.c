/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+(max(var_3, ((var_1 << (((var_12 + 843405368) - 16))))))));
    var_20 = (max(((((min(var_3, var_17))) ? (!var_6) : (max(var_2, var_16)))), 96));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (min((max(((max((arr_2 [i_0]), (arr_0 [i_0])))), var_4)), (max(var_14, (~var_12)))));
                    var_22 = arr_7 [i_1];
                }
            }
        }
    }
    #pragma endscop
}
