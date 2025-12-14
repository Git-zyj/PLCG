/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] &= (((((536870912 << ((((arr_1 [i_1]) || (arr_0 [0]))))))) || (arr_0 [i_1])));
                arr_8 [i_0] = ((+(((((arr_1 [i_0]) || (arr_6 [i_0] [i_0] [i_1])))))));
                var_13 = ((+((max((arr_6 [i_1 + 1] [i_0] [i_1 - 1]), (((arr_0 [i_0]) && 125)))))));
            }
        }
    }
    var_14 = max(-var_2, (((!-4990) - 131)));
    #pragma endscop
}
