/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 3908707174;
    var_14 = ((var_3 ? (-23254 + -1590) : (max((max(var_1, var_6)), (!var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 *= ((((min((arr_3 [i_1 - 1] [i_0]), (arr_3 [i_1 - 1] [i_0])))) && (((arr_3 [i_1 - 1] [i_0]) && (arr_3 [i_1 - 1] [i_0])))));
                var_16 = (arr_4 [i_1]);
            }
        }
    }
    var_17 = (((min(var_12, (((-1 ? 549496117 : var_1))))) < (((var_1 / 3) ? (1026777632458968133 * 0) : 3845))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_13 [i_3] = ((!((!((min(57677, (arr_10 [2] [i_3] [i_3]))))))));
                    var_18 = ((+(((arr_6 [i_2]) + 33030144))));
                    arr_14 [i_3] = ((!((((!7) ? ((-7 ? 1052606294 : 1073737728)) : ((((arr_10 [i_2] [i_3] [i_3]) > var_12))))))));
                }
            }
        }
    }
    #pragma endscop
}
