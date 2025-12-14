/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((-8424328859698026159 ? ((((((var_5 ? var_4 : 1163833146))) ? (((-7345065343469462602 ? 26 : 1163833146))) : ((var_1 >> (3637881011 - 3637880995)))))) : ((~(max(3815578420183821039, var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = (((-22001 ? (((var_2 ? var_1 : var_7))) : (arr_4 [i_0] [i_0]))) * (((((max(1367750651, -7345065343469462602)) == (min(28, (arr_5 [i_0] [22] [i_2]))))))));
                    var_14 = 18927;
                    var_15 = min((max(var_4, var_6)), (((var_9 ^ (arr_7 [1] [1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
