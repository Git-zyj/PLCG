/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 &= min(15347491478767803955, ((min(224, (arr_5 [i_1 - 2] [i_1 - 2])))));
                var_18 = (((max((arr_2 [i_0] [i_0] [i_1]), (219 * -1))) * ((((min((arr_4 [i_0] [i_0]), (arr_3 [i_0] [i_1])))) - (min(var_8, var_6))))));
            }
        }
    }
    #pragma endscop
}
