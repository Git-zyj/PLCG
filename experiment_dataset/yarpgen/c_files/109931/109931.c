/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, -754502643348512678));
                    var_12 = arr_6 [i_0] [i_0] [i_0];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_13 &= ((((max(62006, -9))) & 59811));
                    var_14 ^= (arr_12 [i_3]);
                }
                var_15 ^= (!(((~(arr_10 [i_3])))));
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
