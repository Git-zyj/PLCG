/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (arr_1 [i_0] [i_0]);
                arr_5 [i_0] = var_16;
                var_20 -= (min(((-(var_16 == var_7))), ((((var_12 || (arr_1 [i_0] [i_1 - 2]))) ? (var_8 > 1054) : (((var_18 || (arr_3 [0] [i_1]))))))));
                var_21 += arr_1 [i_1] [i_0];
                arr_6 [i_0] [i_0] = ((((-92 / 1873077712) ? 1 : 126)));
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
