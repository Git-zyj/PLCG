/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));
    var_16 = (((((-(var_12 <= var_3)))) || var_4));
    var_17 = max(-30949, var_9);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) != (max((((arr_1 [i_0]) / 15439)), 1))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_18 = ((((((arr_3 [i_0]) >= (arr_3 [i_1])))) ^ ((((-(arr_7 [i_0] [i_1] [i_0] [i_3])))))));
                        arr_9 [i_0] [i_0] = (i_0 % 2 == 0) ? ((max((((min(var_2, (arr_6 [i_0] [i_1] [i_0] [i_0]))) * 15440)), ((max((4294967295 / 51697), 16)))))) : ((max((((min(var_2, (arr_6 [i_0] [i_1] [i_0] [i_0]))) / 15440)), ((max((4294967295 / 51697), 16))))));
                        var_19 = 15423;
                        var_20 = ((((min((arr_5 [i_0] [i_1] [i_3 + 1] [i_3]), (arr_8 [i_0] [i_0] [i_3 + 2] [i_3])))) ? -15429 : (-7058976041652049460 & -15428)));
                    }
                }
            }
            arr_10 [i_0] [7] [i_0] = (((((-(arr_6 [i_0] [i_0] [i_0] [i_1])))) || ((max(var_7, ((max(var_5, (arr_7 [i_1] [i_0] [i_0] [i_0])))))))));
            arr_11 [i_0] [i_1] [i_0] = ((((~(~var_13))) & (((((arr_6 [i_0] [i_1] [i_0] [i_0]) || var_3))))));
            var_21 = ((((((arr_6 [i_1] [i_1] [i_0] [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_0] [i_1])))) ? (arr_6 [i_0] [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
            var_22 *= (arr_8 [i_0] [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_23 = (((((arr_4 [i_0] [i_0]) ? var_8 : (arr_1 [i_4]))) + (((-16064 >= (-32767 - 1))))));
            var_24 = arr_12 [i_0] [i_4];
            arr_15 [i_0] [i_4] [i_4] = (((arr_1 [i_0]) ^ (arr_3 [i_0])));
            var_25 *= (((arr_12 [i_4] [i_4]) ? -7058976041652049457 : var_9));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_26 = (min(var_26, 5822));
            var_27 = (min(var_27, (((((arr_12 [i_5] [i_5]) && -0)) ? ((((var_0 != ((var_5 ? var_6 : 1)))))) : (max(18446744073709551590, 1))))));
            var_28 = 17201;
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_29 ^= (23 || -7058976041652049460);
                        var_30 = ((-((-(arr_12 [i_0] [i_6 - 1])))));
                    }
                }
            }
        }
        arr_25 [i_0] = ((-((0 ? 5259702885427793322 : (max(18446744073709551582, -1))))));
    }
    #pragma endscop
}
