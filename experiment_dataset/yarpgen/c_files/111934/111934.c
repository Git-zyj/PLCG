/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -26194;
        arr_3 [i_0] [i_0] = ((1 ? 2839211830 : (((var_10 ? var_8 : 0)))));
        arr_4 [i_0] = (--212);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 *= (+-7873);
                    arr_13 [i_0] [i_0] [i_0] = (~(!var_9));
                    var_13 = (!4088);
                }
            }
        }
        arr_14 [i_0] [i_0] = (--4114763971802128876);
    }
    var_14 = ((-(~var_7)));
    var_15 = ((~(((!((max(var_11, var_1))))))));
    var_16 = (var_10 / var_6);
    #pragma endscop
}
