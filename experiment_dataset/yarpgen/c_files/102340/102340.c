/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 |= (((max(0, 9223372036854775807)) * (((max((var_13 < -7633614743291608163), (var_0 != 64860)))))));
                        var_21 += (((max(var_8, (arr_2 [i_1] [6])))));
                    }
                }
            }
        }
        arr_11 [i_0] = var_11;
    }
    var_22 = (!64860);
    var_23 = 941658138544556536;
    var_24 = (var_1 > var_7);
    #pragma endscop
}
