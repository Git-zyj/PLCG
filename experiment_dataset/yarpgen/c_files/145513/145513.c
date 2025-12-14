/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (min((min((max(var_8, var_7)), (max(var_5, var_8)))), (max(((max(var_9, 8985673696597388771))), (max(var_3, var_12))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_14 = (min(((max(((min(var_7, (arr_4 [i_0] [i_1])))), (min(var_0, (arr_0 [i_0] [i_0])))))), (max((max((arr_3 [i_1]), var_3)), ((max(var_7, (arr_3 [i_1]))))))));
            var_15 = (min((min((min(-8985673696597388772, 22)), ((min((arr_1 [i_0] [i_0]), 20348))))), (min(((max(var_0, (arr_0 [i_0] [13])))), (min((arr_0 [i_0] [i_1]), -8985673696597388776))))));
            var_16 = (min(((max(((min((arr_4 [i_0] [i_0]), 1))), (max(var_6, (arr_4 [i_1] [i_0])))))), (min((max(var_8, 1)), (min(var_8, (arr_3 [i_0])))))));
            arr_5 [i_0] [i_0] [i_0] = (min(((min((min(var_12, (arr_3 [6]))), (min((arr_1 [i_0] [i_0]), var_12))))), (min((max(-8985673696597388772, var_9)), ((max((arr_3 [i_0]), var_6)))))));
            var_17 = (min((min((max(var_9, (arr_3 [i_0]))), ((min(var_4, 61916))))), ((min((min(var_2, (arr_0 [i_0] [i_1]))), ((min((arr_3 [i_0]), 0))))))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_2] = (max((min(((min(var_9, -8985673696597388772))), (min(4590736870054538049, var_12)))), (min(((min(1, var_4))), (min(13856007203655013564, (arr_4 [i_2] [i_0])))))));
            var_18 ^= (min((max((max(var_9, -8985673696597388771)), ((min((arr_6 [i_2] [i_0]), 1))))), (min(((min(var_2, var_9))), (max(-8985673696597388786, (arr_6 [i_0] [i_0])))))));
            var_19 = (max((min((min(var_0, var_6)), ((min((arr_4 [i_2] [i_0]), var_6))))), (min(((min(var_7, (arr_3 [i_0])))), (max((arr_4 [i_0] [i_2]), (arr_6 [i_0] [i_0])))))));
        }
        var_20 = (max(var_20, ((min(((min(((min((arr_0 [i_0] [i_0]), -105))), (min(var_2, 139))))), (min(((min((arr_1 [i_0] [i_0]), (arr_4 [i_0] [i_0])))), (min(var_12, 8985673696597388771)))))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_21 = (min((max((min((arr_8 [i_3] [i_3] [i_3]), var_10)), ((min(0, 117))))), (min((min(0, var_2)), ((min((arr_10 [i_3]), 28714)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_22 ^= min((min(((max(28812, (arr_18 [i_5] [6] [i_5] [i_5])))), (min(1, (arr_12 [i_4] [i_4]))))), ((min((min(1692, var_1)), ((max(var_6, var_4)))))));
                    var_23 = min((max(((max((arr_18 [i_3] [i_4] [i_4] [i_3]), (arr_6 [i_3] [i_3])))), (min(0, 18446744073709551614)))), (min(((max(var_2, (arr_16 [i_5] [i_4] [i_5])))), (min(var_3, var_12)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_24 [i_6] [i_5] [i_6] [i_6] [i_3] = (max((min((min((arr_15 [i_3]), var_8)), ((min(var_0, (arr_8 [i_3] [i_5] [i_3])))))), ((min(((min((arr_8 [i_4] [9] [i_3]), var_11))), (max(-497690962, 0)))))));
                                var_24 = (min((min(((min((arr_14 [i_3] [i_3] [i_3]), var_1))), (min(var_5, var_8)))), (max(((min(var_6, -2088795236))), (max((arr_3 [i_5]), (arr_12 [i_3] [i_3])))))));
                                var_25 *= (max(((max(((min((arr_2 [i_7] [i_7]), (arr_2 [i_4] [i_4])))), (max(0, (arr_13 [i_4])))))), (min(((min((arr_19 [i_3] [4] [i_5] [i_6] [4]), var_4))), (min(0, 8985673696597388755))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, ((min((min((min(5950511756224113884, var_1)), (min(var_1, var_8)))), ((min((min(-21148, 8985673696597388745)), ((min(var_0, var_1)))))))))));
    var_27 += (min((min((max(var_10, var_4)), ((max(1, var_6))))), (min((max(4294967295, var_8)), ((min(var_4, var_4)))))));
    #pragma endscop
}
