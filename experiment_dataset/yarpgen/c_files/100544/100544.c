/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 7913406919629865996;
    var_21 = (max(var_21, (((((((var_4 ? 4386868814553021280 : var_13)))) ? (((var_4 >= var_14) - -1343034137)) : -var_0)))));
    var_22 = (((var_6 ? ((min(var_6, var_5))) : -var_1)) + ((((max(var_19, var_12))) ? (15 | 24126) : (min(3707801830, 246)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_23 += (((arr_1 [13]) ? 4003847030892603214 : (arr_0 [i_0])));
        var_24 = (max(var_24, ((min(1, (((!var_17) ? 114 : 1)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_25 = (54035 == var_12);
                    var_26 = ((((((!(var_11 | var_11))))) < (--3751158556)));
                }
            }
        }
    }
    #pragma endscop
}
