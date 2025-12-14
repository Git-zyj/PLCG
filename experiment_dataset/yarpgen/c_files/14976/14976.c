/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((4311 || ((max(var_2, var_13)))))), (((((~var_3) + 2147483647)) >> (61440 + 4124)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((((50 ? 5682 : 0))) && (arr_3 [i_1] [i_0] [i_0])));
                var_18 = (min((((arr_5 [i_0]) / (arr_4 [i_1]))), (((!(arr_5 [i_0]))))));
                var_19 = (0 >= 46054);
            }
        }
    }
    #pragma endscop
}
