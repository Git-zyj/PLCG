/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((min(var_1, ((2 ? 1633 : var_0))))) / ((max(var_4, 851058233)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(((-32756 ? 32743 : (max(12865, 3317316390)))), (((((((-127 - 1) & var_4))) ? ((~(arr_1 [i_0] [i_1]))) : var_5)))));
                    var_12 = (min(((max((((3443909053 != (arr_4 [i_1] [i_1])))), ((var_3 ? 65521 : (arr_0 [i_0] [i_0])))))), (min((max(2291352874799443181, (arr_4 [4] [i_2]))), var_8))));
                    var_13 = var_7;
                }
            }
        }
    }
    #pragma endscop
}
