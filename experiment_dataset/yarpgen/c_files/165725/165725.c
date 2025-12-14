/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 &= (arr_2 [i_0]);
                var_14 = (((~(max(246290604621824, (arr_4 [i_0] [i_1]))))));
                var_15 = (max(var_15, ((((((!((max(8, var_8)))))) % (((1 != (!51)))))))));
                arr_6 [i_1] [i_1] [i_0] = var_8;
            }
        }
    }
    var_16 = ((((min(var_3, 55634))) ? ((1 ? 128 : 2777978305)) : var_7));
    #pragma endscop
}
