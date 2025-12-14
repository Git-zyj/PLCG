/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_0 [11]);
        var_13 ^= ((-4335586524226801666 > 4165908456) / (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 ^= (max(((((((98 != (arr_3 [10])))) >> ((((~(arr_5 [i_1]))) - 955566234554244639))))), (((min(-1499867953, 2412139751)) | (arr_4 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_15 = (((((((1 ? var_9 : 1))) || var_10)) ? 2711830303 : ((((!((max(var_6, (arr_10 [i_1] [i_2] [5] [0] [i_4]))))))))));
                        var_16 ^= (arr_1 [0]);
                        var_17 = ((+(((((arr_7 [11] [i_1]) ? var_8 : (arr_5 [i_1])))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_16 [7] = ((var_1 ? (((((arr_13 [i_5]) - (arr_7 [i_5] [i_5]))))) : ((24 * (~1)))));
        var_18 = ((~((var_7 + ((max(var_2, (arr_7 [i_5] [11]))))))));
        arr_17 [i_5] = ((((max((-2147483647 - 1), ((1 ? 254 : 8997))))) ? ((31208 ? 1882827530 : 1904606722295667227)) : (((-(arr_11 [i_5] [i_5]))))));
        arr_18 [i_5] = ((((((!24) ? var_2 : (max((arr_1 [i_5]), 150389402))))) ? (!56538) : (!34359738367)));
    }
    var_19 = var_5;
    #pragma endscop
}
