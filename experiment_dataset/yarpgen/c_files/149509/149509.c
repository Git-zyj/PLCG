/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (((min(var_3, (var_13 > var_6))) ? var_13 : ((((((var_13 ? var_12 : var_5))) > ((124980789 ? -1 : 18446744073709551615)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 ^= (arr_1 [i_0 + 2]);
        var_17 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (((124980789 ? (arr_4 [i_1] [i_1 + 3]) : (var_2 ^ var_5))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = ((-85 ? 77 : -41));
                    var_19 = (((arr_4 [i_1 - 2] [i_1 + 2]) << (var_6 - 6221182387056556004)));
                }
            }
        }
        var_20 = ((var_12 ? -67 : (arr_9 [i_1] [i_1] [i_1])));
        arr_14 [i_1] = 4169986485;
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_21 = ((var_8 ? (((~14143992160179042193) ? var_0 : 69)) : ((((max(161, 1))) ? 210 : 5429))));
        var_22 = (max((((var_2 > var_10) ? ((max(74, 65511))) : var_1)), (((!(-32767 - 1))))));
    }
    #pragma endscop
}
