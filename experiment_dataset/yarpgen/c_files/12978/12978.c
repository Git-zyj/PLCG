/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((((max(var_11, (arr_0 [15])))) ? (1 && 1) : (((!(arr_2 [i_2]))))))) != (min(4821971976251804880, (~-32767))));
                    var_19 = arr_7 [i_2] [18] [i_0] [i_0];
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
