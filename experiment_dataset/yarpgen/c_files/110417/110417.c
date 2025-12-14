/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((-((var_5 ? var_2 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((min(var_6, (arr_3 [i_0] [i_0] [i_1])))) == (((arr_1 [i_0]) ? (arr_0 [i_1]) : (arr_3 [i_0] [i_0] [i_0])))));
                var_13 = ((~(((((~(arr_3 [i_1] [i_0] [i_0])))) ? ((((arr_2 [i_0] [i_0]) != (arr_3 [i_0] [i_1] [i_1])))) : 4092))));
                var_14 = ((((((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0]) : (arr_2 [1] [1]))) << (((arr_3 [i_0] [1] [i_0]) - 46421)))));
                arr_6 [i_0] [i_0] [i_0] = ((((+(((arr_4 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [9]) : var_3)))) >> ((min(((((arr_0 [i_0]) == 0))), (arr_1 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
