/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(121, ((((min(2209935222, var_13))) ? -121 : ((max(var_11, var_11)))))));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = 16;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 ^= (arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                        var_18 = ((-2950975118524712215 ? 11393835726863864512 : 2088960));

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            var_19 = var_9;
                            var_20 = (arr_7 [i_0] [i_1] [i_2] [i_3]);
                            var_21 = var_11;
                        }
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_22 = (arr_0 [i_0]);
                        var_23 ^= var_2;
                    }
                    var_24 = ((9395994009451647551 ? ((max(var_4, -16784450))) : (min(-106, var_12))));
                    var_25 = (max((max(var_2, ((min(var_6, 255))))), var_7));
                }
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    var_26 -= (arr_16 [i_1] [i_1]);
                    arr_18 [i_0] [i_0] [i_1] [i_6] = ((((var_13 ? (max((arr_13 [i_6 - 1] [8] [i_1 + 1] [i_0] [i_0]), 4084775249900410047)) : 1289465052)) * (((((arr_9 [i_0] [i_1 - 1]) != (arr_9 [1] [i_1 + 1])))))));
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_27 |= (arr_17 [i_0] [i_1]);
                    var_28 = (max(((min(((var_6 ? (arr_4 [6] [i_1] [i_0]) : (arr_14 [i_7 - 1] [i_0] [i_1 - 1] [i_1] [i_0] [i_0]))), var_5))), var_0));
                }
                var_29 = (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1]) >> ((((min((arr_12 [i_0] [i_1 - 2] [i_1] [i_1] [i_1]), (arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_0])))) - 65))));
                var_30 = (arr_13 [i_0] [i_1 - 1] [i_1 - 2] [i_1] [3]);
                var_31 = -2088961;
            }
        }
    }
    var_32 |= (min((((max(var_0, var_1)))), 3621719598));
    #pragma endscop
}
