/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((~(min(var_0, var_11))))) ? var_0 : (((((max(-36, var_9))) ? var_14 : (min(3829739642812096198, var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, 2043917089));
                    arr_9 [8] [16] [18] [2] |= var_16;
                    var_20 = var_14;
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (arr_7 [0] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
