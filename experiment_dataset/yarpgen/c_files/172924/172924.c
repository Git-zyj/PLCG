/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_3, ((var_1 ? var_7 : var_8))))) ? var_12 : var_16));
    var_21 = (min(var_21, var_5));
    var_22 = (max(var_22, ((min(((((var_6 << (var_5 + 108))) << (var_11 - 2145975727))), ((min(-5859382714947549543, var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= (min((((2147483647 % 1) ? (103 + 5859382714947549559) : 1)), (((~(min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))))))));
                arr_5 [i_1] [12] = ((((((((var_12 - (arr_0 [i_0] [2])))) ? (((min(103, 175)))) : (arr_2 [i_0] [i_0] [i_1])))) || (((103 + 103) || (((arr_2 [i_0] [i_0] [i_1]) < (arr_2 [3] [i_1] [i_0])))))));
            }
        }
    }
    var_23 = ((var_4 == (((((2126569140 ? 14385 : 32767))) ? var_17 : var_11))));
    #pragma endscop
}
