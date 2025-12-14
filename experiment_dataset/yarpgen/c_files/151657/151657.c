/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((min(-101, 1))) <= (3869982253172389507 == var_4)))), (((min(3869982253172389513, var_2)) ^ (103 | -21163)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((127 >> (3 <= -7268))) | (30780 * 0)));
                arr_5 [i_0] [i_0] = (max(((((((arr_2 [i_0]) >= 93466427))) <= (((var_6 <= (arr_0 [i_0])))))), (((min((arr_2 [i_0]), (arr_0 [i_0]))) <= (((min(var_12, var_0))))))));
            }
        }
    }
    var_20 = (((((0 * ((min(-21495, -6785)))))) / (min((max(1386556610168402614, 192)), 2681951411927490833))));
    #pragma endscop
}
