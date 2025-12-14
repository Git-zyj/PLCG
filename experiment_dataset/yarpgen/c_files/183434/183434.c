/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 ? (min((var_13 / var_0), ((max(var_12, (-32767 - 1)))))) : ((max((1 < var_12), 58368)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((((1 >= (arr_2 [i_0]))))) & (((((var_16 ? (-9223372036854775807 - 1) : var_13)) == ((max((arr_4 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_0] [i_0])))))))));
                var_18 = (min(((((max(32741, var_5))) ? var_8 : (arr_4 [i_1] [i_0] [i_0]))), (arr_3 [i_1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
