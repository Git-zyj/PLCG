/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((max(((~(min(-152445, 117)))), ((-8862624296716180143 ? 1 : (!1))))))));
                    arr_8 [i_1] [i_2] [i_0] [i_2] |= (arr_0 [i_1]);
                }
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
