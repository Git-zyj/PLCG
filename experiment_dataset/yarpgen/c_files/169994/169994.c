/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 *= ((var_15 * ((0 >> (2865421821 - 2865421799)))));
                arr_4 [20] [20] |= 1;
                var_20 *= (((var_9 && 1439188607) ? 981189209180838081 : ((min(((-(arr_1 [i_0 + 2] [17]))), var_1)))));
                arr_5 [1] [i_1] [i_1] |= (min((var_18 <= 16942351475009444832), (min(-125, (arr_3 [18] [18])))));
                arr_6 [i_0] [10] |= (arr_1 [i_0 - 1] [i_0 + 2]);
            }
        }
    }
    var_21 = var_17;
    var_22 = var_4;
    var_23 = (min(var_13, -581185828));
    var_24 = (var_15 & 80);
    #pragma endscop
}
