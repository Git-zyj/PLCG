/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((((var_18 == 32767) && ((max(var_8, 4294967295))))))));
    var_20 -= ((((max(4294967293, 32758))) ? var_7 : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (min(((var_13 ^ (arr_1 [1]))), -8586));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_22 = (((((+(((arr_2 [i_0]) + 4294967293))))) ? ((((384 ? (arr_1 [i_0]) : var_11)))) : ((((arr_12 [i_3]) == (arr_12 [i_0]))))));
                        var_23 = ((((var_7 ? 536870911 : (arr_9 [8] [i_2] [19]))) + ((2 ^ ((((var_16 == (arr_1 [i_0])))))))));
                    }
                }
            }
        }
    }
    var_24 += (((((min(var_9, var_7))) || var_12)));
    var_25 = ((((!(1 < 32758))) ? ((-((var_5 ? 4294967295 : var_13)))) : var_13));
    #pragma endscop
}
