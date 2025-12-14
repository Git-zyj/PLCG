/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 ^= (!9853361384008340921);
                var_18 = (min(var_18, (((((((45805 | var_14) ? (var_16 >= -1110711947) : (arr_0 [i_0])))) ? (max((((1 ? (arr_4 [8] [i_0] [1]) : (arr_1 [i_1])))), var_2)) : (((var_14 ? ((-1 ? 109 : 23)) : (!0)))))))));
            }
        }
    }
    var_19 = (min(var_19, var_4));
    var_20 = (max(var_20, ((min(((1 ? 232 : 1)), ((min(-884764198, (var_1 | var_11)))))))));
    #pragma endscop
}
