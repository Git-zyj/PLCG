/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 >= ((((((-74 ? var_14 : var_15))) || ((min(var_12, 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = (min((((var_15 / var_17) > (var_12 < var_7))), ((1 >= (~var_3)))));
                var_21 = ((((96 ? var_14 : (arr_3 [i_1 + 2] [i_0 + 1]))) != (((-((max(var_4, 1))))))));
            }
        }
    }
    var_22 = ((1 + (var_17 >= var_14)));
    #pragma endscop
}
