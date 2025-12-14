/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((min(8561521770823468408, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = (((((246 ? (((9 ? (arr_1 [i_0]) : (arr_0 [i_0])))) : (((arr_4 [i_0]) ? var_0 : 15559417822067696605))))) ? (max(((max(219, 65519))), (37031 + var_2))) : (((var_9 ? (arr_1 [i_0]) : ((((arr_1 [i_0 - 2]) != var_3))))))));
                var_14 = var_0;
                arr_6 [i_0 - 1] [i_0] = ((28504 ? (((246 ? (arr_4 [i_0]) : (arr_4 [i_0])))) : (((-32767 - 1) ? ((var_5 ? (arr_2 [i_0] [8]) : 2741412009491899042)) : (min(var_2, (arr_3 [i_0 - 1] [11])))))));
                arr_7 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
