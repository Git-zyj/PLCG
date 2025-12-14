/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 -= ((~((((((-8863448605977039048 ? var_12 : var_12))) && var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [7] = var_13;
                    var_20 = (min(var_20, var_17));
                    arr_8 [i_1] [i_1] [i_1] [1] = ((((min((max(var_9, (arr_0 [i_0] [i_0]))), ((((arr_4 [i_0] [i_1]) || (arr_1 [i_2]))))))) || (((arr_2 [4] [i_0]) && ((min(var_15, var_13)))))));
                    arr_9 [i_1] = -var_2;
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((-var_16 ? -var_16 : ((((((arr_5 [i_2] [i_1] [i_0]) + -8863448605977039052)) < (var_1 && 8863448605977039047))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((8863448605977039046 || ((max(-12304000933407804, 2))))))));
    var_22 = ((-1590298578 * ((315017632932604996 ? -43 : var_1))));
    #pragma endscop
}
