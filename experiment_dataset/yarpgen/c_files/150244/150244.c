/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (max((max(var_17, (arr_0 [i_0 - 2]))), ((((~30389) < (arr_1 [i_0] [i_0]))))));
                    var_20 = (((~(max((arr_0 [i_0 - 2]), var_11)))));
                    arr_6 [i_0] [i_1] = (var_17 ? ((max(5539793471051899076, ((2301339409586323456 ? 2699 : (arr_1 [i_1] [i_0])))))) : (1792 / 4425878616274886672));
                }
            }
        }
    }
    var_21 = 5539793471051899086;
    var_22 = (((max(var_9, (~4))) & ((~(var_6 >= 66)))));
    #pragma endscop
}
