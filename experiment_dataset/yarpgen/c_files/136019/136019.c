/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [20] [i_2] |= (min(57, 5));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 -= max((max((max(1, (-9223372036854775807 - 1))), ((min((arr_10 [i_0] [i_1] [i_0] [i_3 - 2] [i_4] [i_1]), var_15))))), (min(((max((arr_7 [i_3] [i_3] [i_3]), var_6))), (max(2764577836314374143, var_0)))));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [i_2] = (max((max(((max(65530, 57))), (min(52, 121266436)))), 60554));
                            }
                        }
                    }
                    var_21 &= (max((min(((min(var_14, 1991806179))), (min(-2764577836314374144, 193)))), (max(((max((arr_12 [i_0] [i_0] [i_2] [15] [i_1] [15]), 0))), (max(-2764577836314374144, 4294967285))))));
                    var_22 = (max(((max((max(-23, var_2)), (min(1, -1))))), (max((max(4194303, var_13)), ((max(38, 1)))))));
                }
            }
        }
        arr_15 [i_0] = (min((min(195, 0)), ((max((max(var_18, var_18)), ((max(137, (arr_10 [i_0] [i_0] [i_0] [2] [i_0] [i_0])))))))));
        arr_16 [1] = (max((min((min((arr_7 [4] [4] [i_0]), 2764577836314374150)), ((min(var_15, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))), ((min((max(727617370, var_0)), ((min(140, 134))))))));
        arr_17 [i_0] &= (min((max(((min(236, (arr_6 [i_0] [i_0])))), (min(var_5, var_13)))), (max(((max(199, 92))), (min(4294967285, -9))))));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = max(((min((min((arr_9 [i_5 - 2] [i_5] [i_5] [i_5 - 1]), 127)), ((min(8355840, var_0)))))), (min((max(var_13, (arr_0 [i_5 - 3]))), ((min(var_3, 4250356027))))));
        var_23 = (max((max((min((arr_18 [i_5]), (arr_6 [i_5] [i_5 + 1]))), (max(var_5, (arr_9 [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2]))))), (max((max(44611268, 37942)), 4294967169))));
        var_24 = max(((min(206, (max(57, 243))))), (max((min((arr_10 [12] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]), (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (min(var_3, var_4)))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_25 = (min(var_25, 2475636173915882580));
        var_26 = (max(var_26, 239));
    }
    var_27 = (max(var_27, ((min((min((max(2475636173915882585, var_12)), ((max(var_12, var_4))))), ((max((min(var_10, var_5)), ((max(var_17, var_16)))))))))));
    var_28 = (max((max((max(var_17, var_3)), ((max(1, 0))))), (min(((min(1, var_15))), (max(1, var_5))))));
    var_29 = (max((min(((max(107, var_17))), (max(var_9, var_16)))), ((max(1, (max(41472, 7)))))));
    #pragma endscop
}
