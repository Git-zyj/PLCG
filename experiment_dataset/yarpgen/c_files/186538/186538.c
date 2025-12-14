/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((((arr_6 [i_0] [i_1]) < (arr_0 [i_0] [i_0]))));
                var_19 = (max(2147483647, 5));
                var_20 = (((((arr_3 [i_0]) - (arr_3 [i_0]))) + (arr_3 [i_0])));
                var_21 = ((~(((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        }
    }
    var_22 |= (((((((min(var_10, 1))) + var_4))) >= (((((var_6 ? 36441 : 19))) ? (!var_3) : (min(0, var_10))))));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_23 = (min(var_23, ((max((((arr_8 [i_2 - 3]) ? (((0 && (arr_2 [i_3] [i_2])))) : ((min((arr_0 [i_2] [4]), (arr_0 [i_2] [10])))))), var_3)))));
                var_24 += (arr_5 [i_2 - 1] [i_3] [i_3]);
                var_25 = (((((min((arr_5 [i_2 - 2] [i_2] [i_2 - 2]), (arr_0 [2] [14]))))) ? ((((arr_5 [i_2] [i_2] [i_3]) && (arr_3 [i_2 - 2])))) : ((((1 ? 1 : 1)) >> -0))));
                arr_11 [i_3] = arr_10 [i_3];
                var_26 = (arr_6 [i_3] [i_2]);
            }
        }
    }
    #pragma endscop
}
