/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 ^= ((!(arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                {
                    var_14 = ((((~(arr_8 [i_3 + 2] [i_3] [i_3 + 1] [i_3]))) * -640843761));
                    var_15 = (max(var_15, -640843763));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_16 = (max(var_16, ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_7 + 6172966522471785863))))));
                        arr_16 [i_6] [i_4] = ((~(max(((var_12 + (arr_6 [i_4]))), 281474976709632))));
                    }
                    var_17 = (((var_7 ? (arr_5 [i_1 - 1]) : var_10)));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_18 = (arr_10 [i_7] [i_7]);
        var_19 = (max((((min((arr_7 [i_7] [i_7 - 2]), var_8)) >> (((arr_17 [1]) ? var_3 : var_7)))), (((-(max((arr_18 [i_7] [i_7]), (arr_15 [i_7] [10] [i_7] [6]))))))));
        var_20 ^= min(1, 4533363618428824146);
    }
    var_21 = ((((222 >> (-809199197 + 809199222))) >> (((((var_11 ? var_8 : -6494608779480773886)) != 567345184)))));

    for (int i_8 = 1; i_8 < 19;i_8 += 1)
    {
        var_22 = (((~(min(6494608779480773892, 7)))));
        var_23 = (max(var_23, (((var_3 ? ((((arr_1 [1] [i_8]) << ((((var_5 << (var_5 - 17956639318434073433))) - 5561395783988674552))))) : (max((((arr_1 [14] [i_8]) ? var_5 : var_2)), (arr_21 [i_8 + 3]))))))));
        arr_23 [i_8] [1] = ((~(min(var_11, (arr_2 [i_8 + 3])))));

        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_24 = ((+((((((-640843761 + 2147483647) >> 0))) ? 1533372353 : var_11))));
            arr_27 [12] [4] &= var_6;
        }
    }
    var_25 = (min(var_25, (((((((~157) ? var_11 : 71))) + var_4)))));
    var_26 = ((((9077308234717977044 ? 222 : 1)) * ((1 / ((1 ? 640843760 : 8823920004438546183))))));
    #pragma endscop
}
