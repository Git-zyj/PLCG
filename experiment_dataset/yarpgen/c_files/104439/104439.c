/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = ((((((((arr_3 [i_1]) ? 19846 : var_10))))) >= (min(220, -3638012335845905484))));
                var_18 *= (min(((min(((var_9 ? var_10 : (arr_3 [i_0]))), ((((arr_4 [i_0] [i_0]) ? var_15 : (arr_1 [i_0] [i_0]))))))), ((27104 ? 3638012335845905492 : (((min(214, -12))))))));
            }
        }
    }
    var_19 = var_5;
    var_20 = ((~(1 | 1)));
    var_21 = var_7;
    #pragma endscop
}
