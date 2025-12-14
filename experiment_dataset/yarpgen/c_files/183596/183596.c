/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((58741 ? var_9 : (min(var_7, 6794))));
    var_11 = ((((max((min(var_0, var_9)), 58736))) ? ((var_2 ? 6794 : 58719)) : (var_7 == var_0)));
    var_12 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] &= var_7;
                var_13 = var_5;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_14 += ((~((min((arr_10 [i_3 - 1] [i_4] [i_4]), -5)))));
                    arr_14 [i_3] [13] [i_4] [i_3] = var_4;
                    var_15 += ((((~(!-43))) < (((arr_7 [i_4] [i_2 - 1]) / (arr_6 [i_3 - 1])))));
                    arr_15 [i_2] [i_3] = ((min(797627136, 58741)));
                }
            }
        }
    }
    #pragma endscop
}
