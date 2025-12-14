/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((max(-18446744073709551611, ((min(var_1, var_11)))))) ? (!var_14) : ((var_11 ? var_13 : 1195997551)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (max((max((min(10842411105215938577, var_17)), (arr_4 [i_0] [2] [i_1]))), 13527961461190498553));
                var_20 ^= (((arr_2 [i_1 - 1] [i_1 + 1]) || (var_8 < 99)));
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
