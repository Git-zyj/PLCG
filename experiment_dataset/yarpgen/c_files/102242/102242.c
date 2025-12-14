/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((((var_1 ? (arr_2 [i_0]) : ((var_6 ? 11343047701504227474 : var_7))))) ? ((1245724563 ? 29 : 4534764097824735852)) : var_5));
                var_15 = (-(arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                var_16 ^= (((((var_6 ? ((((arr_3 [i_0]) ? (arr_0 [i_0]) : 0))) : (arr_1 [i_0])))) ? ((~((var_0 ? (arr_0 [2]) : (arr_0 [i_1]))))) : ((~(arr_5 [0] [i_1 - 1] [i_1 - 1])))));
                var_17 = ((-var_6 ? ((-1 ? 0 : var_2)) : (((-1333118792 ? (arr_5 [i_1 - 1] [1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                var_18 = ((~((var_5 ? 0 : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
            }
        }
    }
    var_19 = var_1;
    var_20 = var_0;
    #pragma endscop
}
