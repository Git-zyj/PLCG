/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [15] = (((((!var_8) ? 30596 : (arr_0 [i_0])))) ? (((((~(arr_3 [i_1 - 2] [i_1 + 1] [i_0])))) ? (arr_4 [i_0 + 2]) : (((arr_1 [i_1]) - 127)))) : (arr_1 [i_0]));
                arr_6 [i_0] [i_0 - 2] [i_1] = ((((((1592304095 >> (-1 + 6)) > (arr_0 [i_1]))))));
                arr_7 [i_0] [i_1 - 2] = (((((-(arr_3 [i_1] [i_1 - 1] [i_1 + 1])))) && (((var_10 ? 1592304095 : ((5169486070583641524 ^ (arr_4 [i_1]))))))));
            }
        }
    }
    var_12 = var_10;
    var_13 = var_10;
    var_14 = var_0;
    #pragma endscop
}
