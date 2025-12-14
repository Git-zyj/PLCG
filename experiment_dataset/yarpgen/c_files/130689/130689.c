/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((!((!(((arr_0 [16]) <= (arr_2 [i_0] [i_0])))))));
                var_11 = (((((min(((((arr_2 [i_0] [1]) || -11708))), var_10)))) + ((((arr_0 [i_0]) % (arr_3 [i_0]))))));
                arr_5 [i_0] [i_1] = (187 || 64);
            }
        }
    }
    var_12 |= ((~(~6512607995489549040)));
    #pragma endscop
}
