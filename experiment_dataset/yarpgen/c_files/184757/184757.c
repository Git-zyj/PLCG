/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = (arr_0 [i_1] [3]);
                            var_18 = ((var_0 != (((~(arr_4 [i_0] [i_0] [i_0]))))));

                            for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_19 *= (((arr_3 [i_0] [i_1] [i_1]) ? (((arr_9 [i_3] [i_3] [i_2] [i_1] [i_3]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_7 [i_1] [i_3]))) : (arr_4 [15] [i_1] [15])));
                                var_20 -= ((0 < (((arr_4 [i_0] [15] [i_2]) ? (arr_3 [4] [i_1] [i_1]) : (((var_9 >> (var_4 - 3269841990))))))));
                                var_21 = ((((((-((var_3 ? 20965 : var_2)))) + 2147483647)) >> (var_10 + 85288179)));
                            }
                            for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                arr_13 [9] [i_3] [i_1] [i_1] [i_0] = ((((var_9 ^ (arr_8 [i_3]))) << (((max((max(var_3, var_5)), (20947 >= var_8))) - 18446744073709534799))));
                                var_22 -= (max(((max(var_11, (((arr_9 [i_3] [i_3] [i_2] [i_1] [i_3]) ^ -74))))), (arr_3 [i_0] [5] [i_2])));
                            }
                            for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                arr_16 [i_3] |= (((((arr_0 [i_6 - 3] [i_6 - 3]) != (arr_4 [i_6 - 1] [i_1] [i_6 - 1]))) ? (((arr_4 [i_6 - 2] [i_2] [i_2]) - (arr_3 [i_6 - 3] [i_6 - 3] [i_6 - 1]))) : ((((arr_3 [i_6 - 2] [13] [i_6 - 2]) ? var_9 : (arr_4 [i_6 + 1] [i_1] [i_6]))))));
                                var_23 &= (max(3, ((20965 ? var_6 : (arr_7 [i_0] [4])))));
                                var_24 = (max((arr_11 [1] [i_1] [i_1] [12] [i_1] [i_1] [i_1]), (((((max(50, var_8))) || 47457)))));
                                var_25 *= (((arr_8 [i_0]) && (arr_9 [i_0] [i_0] [i_0] [i_0] [i_3])));
                                arr_17 [17] [i_6] [i_2] = 147020846;
                            }
                        }
                    }
                }
                var_26 = (arr_6 [i_0] [1] [1] [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {

                            for (int i_9 = 1; i_9 < 16;i_9 += 1)
                            {
                                arr_24 [11] [i_9] [i_7] [i_8] [i_9] [15] [i_8] = (arr_11 [8] [i_0] [i_8] [i_7] [8] [i_0] [i_0]);
                                arr_25 [i_0] [i_9] [i_0] [4] = (max((((!((((((arr_14 [2] [5] [5] [14]) + 2147483647)) >> (var_5 - 16586538653393566777))))))), ((((max((arr_2 [i_9 + 1] [i_9]), -1))) ? -26428 : (max(-147020846, (arr_14 [i_9 + 1] [i_7] [i_1] [i_0])))))));
                                arr_26 [i_0] [10] [18] [i_8] [i_9] = (max(((!((max(15416, 973727197))))), 1));
                            }
                            arr_27 [i_0] [16] [16] [i_8] = (arr_5 [i_8] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_27 -= ((((max(2339529041, var_12))) ? 24169 : 193287873655925736));
    var_28 = ((((((((var_14 ? var_6 : 1))) ? var_14 : (var_0 * var_6)))) ? 80 : -2));
    #pragma endscop
}
