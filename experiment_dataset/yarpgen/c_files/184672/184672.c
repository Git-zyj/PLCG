/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_10));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(0, ((max((arr_2 [i_0 - 1] [i_1]), (arr_2 [i_0] [i_0]))))));
                    arr_8 [i_0] [9] [i_0] = (min((((131071 ? (-2147483647 - 1) : (arr_6 [i_0] [i_0] [i_0 - 1])))), ((-32763 >= ((min(33, (arr_3 [i_0] [i_1] [i_2]))))))));
                    var_20 |= 2031987897150638805;
                }
            }
        }
    }
    var_21 = ((((min(((var_0 ? var_7 : var_13)), 33554431))) ? (min(((var_14 ? 4693230740195409826 : 131071)), (((var_4 ? var_16 : 33))))) : ((((min(var_1, var_15))) ? (min(2089216042, 131071)) : (((var_2 ? var_7 : 180)))))));
    #pragma endscop
}
