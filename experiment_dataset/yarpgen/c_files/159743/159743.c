/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((-((~((var_14 ? (arr_3 [0] [1] [i_2]) : var_18))))));
                    var_21 = (max(var_21, (((232541541028569984 >= (max(((-2 ? -2 : 18446744073709551615)), 18214202532680981632)))))));
                    var_22 = (arr_3 [9] [1] [7]);
                }
            }
        }
    }
    var_23 = ((1646008117 ? (((((var_4 ? var_19 : var_14))) ^ (var_9 | var_10))) : ((((max(var_8, var_9))) ? var_4 : (var_10 * var_7)))));
    var_24 = (((!(!var_15))));
    var_25 = var_0;
    #pragma endscop
}
