/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min((min(0, var_6)), 701212927));
                arr_6 [0] = ((((701212953 ? (arr_3 [i_1 - 1] [i_0] [i_0]) : (arr_3 [i_0] [i_1 - 3] [i_1]))) / 701212927));
                var_21 = ((3892918060 ? (-127 - 1) : 8252208404819131655));
                var_22 = (min(var_22, 701212938));
            }
        }
    }
    var_23 = 3072710567153619333;
    #pragma endscop
}
