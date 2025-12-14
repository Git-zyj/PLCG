/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (0 * var_4);
                var_19 = var_3;
                var_20 = ((-245 ? 65535 : (max(((11 ? (-9223372036854775807 - 1) : 24)), (arr_4 [i_0 - 1] [i_0 + 1])))));
                var_21 = (min(var_21, (arr_2 [i_0] [10] [4])));
            }
        }
    }
    var_22 = ((65535 ? 136 : 19));
    var_23 = (max(var_23, var_5));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            {
                var_24 -= ((((((!(!var_0))))) <= (((arr_11 [i_2] [i_2] [i_2]) ? 6670805326378225552 : 3579599046127927232))));
                var_25 = ((((((((arr_10 [i_2]) ? (arr_8 [i_2 + 1]) : var_3))) ? ((var_14 ? var_6 : var_14)) : ((13106510474890651014 ? (arr_12 [i_2]) : var_6)))) * 136));
            }
        }
    }
    #pragma endscop
}
