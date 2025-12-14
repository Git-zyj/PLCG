/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((!34912) & (min(9014136338496781312, (arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1]))))))));
                    var_12 = ((((((((var_1 ? 255 : var_5))) ? var_0 : 17633))) ? (((min(var_5, 6635127749322073671)) + (min(var_6, (arr_6 [i_0] [i_1] [i_2]))))) : (arr_4 [i_1 + 1])));
                }
            }
        }
    }
    var_13 = (((((var_8 ? 0 : -var_8))) ? ((((min(0, 63391))))) : ((~(max(-8152917909126966359, var_2))))));
    #pragma endscop
}
