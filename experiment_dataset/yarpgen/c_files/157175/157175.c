/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((166 && (((166 && 17) && (!var_5)))));
    var_12 = ((((((max(10130, 0))) && (var_8 * 56829))) ? (min(3155864166, ((202 ? var_0 : 1650136215)))) : (0 && 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 8;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_1] = 55391;
                                var_13 = ((-1107 ? 2085470863 : 1139103105));
                            }
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_2] = 1;
                                var_14 = (min(1, (((65525 / (arr_17 [i_2] [i_1] [i_2] [i_3] [i_5] [i_0]))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_2] [i_1] [i_3] [i_2] [i_6] = ((var_1 / ((-(arr_12 [i_0] [i_2] [i_2] [i_3] [i_6])))));
                                arr_23 [i_2] = 0;
                                var_15 = (max(var_15, 83));
                            }
                            arr_24 [i_2] [i_1] [i_1] [i_1] = ((3210910689 ? 68 : 218));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = 14;
                            arr_26 [i_0] [i_2] [i_2] [i_3] = (min(0, 235));
                        }
                    }
                }
                var_16 = arr_16 [i_1];
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_17 = (min(((min(var_7, (arr_30 [i_0] [i_1] [i_7] [i_7] [i_7] [i_8])))), (((230 / 39709) ? 352955448 : (-8061883017063477995 / 2147483647)))));
                            arr_32 [i_0] [i_1] [i_7] [i_8] = (min((((-11 && (arr_16 [i_7])))), ((8061883017063477977 >> (17842678521574626046 - 17842678521574626028)))));
                            var_18 = (max(var_18, (((9752 ? (((~(arr_29 [i_0] [i_7] [i_1] [i_0])))) : ((1 ? (arr_29 [i_1] [i_0] [i_8] [i_8]) : 6569041415747102603)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_19 = ((((~(9828595494645834665 & 247))) == (arr_28 [i_1] [i_1] [i_1] [i_0])));
                            var_20 = (((((1 ? 84 : 247))) == -1062655773123152230));
                            arr_40 [i_9] [i_1] [i_9] = 1;
                            var_21 = var_1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
