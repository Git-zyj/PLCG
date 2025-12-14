/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (min(((((arr_3 [i_1] [i_1]) && (((14458347229388463754 * (arr_2 [i_0]))))))), (((((~(arr_5 [i_0] [i_0] [i_0])))) ? (((max(121, var_4)))) : (min((arr_0 [i_0]), (arr_5 [i_0] [i_0] [i_0 + 2])))))));
                arr_7 [i_0 + 2] [i_0 + 2] &= (((((-(arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((arr_2 [i_1 - 2]) - (arr_2 [i_0]))) : ((((!(arr_3 [i_0] [i_1 + 2])))))));
            }
        }
    }
    var_15 = min(var_2, var_5);
    #pragma endscop
}
