/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] = (arr_6 [10] [i_1] [i_1]);
                    var_14 = (min(var_14, -14644396627188451235));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 *= var_12;
                                arr_14 [i_3] [i_3] [i_3] [7] [9] = (((min(9909608097372834676, 3650754968360723215)) | (arr_3 [4] [i_1] [12])));
                                arr_15 [i_3] = 1922759452;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (~0);
    #pragma endscop
}
