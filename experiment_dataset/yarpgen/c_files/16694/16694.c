/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 += 1;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 &= ((min(var_10, -7207804178319524130)));
                    var_19 ^= ((!((min(var_10, var_4)))));
                }
            }
        }
    }
    var_20 = (min(var_5, var_6));
    var_21 = (((((((min(-1761, var_5)))) < 7207804178319524130)) ? (0 <= var_10) : (min(7207804178319524130, 124))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_22 = (max((254 || 145), (arr_14 [i_3] [i_3] [i_4] [i_3])));
                    var_23 = (((!var_13) > (((arr_11 [i_3] [i_3]) ? -20 : ((17678 ? 4294967287 : (arr_8 [i_4] [i_4])))))));
                    var_24 = 1;
                }
            }
        }
    }
    var_25 |= (~18);
    #pragma endscop
}
