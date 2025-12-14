/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_13 ? ((((max(var_0, -25793)) != 25782))) : (max(((var_15 ? 72 : var_2)), ((var_7 ? var_13 : 98)))))))));
    var_17 = (min(var_17, (((!(!var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_18 = ((~((~(arr_6 [i_2 + 1] [i_2 + 1] [i_0] [i_2 + 2])))));
                    var_19 -= ((var_11 == (arr_6 [i_2 + 1] [i_2] [14] [i_2 + 1])));
                }
                var_20 = (max(var_8, ((((((~(arr_2 [i_0] [i_1])))) && (arr_4 [7] [i_1]))))));
            }
        }
    }
    var_21 = (((var_5 + var_1) % var_0));
    #pragma endscop
}
