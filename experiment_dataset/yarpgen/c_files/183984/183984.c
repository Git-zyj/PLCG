/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = ((!((min(((-100 ? 0 : 66)), (((arr_7 [i_1] [i_1]) | 20485)))))));
                    arr_9 [6] [i_0] [i_0] [i_0] = (max(((((((arr_8 [i_0]) ? (arr_6 [10] [1] [i_0 - 1]) : -12525))) ? ((((arr_8 [i_0]) ? 11 : (arr_7 [i_1] [i_0])))) : (((arr_0 [i_0 + 1]) << (((arr_0 [i_2]) - 3964786718)))))), ((-1459975519 ? (max(15, (arr_0 [i_2]))) : -15))));
                    arr_10 [i_2] [i_1] [i_0] = (arr_8 [i_2]);
                    var_11 |= (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_12 = 9223372036854775807;
    #pragma endscop
}
