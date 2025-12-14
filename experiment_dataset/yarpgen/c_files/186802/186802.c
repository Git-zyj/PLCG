/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(((min(((max(var_6, (arr_3 [1])))), var_3))), (min(-6539046472415558552, var_1))));
                arr_5 [i_0] [i_1] = ((+((((var_14 ? (arr_2 [i_0 + 1] [i_0] [i_0 + 1]) : (arr_1 [i_1] [i_1])))))));
                var_19 = ((-(min(2731213790, (arr_0 [i_0 + 1])))));
                var_20 = (((arr_4 [i_0 - 1]) ? (~var_9) : ((((arr_0 [i_0 + 1]) ? -5192221578465145947 : (arr_4 [i_0 + 1]))))));
                var_21 = ((((min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) ? (arr_3 [i_0 + 1]) : ((var_4 << (var_8 - 11399)))));
            }
        }
    }
    #pragma endscop
}
