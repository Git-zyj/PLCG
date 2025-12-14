/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((-(((!(((-542391026 ? 980126726937745240 : 1))))))));
    var_11 -= var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((1152921504606842880 ? (((~(~95)))) : ((((((arr_3 [i_0]) ? (arr_3 [4]) : 1152921504606842876))) ? -3400786619244420308 : var_1))));
                arr_4 [17] [i_1] [14] = ((!(arr_1 [5])));
                var_13 = ((~(min(((4294967282 ? (-9223372036854775807 - 1) : 1152921504606842880)), (((var_4 ? var_9 : var_4)))))));
            }
        }
    }
    #pragma endscop
}
