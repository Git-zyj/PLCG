/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((((min(var_4, var_7)) << (var_6 - 10185075255205091602))), (min((((1 ? 0 : 1))), var_6)))))));
    var_11 = ((((((min(var_6, var_5)) & var_2))) ? (~var_7) : (var_3 == 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((-(((arr_4 [i_0] [i_1]) ? var_2 : var_3))))) ? ((min((arr_4 [i_0] [i_0]), ((var_9 ? var_4 : (arr_2 [i_1])))))) : (((arr_2 [i_1]) ? 1 : 5161762968137290959))));
                arr_6 [10] [10] [i_1] = (((((-(!var_0)))) ? var_6 : ((((((var_3 ? (arr_3 [i_1]) : var_4))) ? (((var_7 ? var_3 : (arr_2 [i_1])))) : (((arr_3 [i_1]) ? var_5 : (arr_2 [10]))))))));
                arr_7 [i_0] [i_0] [5] = ((((((var_2 <= (arr_2 [i_0]))) ? ((min(1, var_1))) : (var_6 << 1))) | (((((var_1 ? var_2 : var_3)) | var_3)))));
            }
        }
    }
    var_12 = (max(var_12, ((((~var_2) ? var_1 : ((((var_9 <= var_5) ? ((-37 ? var_3 : var_4)) : (~var_0)))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_12 [i_3] = (!var_7);
                var_13 *= ((+(((arr_10 [4] [1]) ? var_1 : (min((arr_9 [9]), (arr_9 [i_3])))))));
            }
        }
    }
    #pragma endscop
}
