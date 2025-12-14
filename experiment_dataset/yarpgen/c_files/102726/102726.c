/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [13] [13] = 12348;
                    arr_8 [0] [1] [14] = (((arr_1 [i_1 - 2] [i_1]) ? var_1 : (arr_6 [i_1 - 2] [i_2] [i_2])));
                }
            }
        }
        arr_9 [i_0] = (((65535 > var_11) ? var_6 : ((41 ? (arr_2 [i_0]) : 983865198))));
        var_20 = (((arr_3 [i_0] [i_0] [i_0]) ? 215 : 7));
        var_21 = ((4294967267 ? (arr_3 [i_0] [14] [i_0]) : (arr_3 [i_0] [i_0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        var_22 = ((var_17 << (((max((max(36007, var_12)), ((max(66, (arr_5 [11] [11] [i_5 + 1])))))) - 3696904961))));
                        var_23 = (((((-2147483647 ? (var_9 | 4079104443) : ((((arr_13 [8] [15] [15]) ? (arr_16 [i_3] [i_3]) : (arr_11 [i_3] [5]))))))) ? ((~(arr_1 [i_4] [i_4]))) : ((max((arr_18 [i_3] [i_5 + 2] [i_6] [12] [i_6 + 3] [i_6]), (arr_18 [i_3] [i_5 + 2] [i_6] [12] [i_6 + 2] [i_6 + 2]))))));
                    }
                }
            }
        }
        var_24 &= (max((arr_5 [i_3] [i_3] [0]), (max(var_19, (arr_5 [12] [i_3] [i_3])))));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 = (((((10605 + 10589) ? var_1 : (max(17, 25)))) - ((((arr_20 [i_7]) ? var_11 : (arr_20 [i_7]))))));
        var_26 = (((max((arr_22 [i_7]), ((max(4294967266, 4294967295))))) - -1606070044));
        var_27 |= 10620;
        var_28 = ((var_19 * (1 == var_0)));
        var_29 = (arr_21 [i_7]);
    }
    var_30 = var_8;
    var_31 = ((((((var_3 ? var_4 : -3763451557478585908))) ? ((max(32750, 35448))) : var_1)));
    var_32 = (!var_5);
    #pragma endscop
}
