/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = (((~-1714575322) && ((max(var_3, -var_14)))));
    var_20 = (max(-5276709559706683793, var_4));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (arr_4 [i_0] [i_0]);
                    var_22 = (((((-(arr_1 [i_0 + 2])))) && (((-(((arr_3 [i_0 + 3] [20] [i_2 - 1]) ? (arr_4 [i_0] [i_1]) : 1598793935)))))));
                    var_23 = (((~var_12) ? var_1 : var_1));
                }
            }
        }
        var_24 = (max(var_24, 32755));
        var_25 &= (((((arr_5 [i_0 - 1]) ^ (arr_1 [i_0 - 1]))) >> ((6 ? 0 : (arr_6 [i_0 - 1] [i_0] [i_0 + 1] [6])))));
        var_26 = var_0;
    }
    var_27 = var_17;
    #pragma endscop
}
