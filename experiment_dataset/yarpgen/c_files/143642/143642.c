/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_16 -= (max((min((arr_3 [10] [i_1 - 1] [i_0 + 3]), -41)), (((arr_3 [22] [i_1 - 1] [i_0 + 2]) ? (arr_3 [14] [i_1 - 1] [i_0 - 3]) : (arr_3 [20] [i_1 - 1] [i_0 - 1])))));
                    arr_8 [14] [i_1] [i_0] [i_0] = (max(7565975536257142765, (arr_0 [i_0])));
                    arr_9 [i_0] = (((min(((-(arr_3 [i_0] [i_1 - 1] [i_0]))), ((min(107, 255))))) != (((~var_8) ? var_1 : ((((arr_3 [i_0] [i_0] [i_0]) > (arr_4 [i_2] [i_2]))))))));
                    arr_10 [i_0] [i_1 - 1] [i_0] = (max(var_15, (((arr_4 [i_0 - 1] [i_1 - 1]) >> (((arr_4 [i_0 + 1] [i_1 - 1]) - 14243578365461380389))))));
                }
                arr_11 [i_0] = (!-88);
                var_17 ^= (min(3827399662703410732, var_0));
            }
        }
    }
    var_18 |= ((var_1 ? var_5 : ((~(min(var_15, var_13))))));
    #pragma endscop
}
