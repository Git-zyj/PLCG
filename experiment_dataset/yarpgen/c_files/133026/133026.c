/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_7;
                arr_5 [i_0] [i_1] [i_1] = (arr_2 [i_1]);
                arr_6 [i_0] [9] [i_1] = ((arr_0 [9] [9]) ? 134152192 : ((((3604574988 ? 3604574988 : (arr_2 [i_0]))) + (arr_0 [i_1] [i_0]))));
            }
        }
    }
    var_11 = var_10;
    var_12 = (min(((-6679766872388364278 ? (!var_5) : (!var_2))), (3604574988 || var_4)));
    #pragma endscop
}
