/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [15] = arr_2 [i_0 + 3];
        arr_5 [8] = ((((+((var_17 ? (arr_2 [12]) : var_12))))) ? (max(3284554744, 2907666341)) : (max((!var_2), var_13)));
        var_19 = 4294967295;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_20 = (((((~(arr_6 [i_1 + 1] [9])))) ? ((2194193201 ? 62 : 1728467260)) : var_10));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_21 *= ((((358941526 ? var_8 : var_2)) < (max((arr_12 [14] [2] [i_3]), (arr_11 [4] [12] [19] [i_1 - 1])))));
                    var_22 = (max(var_22, (arr_8 [9] [5])));
                    var_23 = (min(var_23, 2566500036));
                }
            }
        }
    }
    var_24 = var_11;
    var_25 = ((-(var_7 < var_18)));
    var_26 = var_6;
    var_27 = ((((max(var_14, var_6))) ? 3284554748 : 1728467259));
    #pragma endscop
}
