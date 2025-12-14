/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_2] |= ((((max((((var_3 >> (6234758414487970280 - 6234758414487970253)))), var_15))) ? (((1714343725244322340 != var_12) & ((max(var_10, var_3))))) : (min(var_14, (7268726559378118139 >= var_15)))));
                    var_18 *= ((4013752076059900938 == (arr_5 [5] [5])));
                    arr_7 [i_1] = (max((((~(min(-1, -6234758414487970296))))), (max((arr_1 [i_0] [i_1]), ((var_14 ? 2752494696494681398 : 18139588340104376588))))));
                }
            }
        }
    }
    var_19 = (max(((var_8 ? -var_11 : 4294967270)), var_4));
    #pragma endscop
}
