/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((((max((max(5067985064795710550, 576458553280167936)), var_4))) ? var_15 : (arr_5 [i_0])));
                    var_20 = ((((((arr_8 [i_0] [i_0 - 1] [i_0 + 2] [i_0]) ? 0 : 17870285520429383680))) ? 576458553280167937 : (((var_12 - (min(4492282078640236086, var_19)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            {
                var_21 -= 4492282078640236086;
                arr_17 [i_4] [i_4] [i_4] = ((-((var_7 ? ((max((arr_15 [i_4] [i_3] [i_3]), var_3))) : (arr_15 [i_3] [i_4] [i_4])))));
                arr_18 [i_3] [i_4] [i_4] = arr_16 [i_4] [i_4];
                var_22 = 0;
            }
        }
    }
    #pragma endscop
}
