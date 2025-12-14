/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 ^= (max((max(((max((arr_1 [i_0]), (arr_2 [i_0])))), (max(-16239, 4)))), ((max(((min((arr_1 [i_0]), (arr_1 [i_0])))), (min((arr_0 [i_0]), (arr_1 [i_0]))))))));
        arr_3 [i_0] = (min((max(((min(var_8, (arr_1 [i_0])))), (max(var_12, var_7)))), ((max((max(-16239, -5)), ((min(var_2, -16226))))))));
        var_16 = (min(-1, 0));
        arr_4 [i_0] &= (min((max(((min((arr_1 [i_0]), -2))), (max(522240, var_3)))), ((max(((max(var_0, (arr_0 [i_0])))), (min(-16239, 4022945826)))))));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (max((min((max((arr_6 [i_1]), (arr_5 [i_1]))), ((max((arr_5 [i_1]), (arr_5 [i_1])))))), ((min((min(522240, var_9)), (min(4294445055, -119)))))));
        arr_7 [11] [i_1] = max((max((max(var_3, (arr_6 [i_1]))), (max(var_10, (arr_6 [i_1]))))), (min((max((arr_6 [i_1]), (arr_6 [i_1]))), (max((arr_6 [4]), 4611677222334365696)))));
        var_18 = (min(var_18, ((max((max((min((arr_6 [i_1]), var_1)), (max(7767202994404121115, (arr_6 [i_1]))))), (min(((max((arr_5 [i_1]), (arr_5 [i_1])))), (min(3046112619357183550, 4294967290)))))))));
        var_19 = min(((max(((min(272021467, 1))), (max(-1, var_3))))), (min(1, (max(18173414504885324814, -21241)))));
        var_20 = (min(((max(1, 1))), (min(522240, 2788738854))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 += (max((min((min(var_6, var_7)), (max(4611677222334365696, var_5)))), (max((min(var_3, var_6)), ((max(16, (arr_9 [i_2]))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_19 [i_2] [i_3] [i_3] [i_5] [i_2] [i_5] = (max(((min(((max(var_2, (arr_0 [i_2])))), (max(var_11, (arr_18 [i_2] [i_3] [i_3] [i_3])))))), (min(((max((arr_13 [i_5] [i_3] [i_2]), (arr_18 [i_3] [i_3] [i_5] [i_3])))), (min((arr_14 [i_3] [i_3]), (arr_16 [i_3] [i_3] [i_4] [i_5] [i_5] [i_2])))))));
                        arr_20 [i_2] [i_3] [i_3] [i_3] = (min(2, 16));
                        var_22 = (max((min((min(21, var_11)), ((min((arr_12 [i_2] [i_2] [i_2]), -29690))))), (max((min(-7001520785933186087, var_3)), (min(476571256700348118, 196487890))))));
                        var_23 = (min((max(-1, -3234188178816484594)), (max(((min(var_5, (arr_18 [i_2] [1] [i_4] [1])))), (min((arr_6 [1]), var_3))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
