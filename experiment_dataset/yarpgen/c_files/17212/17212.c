/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-var_11, var_7));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 ^= (((((((((-11344 == (arr_2 [i_1] [i_1] [i_0]))))) >= (6930555773113384595 ^ 151)))) > ((-(arr_2 [i_0] [i_0] [i_0])))));
                arr_4 [i_1] [i_0] = (~4294967274);
            }
        }
    }
    #pragma endscop
}
