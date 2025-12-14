/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((max((var_5 > var_4), (~var_3))))));
    var_17 = (max((min(-1822, var_6)), (var_15 <= var_1)));
    var_18 = -29503;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 = ((!((((arr_1 [6] [i_0 + 1]) ? (arr_1 [i_0 - 3] [i_0 - 3]) : (arr_1 [i_0] [i_0 - 3]))))));
        arr_2 [i_0] = (~var_11);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((((min(5530717526897291307, 1))) ? ((((!(-9223372036854775807 - 1))))) : 1))))));
                    var_21 = (((((~(((arr_0 [i_2]) ? (arr_6 [i_0] [i_1] [i_1]) : var_8))))) ? (!0) : (arr_6 [i_2] [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = var_4;
                    var_22 = (((((((var_4 >> (var_1 - 995264858)))) ? (((max(36079, (arr_7 [12] [i_1] [12]))))) : (max((arr_0 [i_1]), (arr_5 [i_0] [i_0] [i_1] [8])))))) < (max(var_5, (((arr_5 [14] [i_0] [i_1] [i_0]) ? 60107 : var_14)))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_13 [i_3] = (min(((max((arr_12 [i_3]), (arr_1 [i_3] [i_3])))), ((((max((arr_5 [i_3] [i_3] [i_3] [i_3]), (arr_7 [0] [21] [i_3])))) | ((var_9 >> (4294967276 - 4294967244)))))));
        var_23 |= (arr_0 [i_3]);
        var_24 ^= (arr_0 [i_3]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_24 [i_6] [i_6] = (arr_15 [15] [i_3]);
                        var_25 = (6395524146597382745 >> 1);
                        arr_25 [i_4] [i_6] = (((arr_17 [i_4]) + (arr_21 [i_3] [i_4] [i_5 + 1])));
                        var_26 = (var_3 ? 1 : (((((arr_22 [i_6] [1] [i_3]) * (arr_1 [i_4] [i_5 + 3]))) % (arr_11 [i_3]))));
                    }
                }
            }
        }
        arr_26 [i_3] [i_3] = var_0;
    }
    #pragma endscop
}
