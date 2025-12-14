/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((-124 | 992) ? -var_11 : ((-28674 ? 1 : var_12)))) ^ ((((((max(var_3, var_1))) || ((min(var_8, var_5)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_1] = ((((9223372036854775807 ? 1 : 1904110488)) <= var_2));
                    var_19 = (min(var_19, ((max((((((9223372036854775807 >> (-8 + 43)))) ? 234 : 1)), (arr_7 [i_0] [i_0] [i_0]))))));
                    var_20 = (max(var_20, (arr_6 [i_0] [i_0] [i_2])));
                }
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
