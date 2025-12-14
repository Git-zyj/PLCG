/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (max(((((((0 + (arr_1 [i_0])))) ? (var_16 | var_3) : var_2))), (max((((var_15 ? 1 : 0))), ((52 ? (arr_2 [i_1]) : (arr_8 [1] [i_2])))))));
                    var_19 += ((((((18446744073709551610 < var_1) ^ (arr_7 [i_0] [i_0 + 1] [i_0 - 3] [i_0 + 1])))) && (arr_7 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0 - 4])));
                    var_20 = (min(var_20, ((((((arr_4 [i_0] [i_0 - 1] [i_0 - 1]) ? 0 : (arr_8 [i_1] [i_0 - 3]))) / (arr_4 [1] [i_0 - 1] [i_0 - 1]))))));
                    arr_9 [i_0] [i_1] [i_2] = (((1 ? (arr_8 [i_0 - 4] [i_0 - 1]) : 1)) & (((((arr_8 [i_0 - 1] [i_0 - 3]) < (arr_8 [i_0 - 1] [i_0 + 1]))))));
                }
            }
        }
    }
    var_21 = ((((32767 ? 1 : ((min(112, 169))))) < ((-46 ? var_10 : ((17788093850957364862 ? 1 : 1))))));
    var_22 = (max((((28 ? 130 : 1747690318))), (((var_1 >= 205) ? (((var_7 ? var_8 : var_7))) : var_12))));
    #pragma endscop
}
