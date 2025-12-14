/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? (((var_1 || var_6) ? (!var_1) : var_5)) : (!var_3)));
    var_11 = (((var_4 + 2147483647) >> (((((((var_0 ? var_7 : var_3))) ? var_0 : var_7)) + 9787))));
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_2] [i_1] [13] [1] [14] = ((var_1 + (arr_2 [i_0 - 2])));
                        var_13 = ((-5776127899889757716 ? (arr_5 [i_3 - 1] [i_2 - 1] [i_2] [i_2]) : (~var_0)));
                        var_14 = (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]);
                        arr_10 [i_2] [i_2] [i_2] [18] [i_2] = 65535;
                    }
                    var_15 = (min(var_15, ((var_2 ? (((4294967295 ? 1944966523 : 45))) : (((((var_8 ? var_4 : var_0))) ? (((arr_8 [13] [i_1] [i_1] [i_1] [18]) ? (arr_4 [19] [i_1] [i_1]) : var_9)) : 4142709997717043800))))));
                    arr_11 [15] [i_2] [5] = ((((((arr_3 [i_2 + 1] [3] [i_0 + 1]) ? var_0 : (arr_3 [i_2 - 1] [i_0] [i_0 + 1])))) ? (arr_3 [i_0 + 1] [i_1] [0]) : ((var_6 ? (min(0, (arr_6 [i_2] [i_1] [i_0] [i_0]))) : (arr_6 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1])))));
                    var_16 -= (var_9 ? (((var_4 + (arr_8 [3] [16] [i_1] [16] [i_0])))) : (((((arr_3 [14] [i_0 - 1] [1]) >= (arr_4 [i_0] [i_0 + 1] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
