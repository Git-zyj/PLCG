/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) % (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = var_18;
        var_20 = (((((arr_1 [i_0]) != (arr_1 [i_0]))) ? (max((((arr_2 [4]) >> (arr_1 [i_0]))), ((((arr_2 [i_0]) ? -26220 : (arr_1 [i_0])))))) : ((((((min(var_0, (arr_0 [i_0])))) <= (arr_1 [i_0])))))));
        var_21 *= (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] = (arr_7 [i_1]);
                        var_22 = ((((max((((~(arr_8 [i_4])))), (arr_14 [i_1])))) ? (arr_13 [i_1] [i_1] [i_2] [1] [1] [1]) : (arr_6 [i_1])));
                        arr_17 [i_1] = ((((arr_5 [i_2] [i_1]) / (arr_5 [i_3 - 2] [i_4 - 2]))) < ((((((min(var_16, var_7))) != ((min(1, 1))))))));
                    }
                }
            }
            var_23 -= ((!(((+(((arr_13 [i_1] [i_1] [i_1] [15] [i_2] [i_2]) % (arr_10 [i_1] [18] [i_2]))))))));
            arr_18 [i_2] = (((((arr_14 [i_1]) ? (arr_5 [i_1] [14]) : (((var_16 << (((arr_13 [i_2] [i_2] [i_2] [i_1] [i_1] [i_1]) - 423599614059274748))))))) != ((max(((((arr_9 [i_2] [i_2] [i_1] [i_1]) == (arr_10 [i_1] [i_2] [i_2])))), (max(-1293961308, -1)))))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_24 = (((((~(max((arr_9 [i_1] [i_1] [i_1] [i_1]), 1))))) ? (max((arr_10 [i_1] [i_1] [i_5]), (arr_10 [i_5] [2] [5]))) : ((((((!(arr_15 [i_1])))) % (arr_7 [i_1]))))));
            var_25 = ((4294967294 ? 23161 : -26210));
            var_26 = (((((arr_12 [i_1]) != (arr_6 [i_1]))) ? ((((arr_14 [i_1]) <= (arr_12 [i_1])))) : (arr_13 [i_5] [11] [i_5] [11] [i_1] [i_1])));
        }
        var_27 ^= (max((max((arr_20 [i_1]), (arr_20 [i_1]))), ((((arr_20 [i_1]) < (arr_20 [i_1]))))));
        var_28 = ((-((min((arr_20 [i_1]), (arr_20 [i_1]))))));
    }
    var_29 -= var_17;
    var_30 ^= (-var_10 == -var_11);
    #pragma endscop
}
