/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((~((-(4235078009892903983 + -1539886697))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((-1 % ((-(min(-1539886678, (arr_2 [18] [7])))))));
                var_13 = (min(18446744073709551614, 1));
            }
        }
    }
    var_14 = (max(var_14, var_10));
    #pragma endscop
}
