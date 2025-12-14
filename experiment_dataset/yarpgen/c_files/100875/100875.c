/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 *= ((~(arr_4 [1] [i_1])));
                arr_5 [i_0] = ((!((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                arr_6 [i_0] [i_0] [2] = (((((((((arr_3 [i_0] [10] [6]) && (arr_4 [i_0] [i_1]))))) <= (arr_2 [i_0] [i_0] [i_0]))) && 1829603151));
                arr_7 [2] [i_0] = ((2999628860 ? -1 : (arr_0 [i_0] [1])));
                var_11 = (min(var_11, (((((1894934679 ^ var_7) ? (arr_4 [i_0] [i_1]) : (!14303634106057825121)))))));
            }
        }
    }
    var_12 += ((!(((((14303634106057825119 ? var_6 : var_3)) * (!var_4))))));
    #pragma endscop
}
