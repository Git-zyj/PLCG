/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = ((((min((arr_3 [i_0]), -20))) ? (~2016) : ((((min((arr_2 [i_0] [i_1]), -28026))) + 127))));
                arr_4 [i_0] [i_1] &= (max((max(41, (arr_1 [i_0] [i_1]))), ((min(118, 39630547)))));
            }
        }
    }
    var_17 &= var_4;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_3] = ((((max(2147483647, (arr_10 [i_2] [i_3])))) ? ((((arr_1 [i_2] [i_2]) ? (arr_2 [i_2] [i_3]) : 0))) : ((178 ? -1 : 123))));
                var_18 |= -12704;
            }
        }
    }
    #pragma endscop
}
