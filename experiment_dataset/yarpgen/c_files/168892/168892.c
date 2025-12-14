/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 *= min((((arr_3 [i_1 + 1] [i_0]) ? -var_1 : 163)), (((~((var_5 | (arr_0 [17] [i_1 + 4])))))));
                var_12 = (max(var_12, (((!(arr_2 [i_1 + 3] [i_1 - 1] [i_1 + 2]))))));
                var_13 -= ((((((((arr_1 [i_0] [i_0]) * 1563202249))) ? 41987 : ((32324 ? var_8 : 109))))) ? ((-(min(var_2, var_9)))) : (((arr_0 [i_1 + 3] [i_1 + 3]) & ((163 ? (arr_0 [i_0] [i_1 - 1]) : var_10)))));
            }
        }
    }
    var_14 = (max(var_6, (min(((163 ? var_7 : 4095439948075260341)), (~8272478080924652828)))));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_15 = ((0 - (arr_1 [i_2 + 2] [i_2 - 1])));
        arr_10 [i_2 + 1] |= ((-(arr_7 [i_2 - 1] [i_2 + 2])));
        var_16 = ((110 ? 4294967286 : var_6));
        var_17 -= (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 2]);
        arr_11 [i_2] [i_2 - 1] |= 13358146819504984349;
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_18 |= (min((((~(arr_13 [8] [8])))), (min((!var_7), (max(var_10, (arr_5 [i_3 - 2] [i_3 - 2] [i_3])))))));
        var_19 = (arr_2 [i_3] [i_3] [8]);
        arr_15 [i_3] = ((-((5022102034483711832 % (arr_13 [i_3 - 1] [i_3])))));
        arr_16 [i_3] [i_3] = 12;
    }
    var_20 = var_2;
    #pragma endscop
}
