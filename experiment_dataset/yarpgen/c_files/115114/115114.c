/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((-((5081939258007810466 ? (-127 - 1) : (-32767 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((3506860262 ? (((arr_0 [i_1]) << (((arr_0 [i_0]) - 3859)))) : (~-23657))))));
                    var_14 = (min((((var_8 + (arr_0 [i_0])))), (arr_1 [i_0])));
                    var_15 = (((((~(min(31871, 788107022))))) ? -120 : var_9));
                    arr_9 [i_0] [i_1] [i_2] &= -8501799327698211372;
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
