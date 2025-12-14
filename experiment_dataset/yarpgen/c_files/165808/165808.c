/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 >= -65);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [11] [i_2] [i_2] [i_2] [i_0] = (-((var_2 / (((arr_1 [i_0] [i_3]) ? 7023078066154835992 : (arr_4 [i_0]))))));
                            var_11 = ((-2013869307 ? (arr_5 [i_2] [i_2] [i_1] [i_2]) : 1022));
                            var_12 = (max((((arr_6 [i_2] [i_2] [1]) ? ((var_7 ? 64513 : 27466)) : 1)), ((var_6 % (var_5 != var_6)))));
                        }
                    }
                }
                var_13 = (((((1 ? 1792 : 0))) ? ((var_0 ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [1]))) : (min((arr_8 [i_1] [i_1] [i_0] [i_0]), (arr_8 [0] [i_1] [i_0] [i_1])))));
            }
        }
    }
    var_14 = (((((var_4 ? ((var_2 ? (-2147483647 - 1) : var_3)) : (max(var_2, 49319))))) ? var_6 : ((32638 ? 16646144 : 0))));
    var_15 = var_0;
    #pragma endscop
}
