/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (((max(var_6, (arr_0 [i_0 + 1]))) / (max((arr_7 [i_2 - 1]), (arr_7 [i_2 - 1])))));
                            arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] = (max(2057387805064089227, (((arr_4 [i_0] [i_1] [i_2]) ? (min(var_5, 13401810943341198980)) : 32767))));
                            var_17 &= (arr_2 [i_3]);
                        }
                    }
                }
                var_18 *= var_8;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_1] [i_4] [i_5] = ((!(!var_7)));
                            var_19 = (min(var_19, (((arr_1 [i_0 + 2]) <= (1138554475365430202 - 19554)))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (!var_14);
    var_21 = var_0;
    #pragma endscop
}
