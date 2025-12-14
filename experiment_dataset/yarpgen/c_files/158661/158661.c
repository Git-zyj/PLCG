/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [1] = 3433857320413289994;
        var_12 &= 26543;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 = (min(var_13, ((min(((3220578102 << (8191 - 246))), ((((113 & 47112) ? (18423 & 1) : ((max(1, 7454)))))))))));
            arr_7 [i_0] [i_1] = (((max(((7454 ? 436794045236290251 : 4)), -55)) >> (((~18424) - 18446744073709533174))));
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_14 *= ((-10463 ? 1413207595 : 7480));
            var_15 = (max((max((max(3366618453, 739740512)), (38993 & 26543))), (!22132)));
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_16 += -7;
            var_17 = (~231);
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 10;i_7 += 1)
                {
                    var_18 *= ((1016 ? 38992 : 17054));
                    var_19 = 14;
                }
                arr_23 [i_3] [i_5] &= ((248 ? 106 : (4294967295 ^ 3104684186176745197)));
                var_20 = (max(var_20, 1));
            }
            var_21 |= (-1016 <= 4294967295);
            var_22 |= (!-4389733005833029646);
        }
        var_23 = (~1);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_28 [i_8] = ((!(251658240 / -645018637192390165)));
        var_24 = (min(var_24, 8452035919963497211));
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1)
    {
        var_25 = ((14795 ? (((((1172554687 ? 180 : 8452035919963497211))) ? -88 : -215)) : 168));
        arr_31 [i_9] &= max(40, (min(6723343987792390445, ((min(-592139732746020767, 8473837765092583034))))));
    }
    var_26 = ((11752 & (max(22685, (min(67561620326497681, 1))))));
    var_27 = ((var_0 || ((max(1277526935, (max(2785156775, -95)))))));
    #pragma endscop
}
