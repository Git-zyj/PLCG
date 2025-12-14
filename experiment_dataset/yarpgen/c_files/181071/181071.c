/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-(max(15, var_4))))) ? (var_3 - var_2) : ((-(-2464055675026437721 - var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [18] [i_1] = var_2;
                var_11 |= (((((arr_3 [12]) - (arr_3 [i_0])))) ? (var_6 - 0) : (((18446744073709551615 - 126) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0] [12]))));
                var_12 = ((-(max(76, (arr_5 [i_1])))));
            }
        }
    }
    var_13 = ((((max(var_5, ((var_5 ? 0 : var_3))))) ? (((var_9 ? var_6 : -var_5))) : ((((max(var_5, var_8))) ? 59 : 985178033))));
    #pragma endscop
}
