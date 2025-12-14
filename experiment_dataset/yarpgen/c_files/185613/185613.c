/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = ((448858399 ? 22694 : -1516193836));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = var_3;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_14 [i_0 + 1] [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_4] = var_10;
                            var_15 -= ((-((1516193836 / (-2147483647 - 1)))));
                        }
                        var_16 = (min(var_16, -448858399));
                        var_17 = (max(var_17, ((((!var_11) && ((((((-1516193855 ? -7918412231650407106 : 0))) ? (1 && 448858407) : (((!(arr_12 [i_1]))))))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 = (4146582447377493592 ? 48689 : 8);
                                var_19 += (arr_10 [i_0] [i_0] [i_2] [i_5]);
                            }
                        }
                    }
                }
                var_20 = ((((((arr_8 [i_0 - 1] [i_1] [i_1] [i_0] [i_1]) * 212))) ? var_11 : 1968261708));
            }
        }
    }
    var_21 = (-((((65535 << (var_7 - 38714))) + var_6)));
    #pragma endscop
}
