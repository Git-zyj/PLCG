/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_8, ((((max(var_13, var_4))) ? ((57186 ? var_15 : var_13)) : var_11))));
    var_21 = var_18;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (min((min(((((arr_0 [i_0] [i_0]) ? var_10 : var_8))), ((var_6 ? var_9 : 7491787816953950588)))), (arr_3 [i_0])));
        arr_5 [i_0] [i_0] = (((-(min(var_19, var_0)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_22 = ((!((min(var_13, (arr_7 [i_0] [i_1] [8]))))));
                        var_23 = 1;
                        arr_12 [i_0] [i_0] [i_2 - 2] = ((((min((min(var_9, (arr_10 [i_1] [6] [6] [i_1] [14]))), var_17))) ? (((((((arr_8 [7] [i_1]) ? 7491787816953950581 : -5203012078490853138))) ? (((arr_3 [i_0]) ? var_9 : 1)) : var_12))) : (min((((arr_0 [i_0] [i_0]) ? 2 : (arr_9 [i_0] [i_1] [i_2] [i_3]))), (((!(arr_1 [i_3]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
