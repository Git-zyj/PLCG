/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 32767;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 |= ((-1992 - (min(((var_10 - (arr_2 [i_2]))), -var_10))));
                    var_14 = (max(var_14, (((63543 ? 1992 : 2675329350315541297)))));
                }
            }
        }
    }
    #pragma endscop
}
