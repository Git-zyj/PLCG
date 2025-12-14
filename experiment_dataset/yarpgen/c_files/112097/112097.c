/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_20 = (max(var_20, ((((16777215 >= ((~(arr_0 [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = ((((((16777203 <= (arr_9 [i_4] [i_3] [6]))) % (101337263714037078 && 16018)))));
                                var_22 = (i_3 % 2 == zero) ? ((max(((((arr_0 [i_0]) ^ ((16777217 ? 0 : var_3))))), ((((arr_9 [i_0] [i_3] [i_4 + 2]) >> (((arr_11 [1] [i_1] [i_2] [5] [i_4] [i_3] [i_3]) + 2143305127)))))))) : ((max(((((arr_0 [i_0]) ^ ((16777217 ? 0 : var_3))))), ((((arr_9 [i_0] [i_3] [i_4 + 2]) >> (((((arr_11 [1] [i_1] [i_2] [5] [i_4] [i_3] [i_3]) - 2143305127)) + 1240470668))))))));
                            }
                        }
                    }
                    var_23 = ((((~((~(arr_4 [1] [i_1] [i_0])))))) ? ((~(max((arr_8 [15] [15]), (arr_9 [i_0] [i_1] [i_2]))))) : (arr_11 [14] [i_0] [i_1] [2] [i_1] [i_1] [i_1]));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_24 = 2153450217694599227;
                            arr_19 [i_0] = (1597345509 & 10152455299330844122);
                            var_25 = ((arr_2 [1]) ? (arr_4 [i_0] [i_1] [i_1]) : ((-(max(1637451573, 3846673680)))));
                            var_26 -= ((((((arr_3 [i_5]) / var_5))) ? (1927544108 == 16777211) : (((!(arr_3 [i_6 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = var_9;
    #pragma endscop
}
