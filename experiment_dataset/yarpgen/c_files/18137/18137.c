/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_1;
    var_13 = (-var_6 ? (min(var_3, var_3)) : ((((!(((var_8 ? 3124771961163504644 : 6195602174730092308))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max(8636015159099793557, ((-8 ? 6195602174730092308 : 18446744073709551615))));
                var_14 += min(var_4, 18446744073709551615);
            }
        }
    }
    #pragma endscop
}
