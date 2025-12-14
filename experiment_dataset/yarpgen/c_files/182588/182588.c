/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1 + 1] = ((min(1349487393, 823602147)));
                arr_5 [i_0] = (max(((-var_5 | ((74 ? var_4 : -4627)))), ((((((~(arr_0 [i_0])))) ? var_0 : 1491393013)))));
                arr_6 [i_1] [i_0] [i_0] = 39005;
            }
        }
    }
    var_13 = (min(var_13, ((min((--5341), (((((max(26539, -88)))) - var_10)))))));
    #pragma endscop
}
