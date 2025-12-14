/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 += var_0;
                var_13 = (max(var_13, ((max((((arr_3 [i_0 - 1]) - (arr_3 [i_0 - 2]))), (arr_3 [i_0 + 1]))))));
                var_14 = (max(((((max(-2147483645, var_5)) | var_2))), (max(2147483645, (arr_2 [i_0])))));
            }
        }
    }
    var_15 = (((!var_1) + var_8));
    #pragma endscop
}
