/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(109, (((min(2, 40524))))));
    var_21 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = ((((((arr_3 [i_1]) ? (!11) : ((88 ? 8927 : var_15))))) ? (((min(var_4, var_18)))) : (arr_1 [7])));
                arr_5 [i_0] = ((+((((var_0 * 18446744073709551615) == -var_15)))));
            }
        }
    }
    var_23 = max(var_1, -1079271499);
    var_24 -= var_1;
    #pragma endscop
}
