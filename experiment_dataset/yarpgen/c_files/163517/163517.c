/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min((((454644019 < 18441082234777063124) ? (!454644035) : (var_9 + 5386415127266549937))), 3891);
    var_14 = (min(var_14, var_2));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_1] = (~454644034);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 += (((32767 <= (arr_4 [i_1 + 1] [i_2]))));
                                var_16 = -27640;
                            }
                        }
                    }
                    var_17 = ((!(((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1]) && 32767))));
                }
            }
        }
    }
    var_18 = (((30720 / (var_4 | 194621786920097440))));
    #pragma endscop
}
