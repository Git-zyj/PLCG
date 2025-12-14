/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_2;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = (((((1 || 0) && (7 || 255))) || ((((0 ? 1 : -1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_12 = (((32767 - 128) == 1));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_13 = (((-9223372036854775807 - 1) < -32767));
                            var_14 = (min(var_14, (7936 + 15)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
