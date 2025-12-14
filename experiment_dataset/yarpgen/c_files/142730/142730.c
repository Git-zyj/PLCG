/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_7 >> (var_9 == 32784))));
    var_16 = (((((~-2147483617) & (~var_8))) << (((!((max(1803522853, var_8))))))));
    var_17 = ((var_5 ? var_14 : (((~((var_10 >> (var_8 - 1984326559))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = ((!((min((~-1662975102), (!4079478782))))));
                            var_19 = (max(var_19, (((~(((((((arr_8 [i_0] [i_1] [i_0] [i_3] [i_0]) > (arr_5 [20] [i_1])))) >= -var_3))))))));
                        }
                    }
                }
                var_20 = (((((arr_7 [i_0] [i_0] [i_0] [i_0]) != var_4)) ? (arr_7 [i_0] [i_1] [i_0] [i_1]) : (min((arr_7 [i_0] [i_1] [i_0] [i_1]), (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_21 -= ((max(((((arr_2 [i_1] [i_1]) == (arr_0 [i_0])))), 5123352314293765817)));
                            var_22 = (arr_7 [i_0] [i_1] [i_1] [i_1]);
                            arr_17 [i_4] [i_1] [i_4] = ((1662975105 ? (!var_2) : ((-(arr_5 [i_1] [i_1])))));
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_1] = -224116984;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_24 [i_6] [i_1] [i_6] [i_0] = (i_1 % 2 == 0) ? ((min(var_2, (((((arr_2 [i_0] [i_1]) << (((arr_12 [i_0] [i_1]) + 409538584))))))))) : ((min(var_2, (((((arr_2 [i_0] [i_1]) << (((((arr_12 [i_0] [i_1]) + 409538584)) + 1650715187)))))))));
                            var_23 |= min((arr_5 [4] [4]), (arr_4 [i_1] [0]));
                            arr_25 [i_0] [i_1] [i_6] [i_7 - 3] = arr_7 [i_0] [i_1] [i_6] [i_7 + 2];
                            arr_26 [i_0] [22] [i_6] [i_7 - 1] |= -0;
                        }
                    }
                }
            }
        }
    }
    var_24 &= ((max(var_1, 4294967290)));
    #pragma endscop
}
