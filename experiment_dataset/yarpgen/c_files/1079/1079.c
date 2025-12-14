/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= (max(var_6, (~1)));
                arr_5 [i_1] [i_1] [i_1] = var_7;
                arr_6 [i_0] = (min((((!(var_8 | var_1)))), (min(var_10, (max(var_13, 2822850991))))));
                var_17 = (min(var_17, ((min((!var_15), (!var_3))))));
            }
        }
    }
    var_18 = var_1;
    var_19 += var_8;
    var_20 &= (((((((max(var_7, var_12))) ? ((min(1, -2))) : (-32744 || 42813908)))) / (((1472116295 ? 4058032766 : 31)))));
    #pragma endscop
}
