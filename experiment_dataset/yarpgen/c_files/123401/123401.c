/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (+(((!var_7) ? 23976 : var_3)));
    var_12 = (min(var_12, (((((((var_0 ? var_2 : var_10)))) ? (~1) : (((((4214648678108960061 ? var_4 : 4214648678108960061))) ? var_10 : (!var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = -var_1;
                var_13 = (--3060752592);
            }
        }
    }
    var_14 = (!-54);
    var_15 = (-1234214722 ? ((-(!4560))) : ((-4214648678108960061 ? var_7 : (~var_7))));
    #pragma endscop
}
