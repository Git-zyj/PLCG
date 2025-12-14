/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_13 = (((((var_8 + var_8) ? (arr_2 [i_0]) : var_3))) ? var_1 : ((((arr_0 [i_0 - 1]) ? ((max((arr_0 [i_0]), 79))) : ((max(var_5, 13946)))))));
        arr_3 [i_0 - 1] [i_0] &= (-1501220785 + 65534);
        var_14 = (min(var_14, (arr_1 [i_0 - 2] [i_0 + 1])));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_15 = (max(var_15, (((((!(((34590 ? 159 : var_4))))))))));
            var_16 = (((((-1977131118 ? (((var_2 ? var_8 : 2584592294))) : (arr_5 [i_1])))) ? (((arr_5 [i_1]) ^ ((1257380828 ? -4117624845652642291 : -158851267)))) : ((var_7 ? (-9223372036854775807 - 1) : (arr_2 [i_0])))));
        }

        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            arr_8 [i_0] [i_0 - 1] [i_0 - 1] = (((min(var_1, (arr_0 [i_0 - 2])))) ? (min((((arr_2 [i_0]) + var_9)), var_9)) : -712207815377568058);
            var_17 = (((((155170006615903915 ? 254 : 3830))) ? var_1 : ((((max(12237, -1048576))) ? (!var_4) : (min(var_6, 1390079412))))));
            arr_9 [i_0] [i_2] [i_2] = (min((arr_4 [i_2 - 1] [i_2 - 2]), -3861673152180961169));
            arr_10 [i_2 - 1] [i_2 - 2] = ((49036 - 14787010596725526809) ? ((((((arr_6 [i_0] [i_0 - 2]) ? var_9 : (arr_5 [i_0])))) ? (arr_2 [i_2 + 1]) : var_6)) : (arr_5 [i_2]));
            arr_11 [i_0 - 2] = (((((((((arr_4 [i_0] [i_0]) - var_9))) ? -8526 : -var_0))) - ((46640 ? (((-1 ? -1 : 39296))) : ((2906651698 ? 5656436210597730010 : var_6))))));
        }
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_18 = (((arr_7 [i_3]) | (min(((var_2 / (arr_0 [i_3]))), ((max(var_10, var_2)))))));
        arr_16 [i_3] [i_3] = ((((max(var_2, var_8))) ? (((arr_0 [i_3]) ? (arr_0 [i_3]) : 30786325577728)) : ((((arr_0 [i_3]) << (((arr_0 [i_3]) - 65)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 11;i_5 += 1)
            {
                {
                    arr_22 [i_3] [i_3] [i_4] = ((((min((arr_20 [i_3] [i_4] [i_5 + 2]), var_10))) ? var_5 : 55874));
                    arr_23 [i_3] [i_3] |= ((((min((((var_4 ? (arr_14 [i_3]) : var_7))), var_0))) ? ((((((var_4 ? var_9 : var_7))) ? (arr_7 [i_4]) : ((25430 ? -3731849091447987022 : -21))))) : (min((arr_19 [i_4] [i_5 + 2]), var_4))));
                    var_19 = ((((~(((arr_19 [i_3] [i_4]) ? var_1 : var_1)))) >= (arr_14 [i_5 - 1])));
                }
            }
        }
    }
    var_20 = var_8;
    var_21 = (min(((var_5 - ((var_2 ? var_2 : 27732)))), var_1));
    var_22 = (max(var_22, (((((max(var_11, (~var_4)))) ? var_9 : var_4)))));
    #pragma endscop
}
