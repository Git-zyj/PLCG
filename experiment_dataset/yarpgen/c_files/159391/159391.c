/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((14 | ((((min(65522, -25))) >> (var_8 - 20848)))));
    var_12 |= ((var_6 ? (((var_3 << ((var_5 ? var_7 : var_7))))) : 18));
    var_13 = ((((1 * (var_4 - var_4))) / (((var_8 + -4603022997898465554) ? (((65499 ? 1 : -23042))) : var_4))));
    var_14 = (((((var_0 + var_10) ? -var_9 : (5420342960126100071 << var_7))) ^ var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (max(((((((arr_3 [i_1] [i_1]) ? (arr_2 [i_0] [i_0]) : var_9))) ? ((max(6, var_5))) : (((arr_4 [i_0] [i_0] [i_1]) ? 1 : 1)))), (arr_1 [i_0] [i_0])));
                arr_6 [i_1] [i_0] = ((-(((((26431 ? (arr_2 [i_0] [i_1]) : (arr_3 [i_0] [i_0])))) ? (arr_4 [i_0] [i_0] [i_1]) : 65531))));
            }
        }
    }
    #pragma endscop
}
