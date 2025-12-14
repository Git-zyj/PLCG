/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = ((((!(arr_7 [i_0] [i_0] [i_0])))));
                        var_21 = (min((max(57570, 2049181631)), -1996621910));
                        arr_10 [i_3] [11] [i_1] [i_0] = ((6588974234981410515 >= (arr_8 [i_3 - 1] [i_3 - 1])));
                        var_22 = ((+(((((arr_1 [i_0]) ^ (arr_9 [i_3] [0] [i_3]))) ^ var_11))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = ((!(arr_3 [i_0] [i_0] [i_0])));
        var_23 = (arr_0 [i_0]);
        arr_12 [i_0] = ((-(min(-2049181649, ((var_16 ^ (arr_4 [4] [i_0] [i_0])))))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_24 |= (((((var_19 ? 1752129511 : (arr_13 [i_4] [i_4]))))) ? -2049181647 : ((((2522765032507319776 / (arr_14 [i_4] [13]))) ^ (~2049181661))));
            arr_17 [i_5] [i_5] [i_5] = ((min((-2049181661 == 2049181670), (arr_15 [i_4] [i_4] [i_5]))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            var_25 = (max(var_25, (((var_12 ? (((!(arr_18 [2] [i_6] [i_6])))) : ((~(max((arr_14 [i_4] [i_6]), (arr_16 [i_6] [14] [i_6]))))))))));
            var_26 = (arr_16 [i_4] [i_4] [i_6]);
            var_27 = (((((var_16 || 2522765032507319776) ? 18072785411589136541 : (min(var_1, var_1)))) <= (max((arr_13 [i_4] [i_6]), 6276918444011824390))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_28 += -var_4;
            arr_23 [i_7] = 41657;
            var_29 = (max(var_29, ((((((arr_19 [i_7]) && ((min((arr_16 [i_4] [i_4] [i_7]), var_3))))) ? (((((arr_22 [i_7] [i_4]) ? -22 : 3591187234831856333)) / (arr_14 [i_7] [i_4]))) : (arr_21 [8] [i_4]))))));
        }
        arr_24 [i_4] = (min(((224154809825525808 >> (-2049181648 + 2049181698))), 3591187234831856310));
    }
    var_30 ^= (~var_5);
    #pragma endscop
}
