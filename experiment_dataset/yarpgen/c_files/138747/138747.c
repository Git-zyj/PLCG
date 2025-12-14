/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((-15 + 2147483647) >> (((2537004918285586783 << 1) - 5074009836571173566))))));
    var_19 = ((((!(!var_14))) ? var_5 : 1125439417));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 *= (((((65508 ? (15487 & var_6) : ((~(arr_4 [i_1])))))) ? 1049792378 : 15467));
                var_21 = (~(((!(9 || 1)))));
            }
        }
    }
    #pragma endscop
}
