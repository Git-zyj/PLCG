/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [2] [i_2] = ((-(arr_4 [i_0 + 1])));
                    arr_10 [i_1] = ((((min((arr_6 [i_0] [i_0 - 1]), ((-42 ? -42 : 11))))) && ((((((-67 ? 1452632908205627288 : -2043994085))) ? (~190) : 7202236948093028632)))));
                    var_18 *= ((~(arr_5 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
