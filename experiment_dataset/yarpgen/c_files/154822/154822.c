/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(max((29 * -15), 50416)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [0] [0] [i_0] = (min((((arr_2 [i_1]) % (((var_1 - (arr_0 [i_1])))))), ((~(13 % 3967141303)))));
                var_13 = (max(var_13, ((((((((min(15112, 8697479473816881451))) ? (min(890244736, 4992059112397990039)) : (!18808)))) + 1266505376839010297)))));
            }
        }
    }
    #pragma endscop
}
