/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 ^= var_15;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = 208181296;
            var_20 = (arr_1 [i_0]);

            /* vectorizable */
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                var_21 += var_4;
                var_22 *= (arr_0 [12]);
            }
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                var_23 ^= (var_3 ? ((((!(((var_2 ? (arr_6 [i_3] [6] [i_3] [i_3]) : 1))))))) : ((var_9 ? (max(12, 16924204576941802480)) : ((((arr_9 [i_0]) ? 3214916195 : -45))))));
                arr_12 [i_0] [i_0] [i_1] [12] = (((((((arr_10 [i_1] [i_3] [i_3]) ? 46885 : 1))) && var_10)));
                var_24 += ((((((((var_7 ? var_13 : (arr_11 [i_0] [0])))) ? (max((arr_11 [i_3 + 1] [i_3]), var_1)) : (((max((arr_10 [i_3] [6] [2]), 96))))))) ? ((max(((!(arr_2 [i_0] [i_3]))), var_14))) : (((var_17 >= (arr_1 [i_0]))))));
            }
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                arr_16 [i_1] [i_4] [i_1] = (min((((~(((var_9 >= (arr_15 [i_4] [i_4 - 3] [i_1]))))))), (min((arr_4 [i_0] [i_1] [i_1]), ((var_17 ? 6212357515431775052 : 1522539496767749153))))));
                arr_17 [i_0] [i_1] [i_1] [0] = (((228 >= ((max(18314, (arr_13 [i_4] [i_1] [i_0])))))));
                var_25 = (((arr_13 [i_4 - 3] [i_4] [i_4]) - (((((8079606094984165324 ? (arr_3 [i_0] [6] [10]) : (arr_9 [i_4])))) ? -var_13 : (8801990230215767041 + var_16)))));
            }
            var_26 = 4;
            var_27 = 25030;
        }
        arr_18 [6] [i_0] = var_1;
        arr_19 [i_0] = ((!(((arr_0 [i_0]) >= (arr_0 [i_0])))));
    }
    var_28 = 1;
    #pragma endscop
}
