/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((9223372036854775807 ? 9223372036854775792 : 2565938045724907508))));
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_4;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_18 = (arr_5 [1] [1] [i_2]);
                        var_19 = (max((arr_5 [i_3] [i_3 - 2] [i_3 + 1]), (((arr_3 [i_0]) ? (arr_8 [i_3 - 2] [i_3] [i_3 - 1]) : ((var_6 ? var_7 : 1590831037917205988))))));
                        var_20 = ((((max((arr_13 [i_0] [i_3 + 1] [9] [i_3] [i_3 + 2] [i_3]), (arr_13 [i_2] [i_3 - 1] [i_3] [i_2] [i_3] [i_3])))) - ((-((var_2 ? 16995280906926039771 : 16855913035792345629))))));
                    }
                }
            }
        }
    }
    var_21 = (max(var_21, (((var_14 ? (max(((var_1 ? var_14 : var_7)), var_4)) : var_11)))));
    var_22 = (((((1964795909 >> (16855913035792345643 - 16855913035792345628)))) ? var_9 : (!var_4)));
    #pragma endscop
}
