/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 &= (((arr_3 [i_1] [i_0]) < ((-(min(var_6, 18446744073709551615))))));
                var_19 = (max(var_19, (((11345 | (min(((var_17 ? var_14 : (arr_4 [i_1]))), (~-1979446300))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = (max(((~(arr_5 [i_2]))), ((((arr_5 [i_2]) > var_4)))));
        var_20 = (min(var_20, (((!(((-115 % (arr_5 [i_2])))))))));
        arr_8 [i_2] = min((max(var_14, (((arr_1 [i_2] [i_2]) ? 1 : (arr_4 [i_2]))))), var_6);
    }
    #pragma endscop
}
