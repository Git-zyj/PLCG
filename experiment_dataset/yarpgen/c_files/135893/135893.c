/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? ((~((-85 ? var_11 : -2115058508149335206)))) : (((((!4095) < var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_1 + 1] = (arr_2 [i_0]);
                var_13 = var_3;
                var_14 = (max(var_14, (((((-2115058508149335204 <= (min(18446744073709551604, -2115058508149335205)))) ? -22088 : -8263)))));
            }
        }
    }
    var_15 = (min(var_15, var_8));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                var_16 = (max(var_16, var_5));
                var_17 = (max(((~(arr_5 [i_3 - 1] [i_3 - 2] [i_3 - 2]))), ((7522140135552410087 ? (min(var_6, var_1)) : ((min((arr_6 [i_2]), (arr_2 [i_3 + 1]))))))));
            }
        }
    }
    #pragma endscop
}
