/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_9, (max(6, 6))));
    var_12 = (min(var_12, ((max(6, 8)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (max(((((32427 || var_0) ? ((((arr_0 [i_0]) ? 31966 : var_5))) : var_9))), (min(352401315, 0))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((-((929094999 ? var_5 : (arr_4 [i_1]))))) > (min((max(19, var_3)), (arr_4 [i_1])))));
                    var_13 ^= ((!((((((((arr_6 [i_0] [i_1] [i_1]) >= (arr_0 [i_0]))))) + -0)))));
                }
            }
        }
        var_14 -= var_2;
    }
    var_15 = (((((min(1, 2)) % (((var_3 ? var_1 : 93))))) >= (var_5 % var_8)));
    #pragma endscop
}
