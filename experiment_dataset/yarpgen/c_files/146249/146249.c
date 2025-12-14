/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (var_7 < var_10);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (((var_11 ? (arr_1 [i_0] [i_1]) : (arr_2 [i_0] [i_1]))) < (((((-32761 ? 61440 : 17)) <= (arr_2 [i_0 - 2] [3])))));
                var_20 = (arr_3 [i_0] [8]);
                arr_6 [i_1] = (arr_3 [6] [i_1]);
            }
        }
    }
    #pragma endscop
}
