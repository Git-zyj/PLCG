/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((2147483646 ? 1 : 0))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (min(var_15, var_13));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (arr_0 [i_0]);
                    var_17 -= (~1);
                }
            }
        }
        var_18 = (max(((var_6 ? ((max(132, var_1))) : (((!(arr_2 [i_0] [i_0])))))), (((((var_10 ? (arr_2 [i_0] [1]) : (arr_4 [12] [12])))) ? (arr_1 [i_0]) : 32753))));
        var_19 = (min(var_19, (((((((((var_6 ? (arr_4 [2] [i_0]) : var_4))) ? (arr_2 [i_0] [i_0]) : 3285476940))) ? 113 : (max(((-1 ? 107 : 10709035678402020714)), ((max(var_7, (arr_2 [i_0] [i_0])))))))))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_20 = ((arr_1 [i_3]) ? (min(1, 1769006344)) : ((max((max(var_4, -121)), (min(1, -87))))));

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_21 = (min(var_21, var_2));
            var_22 = (max(var_22, (((-((3285476940 ? -835894911 : 62)))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_19 [i_7] [11] [11] [i_5] [i_7] [12] = ((~(min((arr_4 [i_3] [i_4]), -4))));
                            var_23 -= 4294967290;
                        }
                    }
                }
            }
        }
        var_24 *= (arr_16 [i_3] [i_3] [i_3] [i_3] [0]);
        var_25 -= (max(0, 246761872095231205));
    }
    var_26 = (max(var_26, var_0));
    #pragma endscop
}
