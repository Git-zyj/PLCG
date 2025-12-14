/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((max((var_13 & var_0), (var_9 <= 381))), (max((0 & 0), (978892391 & 0))));
    var_17 = (max(var_13, (max((max(var_15, var_3)), ((min(var_1, var_13)))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_18 = ((max(((((arr_1 [i_1 - 1]) <= (arr_0 [i_0])))), 381)));
            var_19 = (min(65154, 0));
            var_20 = (min(((((var_7 >> (10736 - 10728))) & (((max(var_0, (arr_1 [i_0]))))))), ((max(10726, 1)))));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = (((max((max(var_8, var_3)), ((((arr_7 [i_0] [i_0] [i_0]) & (arr_2 [5])))))) <= ((1131228289222283634 & ((var_9 / (arr_6 [i_0] [i_2] [i_3])))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_22 = (122 / 8077034807002903478);
                        arr_13 [5] [i_0] [i_3] [5] [i_3] = 1;
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_3] [i_0] [4] = ((((min(16209336644805936421, (arr_0 [i_0])))) & ((((107 & 1) <= 65154)))));
                        var_23 = (min(3, 155));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, ((min((max((53031 + var_6), (max(var_9, 1)))), ((min(var_6, 0))))))));
                        var_25 -= (var_1 & -1);
                        var_26 |= ((((var_6 && ((max((arr_9 [i_0] [i_0] [i_0] [i_3]), var_0))))) && (min((var_5 && var_8), (((arr_3 [i_6] [i_6] [i_6]) && var_13))))));
                    }
                }
            }
        }
    }
    var_27 = ((var_7 <= (max((var_5 & var_10), ((max(var_5, var_11)))))));
    var_28 &= (min(18446744073709551615, ((max(var_11, (66 <= 155))))));
    #pragma endscop
}
