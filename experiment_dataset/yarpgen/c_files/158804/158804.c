/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (arr_2 [i_0] [i_0] [i_0]);
                arr_4 [i_0] = ((-6249 ? 2088759806898755358 : -63));
                var_13 = (max(var_13, (((var_8 ? (((((-7088442140380411601 ? var_8 : (arr_2 [i_1] [i_1] [i_1])))) ? var_11 : (1 - 1505892879))) : (~-11233))))));
            }
        }
    }
    var_14 = ((((((((41381 ? 7088442140380411600 : var_5))) ? var_2 : var_11))) && (((var_7 ? var_3 : var_1)))));
    #pragma endscop
}
