/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((max((max(209, 4294967295)), var_16))) != ((32756 ? ((4294967295 ? var_6 : 14)) : 1)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 = (((-(arr_5 [i_0] [i_1 + 2]))));
                        var_21 = ((max((((arr_2 [i_3] [i_2] [i_0]) ? 18 : 15115486735953690115)), (arr_5 [i_1] [i_1 - 3]))) <= (max((((1 ? (arr_0 [2]) : var_8))), var_2)));
                        var_22 = (min(((34169 ^ (~27234))), (arr_6 [18] [i_1 - 3] [i_2] [i_3])));
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_18;
                    }
                }
            }
        }
        var_23 += (((max((arr_3 [i_0] [i_0] [i_0]), (arr_8 [1] [1] [i_0] [i_0]))) * (((~(arr_5 [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_24 = (arr_17 [i_5]);
                    arr_18 [i_4] [i_4] [i_4] = (max((((((~(arr_6 [i_4] [i_5] [i_4] [i_6])))) ? (max(3331257337755861500, var_4)) : (15115486735953690115 | var_15))), 20421));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                {
                    var_25 = (min(var_25, (arr_2 [i_4] [i_7] [i_4])));

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_26 *= (min(15115486735953690115, 4));
                            var_27 = (min(var_27, var_9));
                            var_28 = ((-(min((arr_8 [i_4] [i_7] [i_8] [i_9]), (arr_8 [i_7] [i_7] [i_8] [i_9])))));
                            arr_29 [i_7] [i_7] = var_4;
                            var_29 = ((((((var_18 && 4) ? ((2032593609 ? -2147483616 : (arr_2 [i_4] [i_4] [i_10]))) : ((-(arr_5 [i_10] [i_10])))))) ? (arr_1 [i_8]) : (min((arr_8 [i_10] [i_9] [i_7] [3]), (arr_8 [i_7] [i_8] [i_9] [i_10])))));
                        }
                        arr_30 [i_4] = (min((((+(((arr_2 [i_4] [1] [i_9]) ? 251 : var_8))))), (max((max(1, (arr_26 [i_4] [i_4] [i_4]))), -2032593609))));
                    }
                    var_30 = (max(var_30, 32));
                }
            }
        }
        var_31 = (min(var_31, (!-3343814505603750558)));
    }
    #pragma endscop
}
