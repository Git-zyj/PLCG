/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_14 = ((((!(arr_8 [7] [i_2] [i_1] [i_0]))) ? 221 : (arr_3 [3])));
                                var_15 &= (arr_6 [i_0 - 4] [i_1] [i_1]);
                                var_16 = (min(var_16, (!29)));
                                var_17 = (min(var_17, (arr_0 [i_0])));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, (((((32768 ? 4908741591569551325 : 185)) % (arr_1 [i_0 - 3] [i_0 - 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_19 = (min(var_19, -24));

                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_7] [i_7] [i_6] [i_5 - 3] = (arr_22 [i_6] [i_6]);
                    var_20 += (arr_16 [i_5] [i_7]);
                    var_21 = (min(var_21, (arr_21 [i_5 + 1])));
                    arr_24 [i_5] [i_6] = (75 + 34729);
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    var_22 += (((arr_19 [i_5 - 2] [i_5 - 1] [i_5 - 3]) ? (((39072 >= (arr_15 [i_5 - 2])))) : 33));
                    var_23 = ((+((((arr_21 [i_5 - 1]) > (arr_21 [i_5 + 1]))))));
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    var_24 = (!-4908741591569551325);
                    arr_31 [i_9] [0] [i_5] = (arr_18 [9] [i_5 - 3]);
                    var_25 *= ((((-(arr_26 [i_5 + 1] [i_5 + 1]))) * (arr_28 [i_5 - 3] [i_9])));
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    var_26 = (-1574996981654512607 / -116);
                    var_27 = (min(var_27, (((~(arr_15 [i_5 - 1]))))));
                }
                arr_36 [i_6] = 25771;
            }
        }
    }
    var_28 = (!112);
    #pragma endscop
}
