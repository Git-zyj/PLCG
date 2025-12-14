/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [16] [i_2] = (((((~(arr_7 [1] [i_0] [i_2])))) ? (((max(6, -21)))) : (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((~((((arr_11 [i_0 - 2] [i_1] [i_2] [i_3 - 2] [5]) ? 3686130296 : (arr_7 [i_4] [i_0] [i_1 + 2]))))));
                                var_21 = (((~var_6) ? (~var_18) : ((~(arr_0 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_22 = (arr_15 [1] [1] [i_5 - 1] [6]);

                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        arr_26 [i_7] [i_7] = ((-1476253116 * (14118841664002139779 > 1517741493)));
                        var_23 ^= ((~(1 * 58228)));
                    }
                    var_24 = (max(var_24, ((((((5365669645506019113 >= (((min(var_5, (arr_15 [i_5] [i_5] [i_6] [8])))))))) << (((~199) + 216)))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((57 ? (arr_31 [i_5 + 1] [i_5] [i_5] [i_10]) : (arr_31 [i_5 + 1] [i_9] [i_9] [1])))))));
                            arr_34 [i_10] [i_9] = (min((((min(-4, 10583)))), 17248));
                        }
                    }
                }
                var_26 = ((((((((6855930268211496986 - (arr_6 [i_5] [i_6] [8] [i_6])))) ? (arr_1 [1] [i_5 - 1]) : ((~(arr_20 [i_5] [i_6])))))) ? (max(var_18, var_16)) : (arr_4 [2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 8;i_12 += 1)
        {
            {
                arr_40 [i_12] [i_12] = (((min((arr_3 [i_12 - 2] [i_12] [i_12 + 4]), (arr_3 [i_12 + 3] [i_12] [i_12 - 1]))) * (~-601317082249578009)));
                arr_41 [i_12] [i_11] [i_12] = ((((((-8406841762575019196 ? 43 : (arr_15 [i_11] [i_11] [i_12] [i_12]))))) / 15277860772847253397));
                var_27 = var_17;
            }
        }
    }
    #pragma endscop
}
