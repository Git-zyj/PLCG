/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((arr_1 [i_1]) ? ((max((max((arr_0 [1]), (arr_3 [i_1 + 2] [i_0] [i_1]))), (min(var_12, var_11))))) : (((arr_1 [i_1 + 3]) ? ((min(4074969008, -1233421613))) : ((-158475524565744192 ? 7907812068475653099 : (arr_1 [i_1]))))))))));
                var_17 = ((((((arr_1 [i_1 - 1]) ? (arr_0 [i_1 + 3]) : (arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? 16480371363799359060 : (arr_3 [i_0] [i_1 + 2] [i_1 + 3])));
                arr_4 [i_1] = ((max((arr_1 [i_1 + 1]), var_0)));
            }
        }
    }
    var_18 *= max((((-24150 / 7685337218795891760) ? var_9 : var_8)), (!-4202609103));
    var_19 |= ((var_11 ? (var_2 ^ 15141184617334329166) : var_7));
    #pragma endscop
}
