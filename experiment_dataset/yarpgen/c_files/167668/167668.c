/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_2;
    var_14 = 643900624;
    var_15 = (min(var_15, ((min((((((14031 ? var_7 : var_7))) | ((643900606 ? 127 : -9182371548283239214)))), (((((min(46, 1224886231))) ? 105256390 : 1490470148))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = (!((1023 || (((22 ? 95 : 249))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = 4;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_17 |= ((~((340375171 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_1] [i_3])))));
                                var_18 = (max(var_18, (~26122)));
                                var_19 = (min(var_19, -667));
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (min((max(((max((arr_3 [i_1] [i_1] [i_1]), var_1))), (((arr_13 [i_0] [i_0] [i_1] [2] [i_1] [i_1]) + (arr_5 [i_0] [i_1] [i_0] [4]))))), (((9659 << (59259004795270111 - 59259004795270098))))))));
                arr_14 [i_0] [i_0] [i_1] = (((min((min(8504724185600286351, (arr_12 [i_0]))), ((1073741824 ? (arr_9 [i_1] [i_0] [8] [i_0] [9] [i_0]) : 14861147959670995180))))) ? ((max(4294967295, 29123))) : (arr_0 [i_0]));
                var_21 = (max(var_21, -8088053768749128817));

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_22 = (((min((arr_3 [i_5] [i_1] [6]), (arr_7 [i_0]))) + (arr_17 [i_0] [i_1] [i_5] [i_0])));
                    var_23 = (min(-1224886232, 134217728));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 7;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] [9] [i_0] = (arr_19 [i_1] [i_0] [i_6 + 1] [i_6 + 1]);
                    var_24 = (min(var_24, (2147483647 + -123)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_6] = (~178);
                                arr_29 [i_0] [i_0] [i_0] [i_6 + 1] [i_7] [i_8] &= -1131516313;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 18;i_11 += 1)
            {
                {
                    arr_36 [i_9] [i_9] = (((!9705) ? (min(9431285454042393863, (((1829260757 ? 327444228 : 9712))))) : ((((((((min(1131516313, (-9223372036854775807 - 1))) + 9223372036854775807)) + 9223372036854775807)) << (var_10 - 219))))));
                    var_25 = (((arr_35 [i_9] [i_10] [i_11 - 1]) | (~127)));
                }
            }
        }
    }
    #pragma endscop
}
