/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 *= ((min(7916390188515784400, -36)));
                        var_20 += (arr_7 [i_0] [1] [i_2]);
                        var_21 = arr_7 [1] [i_2] [i_2];
                    }
                    var_22 = (arr_8 [i_2]);
                    var_23 = (min(var_23, (((max(178, 1119490119667758276))))));
                }
            }
        }
    }
    var_24 = ((max((min(1119490119667758276, var_17), (min(1, -7916390188515784405))))));
    var_25 = 4167519633;
    var_26 = var_6;
    #pragma endscop
}
