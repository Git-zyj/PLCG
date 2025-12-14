/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (0 / 31);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 += (((min(0, 4))) && (((79 ? (arr_2 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_22 = (min((max((arr_1 [12]), 0)), var_0));
            var_23 = ((((((var_2 ? 1 : (arr_2 [i_0])))) ? (!var_15) : (3 && -31))));
        }
        var_24 = (min(var_24, (((~(max((min(var_14, (arr_2 [i_0]))), (arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((((((18446744073709551615 ? var_9 : -1)))) ? ((((min(var_19, (arr_6 [19] [i_2] [i_0])))) ? -1033919723 : (((arr_0 [i_2]) * var_2)))) : (((1 / var_8) / var_4))));
                    var_25 = (min(var_25, ((((8219 == 17) % -79)))));
                    var_26 = ((min(-7838, (arr_1 [i_2]))));
                    var_27 = (min((((((min(var_13, (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? ((var_0 ? -23003 : 224)) : ((1 & (arr_6 [i_0] [6] [i_3])))))), (((arr_7 [i_0] [i_2] [i_3] [i_3]) ? 1 : (arr_7 [i_2] [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_28 = (min((arr_13 [i_4]), (min((min(0, (arr_8 [i_4] [i_4]))), 3172804105))));
        var_29 = (min(var_29, (arr_13 [i_4])));
    }
    var_30 = (min(var_30, 1));
    #pragma endscop
}
