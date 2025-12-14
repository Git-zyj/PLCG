/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 += 1;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (arr_0 [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_16 = (((((((max((-9223372036854775807 - 1), var_6))) ? (arr_2 [i_0] [i_1]) : (((arr_0 [14] [5]) ? var_12 : 0))))) ? ((-8961119939870050440 ? 204 : -9223372036854775794)) : (((arr_5 [i_0] [i_1]) << (((arr_0 [i_0] [i_0]) - 12234762370038700287))))));
                var_17 = (max(var_17, -var_6));
                var_18 = ((13 ? -2806714 : 0));
                arr_10 [i_2] [i_2] [i_2] [i_2] = (arr_3 [i_0]);
            }
            var_19 = ((((max(((3852 << (((arr_0 [11] [23]) - 12234762370038700289)))), (arr_4 [i_0])))) / 9218572445075214904));
            var_20 = (arr_9 [8] [16] [8]);
        }
    }
    var_21 = ((((((var_10 ? var_7 : 54))) ? ((var_6 ? 2813 : -7474191936536332720)) : (((var_8 ? var_13 : var_11))))));
    var_22 = (max(var_22, ((min((((0 - 59) + (min(var_11, var_10)))), var_4)))));
    var_23 = (((var_6 ? 54 : ((85 ? 2813 : var_4)))) & 2810);
    #pragma endscop
}
