/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max((((1029671464 <= (arr_2 [i_0 - 1] [i_0] [i_0 + 1])))), (max((arr_4 [i_0 - 1] [i_0 + 2]), ((4539628424389459968 ? (arr_3 [i_0 + 1] [14] [i_0 + 1]) : var_10))))));
                var_15 |= var_1;
                var_16 ^= (((((arr_4 [i_0] [i_0]) < (arr_1 [i_0 - 1])))));
            }
        }
    }
    var_17 = var_0;
    var_18 |= (min(((max(59680, (0 % 1073741792)))), (((var_8 * var_6) ? (!1) : ((var_12 >> (var_3 + 25388)))))));
    var_19 = (min(0, (max((var_1 < 0), var_7))));
    #pragma endscop
}
