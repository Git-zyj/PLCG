/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((((-2310552833 / (arr_1 [i_1]))) * (min(var_4, (min(1984414462, 2310552824))))));
                arr_6 [i_1] [i_0] &= ((((arr_3 [i_0] [i_1]) ? 2310552831 : (arr_3 [19] [i_1]))));
            }
        }
    }
    var_19 += var_11;
    var_20 = var_10;
    #pragma endscop
}
