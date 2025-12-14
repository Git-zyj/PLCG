/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((((((-6156129207635556614 < var_7) * (5 - 190)))) ? 10855 : ((2532 ? -464 : -10855))));
                arr_8 [i_0] [i_1] &= (arr_5 [i_1 - 1]);
                var_15 -= (((((((((arr_2 [i_0]) - (arr_1 [i_0])))) ? (arr_3 [i_0] [i_0] [i_1]) : (-6156129207635556614 || var_11)))) ? (((((5237 | (arr_1 [i_1 + 1]))) >> (((arr_5 [i_1 - 1]) - 112))))) : ((((((-464 > (arr_1 [i_1]))))) - ((var_12 ? 6156129207635556614 : var_13))))));
            }
        }
    }
    var_16 = (min(((var_2 ? ((max(-5238, 0))) : ((var_8 ? 630396486199820975 : 6156129207635556614)))), var_6));
    var_17 = ((((((var_6 ? -10855 : var_2))) ? var_7 : var_2)));
    #pragma endscop
}
