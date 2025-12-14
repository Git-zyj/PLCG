/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(89, (((max(8215007769145281990, 3714829849018169340)) | (var_8 & var_9)))));
    var_12 = (max((((min(var_9, -1075862233)) - var_2)), (min((!2616435944), (max(var_9, 11233))))));
    var_13 = (((((var_7 << (1023 - 995))) < ((var_7 << (var_4 - 1935727721))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (~var_9);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 ^= max((116464218 % var_4), var_7);
                        var_16 = (~-var_9);
                        arr_12 [i_0] [i_0] = (max(3383932069, (var_5 % 241)));
                        arr_13 [i_0] [i_0] [i_0] [i_3] [i_2] [i_0] = -1;
                    }
                }
            }
        }
        var_17 = (min(var_17, 4372));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_18 = (((!var_7) & 60));
        var_19 = (((-1 && var_10) ? 102711232 : (((min(var_3, var_3)) * (var_10 == 1045)))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    {
                        var_20 = (min(var_20, (1926396277 < 1)));
                        var_21 = (min(var_21, ((max((max(((max(131, -506072398))), 17604280931791562354)), (max(var_3, var_5)))))));
                        var_22 = (max((max(1, 16777215)), (!var_8)));
                        var_23 = (((min(84766981, (((var_6 ? var_7 : -29684))))) == ((((max(var_10, 3114857967)))))));
                    }
                }
            }
        }
        var_24 = -5116;
        var_25 = -var_1;
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_30 [i_9] = ((!((((((-90 ? var_9 : var_9))) ? var_6 : 16877539524396079062)))));
        arr_31 [i_9] [i_9] = (!((!(~var_6))));
    }
    var_26 = ((var_8 & ((~(-12 / 410522802)))));
    #pragma endscop
}
