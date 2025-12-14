/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((max(-2176, (arr_0 [i_0]))));
        var_21 -= ((+(min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_22 = (max((~7763741610393581466), ((((arr_1 [i_0]) != (arr_1 [i_0]))))));
        var_23 = var_13;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_24 = (+((min((arr_4 [i_1]), (arr_4 [i_1])))));
        arr_5 [i_1] [i_1] = ((((((arr_0 [i_1]) ? 15368978281992786466 : (arr_0 [i_1])))) ? ((2794832876549104552 ? 41079 : 2794832876549104557)) : (arr_0 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_25 = (((arr_3 [i_2] [i_2]) * (arr_7 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_26 = (((arr_7 [i_4] [i_2]) ? (arr_7 [i_3] [i_4]) : (arr_1 [i_2])));
                    var_27 = (17759306625950428626 != var_18);
                    var_28 -= 2794832876549104558;
                    var_29 = (!2794832876549104542);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_20 [i_2] [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_0 [i_2]);
                        var_30 ^= 1;
                    }
                }
            }
        }
        var_31 = (min(var_31, ((((0 == (arr_15 [i_2] [i_2])))))));
        var_32 = (arr_3 [i_2] [i_2]);
    }
    var_33 = var_19;
    var_34 ^= var_9;
    #pragma endscop
}
