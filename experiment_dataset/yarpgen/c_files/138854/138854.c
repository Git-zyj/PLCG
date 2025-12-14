/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((((((~91) == var_0))) < ((~(arr_3 [i_0] [i_0])))));
                arr_8 [i_0] [i_1] = (((arr_0 [i_0]) > (arr_0 [i_0])));
            }
        }
    }
    var_12 = ((((32767 != ((var_3 ? var_6 : var_10)))) ? (((var_4 ? var_3 : var_5))) : ((max(var_9, (var_9 > var_6))))));
    var_13 = var_5;
    #pragma endscop
}
