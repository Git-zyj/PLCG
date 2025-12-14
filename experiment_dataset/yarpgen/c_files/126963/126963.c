/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 &= (arr_0 [i_1]);
                    var_17 = (min(var_17, (arr_1 [i_0])));
                    arr_6 [i_0] [i_1] = 18445180440104350044;
                    var_18 = 1125914890192048122;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (arr_5 [i_2]);
                        var_20 = 234;
                    }
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] = 49;
                        var_21 = 88;
                    }
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
