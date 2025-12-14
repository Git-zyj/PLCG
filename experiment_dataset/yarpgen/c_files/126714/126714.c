/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (min(((!(arr_0 [i_0]))), (((arr_5 [i_0] [i_0] [i_0]) == (arr_5 [i_0] [17] [i_2])))));
                    var_14 += (((+(((var_5 + 2147483647) << (606222550 - 606222550))))));
                    var_15 = (((arr_1 [7] [i_1]) ? (((508122882 <= (((var_12 ? (arr_4 [i_0]) : (arr_6 [0] [i_1] [6]))))))) : (((((var_5 ? (arr_2 [8] [i_1] [i_2]) : (arr_3 [i_0] [i_2])))) ? (arr_4 [i_1]) : (((arr_4 [i_0]) ? (arr_7 [1] [i_2]) : (arr_1 [i_0] [i_0])))))));
                    arr_8 [i_1] [i_1] [i_0] [6] = (max((min(237, ((((arr_6 [0] [13] [3]) < (arr_0 [i_0])))))), (255 == -7150959081456216042)));
                    var_16 = (max(var_5, (arr_1 [i_1] [i_2])));
                }
            }
        }
    }
    var_17 = ((~(min((~var_10), (((-1442902963 + 2147483647) << (var_4 - 2309469246911418130)))))));
    #pragma endscop
}
