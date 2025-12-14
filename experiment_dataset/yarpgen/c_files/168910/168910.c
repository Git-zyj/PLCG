/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((var_14 ? (arr_0 [i_0]) : 15061919781768150328));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (((15061919781768150328 ? 705666428 : -68)))));
                        var_18 &= (var_5 | (arr_8 [i_3 - 2]));
                        var_19 = (15061919781768150328 < 13345);
                        arr_12 [1] [10] [1] [1] [i_0] = (((arr_3 [i_2 + 2]) ? (((-61 ? 2214 : (arr_9 [i_0])))) : var_14));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = (-16071 || 127);
                        var_21 -= 3384824291941401287;
                        var_22 = ((7 ? ((-1 ? -13346 : 13346)) : -68));
                        var_23 = ((+((var_1 ? (arr_13 [i_6]) : (arr_19 [i_4] [i_4] [i_4])))));
                        var_24 = ((4294967295 ? 10153 : 68));
                    }
                }
            }
        }
        var_25 = (arr_3 [i_4 - 1]);
        var_26 -= ((var_9 || (arr_10 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [3])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_31 [i_10] = (13345 & 0);
                        var_27 = 13346;
                    }
                }
            }
        }
        var_28 = (max(var_28, ((((arr_24 [i_8]) - -69)))));
    }
    var_29 = var_1;
    var_30 = ((((max(var_3, (((-8348364349205056242 ? 1023 : 156)))))) ? (-4941151063994377446 + 24995) : var_14));
    var_31 = (max(((min(((var_2 ? 13326 : var_13)), ((8787365348203593066 ? 97 : -28359))))), (((((-1450113469 ? -24996 : (-32767 - 1)))) ? var_5 : (var_15 & var_0)))));
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            {
                arr_37 [i_12] [4] = ((!(((((max(3674813497, -68))) ? ((var_9 & (arr_36 [i_13] [i_12]))) : 1)))));
                var_32 = (max(var_32, ((min((((min(var_3, var_4)) ^ (arr_32 [i_12] [i_12]))), -27372)))));
            }
        }
    }
    #pragma endscop
}
