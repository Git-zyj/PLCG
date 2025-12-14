/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 -= 1;
    var_21 = (((!var_12) < var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (max((((((arr_5 [1] [i_1]) ? -88 : (arr_1 [i_0]))) - (((arr_0 [5] [5]) ? 0 : (arr_4 [i_0] [i_0] [i_1]))))), (min(-10251, (1 * -83)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (arr_5 [i_0] [i_1]);
                            var_23 = (((((-12102 ? 0 : (arr_9 [i_1] [12])))) / (arr_3 [i_0])));
                        }
                    }
                }
                var_24 = (max(((~(!0))), ((1 ? 17 : 40616))));
                var_25 *= (arr_5 [i_0] [i_0]);
                var_26 = (((((arr_4 [i_0] [i_0] [i_1]) <= var_16)) ? (arr_7 [i_0]) : ((1 ? (arr_2 [i_0] [i_1]) : -31))));
            }
        }
    }
    var_27 = 51644;
    #pragma endscop
}
