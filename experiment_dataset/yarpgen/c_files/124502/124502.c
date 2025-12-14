/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min((max(var_1, (min(var_4, var_3)))), 3883774631));
    var_12 = (min(var_3, (((min(var_4, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max(var_10, (((!var_2) << (((arr_1 [i_0] [i_1 - 1]) - 59388))))));
                arr_6 [i_1] = (((((24 != (arr_1 [i_0] [i_0])))) <= (((arr_1 [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_0] [i_1 + 1]) : (arr_3 [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_13 = (min((max((min(18446744073709551611, 3)), var_2)), ((((var_6 ? var_4 : var_1))))));
    var_14 = (min(((((var_7 <= 251) != ((var_9 ? var_0 : var_0))))), (~255)));
    #pragma endscop
}
