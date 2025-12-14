/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((26408 ? (!28191) : ((var_6 ? 26408 : 4180961529))))) ? var_8 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((((!(((27297 ? (arr_4 [i_0] [15]) : (arr_0 [i_0])))))) ? (max((((arr_2 [16]) ? (-9223372036854775807 - 1) : 4180961529)), 2147483647)) : 14));
                arr_6 [i_0] [i_1] = 4604844235069121801;
            }
        }
    }
    var_13 = (max(var_1, -0));
    #pragma endscop
}
