/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (var_4 + ((var_4 ? 877553711 : (107 + var_7))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_12 += 108;
                    var_13 = ((!((((var_6 + 2171875788) - -var_5)))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = (((((107 ? (arr_5 [2] [i_1] [i_0]) : (arr_5 [i_2 + 1] [i_1 - 1] [i_0])))) ? ((var_8 / (arr_5 [i_2 + 1] [i_1 - 1] [i_0]))) : (~24)));
                    var_14 = var_11;
                }
                var_15 = ((((var_11 ? (18446744073709551596 + 105) : (~4294967295))) == ((min(((2 / (arr_2 [i_0] [i_1]))), (arr_4 [i_0] [17] [i_0]))))));
            }
        }
    }
    var_16 = ((((var_8 ? -4 : 1461490067)) > var_10));
    var_17 = var_4;
    var_18 = -1461490067;
    #pragma endscop
}
