/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] = ((((max((arr_0 [i_0 + 1] [i_0]), (arr_4 [i_0 - 1])))) || (((((((arr_3 [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_3 [i_0 + 1])))) ? (arr_3 [i_0]) : (((arr_1 [i_1] [i_1]) - (arr_3 [i_1]))))))));
                var_16 = (min((min((arr_4 [i_1]), (arr_0 [i_0 - 1] [i_1]))), ((((arr_0 [i_0 - 1] [i_1]) >= (arr_0 [i_0 - 1] [i_1]))))));
                var_17 = ((!((((~(arr_3 [i_1]))) == (((1015808 != (arr_4 [i_0 + 1]))))))));
            }
        }
    }
    var_18 = var_10;
    var_19 = -var_0;
    #pragma endscop
}
