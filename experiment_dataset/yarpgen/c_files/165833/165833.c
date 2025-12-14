/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 & (((max(1724660013, var_5)) << (var_18 - 1430661422)))));
    var_21 = (min(((((var_14 | var_8) == (((max(31, 16))))))), var_13));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (min(((+(((arr_5 [i_0] [i_0 - 2] [i_0]) ^ 37711)))), ((min(var_2, (arr_3 [i_0] [i_0]))))));
                var_23 = var_17;
                var_24 = (((arr_1 [i_1]) ? (~52014) : (((((arr_4 [i_0] [i_1]) ? 15 : (arr_5 [i_0] [i_0 - 2] [10])))))));
            }
        }
    }
    var_25 = var_10;
    var_26 = ((((max(var_17, (var_14 <= -60)))) ? (((-32 ? var_6 : var_18))) : 2251799796908032));
    #pragma endscop
}
