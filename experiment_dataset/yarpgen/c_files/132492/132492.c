/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_4, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(((max(((2730416486 ? (arr_1 [i_1] [i_1]) : -17361)), (arr_0 [i_1])))), ((241 ? var_7 : 1564550810))));
                var_16 = ((39500 ? (((((0 + (arr_2 [i_0] [i_1] [i_1])))) ? (max(-5393803345098574833, 14980)) : (((var_11 ? 1564550828 : var_2))))) : ((((arr_0 [0]) ? (((arr_3 [i_0] [i_1]) ? var_12 : 1564550810)) : (!var_6))))));
                var_17 = (max((250 || var_10), (arr_2 [i_1] [i_1] [i_0])));
            }
        }
    }
    #pragma endscop
}
