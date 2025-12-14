/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((63533 >= var_8) ^ 3280954363));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 *= ((3280954363 ? (((((!(arr_7 [1] [i_1] [8]))) && 3280954387))) : (!3280954363)));
                    var_22 = var_3;
                    arr_8 [i_0] [i_0] [2] = var_3;
                }
            }
        }
    }
    var_23 = ((var_19 > ((3280954384 + (1014012936 < var_17)))));
    #pragma endscop
}
