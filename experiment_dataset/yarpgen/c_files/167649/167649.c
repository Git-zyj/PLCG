/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = var_7;
                    arr_9 [i_0] [i_0] [i_2] = max((min((!var_2), (-286662183 / 1))), (((!(!0)))));
                }
            }
        }
    }
    var_14 = ((((158 ? (min(1795116992, -6608)) : -286662183))) ? ((0 ? ((286662182 ? -2147483645 : 286662179)) : 1)) : 25927);
    #pragma endscop
}
