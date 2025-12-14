/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(((!(var_13 << var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 252));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, (((((-7010 ? (arr_3 [i_1] [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_3]))) % (arr_10 [i_3] [i_2] [i_1] [i_0]))))));
                            arr_11 [i_0] [i_3] [i_0] [i_0] [i_0] = var_2;
                            var_17 = (var_7 ? ((8330603367224289649 - (~var_6))) : -28078);
                        }
                    }
                }
                var_18 += (((((((((arr_2 [i_0] [i_1] [i_1]) ? var_7 : (arr_2 [i_0] [i_1] [i_0])))) ? ((var_13 ? var_11 : (arr_10 [i_0] [i_1] [i_1] [i_0]))) : ((-6999 ? var_13 : var_9))))) ? (((((var_5 ? 1 : 7118856396198867312))) ? (((var_6 || (arr_8 [i_0] [i_1] [i_1] [i_0])))) : (((arr_8 [i_0] [i_0] [i_1] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_10 [i_0] [i_0] [i_1] [i_0]))))) : (((!((((arr_7 [i_0] [i_0] [i_1] [i_1]) ? var_6 : var_9))))))));
            }
        }
    }
    #pragma endscop
}
