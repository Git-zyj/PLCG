/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((0 ? -7410120256054962582 : 32767)) ^ (9223372036854775807 == 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((((!(5319286690494756797 / -1))))) + ((~(((arr_4 [i_0]) ? (-2147483647 - 1) : (arr_1 [i_0]))))));
                arr_8 [i_1 - 1] [i_0] = (((19582 && 18446744073709551615) ? 1 : ((1 ? 10869 : (arr_6 [i_0 + 2] [i_1 + 1])))));
            }
        }
    }
    var_22 = ((2147483647 ? 0 : 17303379988450954221));
    #pragma endscop
}
