/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = 1255534767;
                    var_14 = ((((22 >> ((((arr_5 [i_2] [i_1] [i_0]) == (arr_3 [i_0] [i_1])))))) == (4 || -72)));
                }
            }
        }
    }
    var_15 *= var_0;
    var_16 *= (var_1 / 18446744073709551615);
    #pragma endscop
}
