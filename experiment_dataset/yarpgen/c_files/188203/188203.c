/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = max(((262143 ? 1267443737 : 262143)), ((-262131 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_0]))));
                    arr_7 [i_0] [i_2] = (((((-(arr_1 [i_0] [i_2])))) && (((-(min(var_2, (arr_5 [i_0] [i_0]))))))));
                    var_11 ^= 45;
                }
            }
        }
    }
    var_12 = var_6;
    var_13 ^= var_6;
    var_14 = (((((~var_6) ? 117533662 : var_3))) ? ((((((262143 ? var_6 : var_1))) && -262139))) : 253);
    #pragma endscop
}
