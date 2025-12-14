/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((29 - 29), 21384)));
    var_18 = (min(var_18, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = (2390854232 < 85);

                for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (max((((!(arr_1 [i_0] [i_1 + 4])))), (min(var_11, (arr_7 [i_0] [i_0] [i_1])))));
                    arr_9 [i_0] [i_1] = (min((88 ^ 244), var_14));
                    var_19 = (((((max((arr_0 [i_2]), 11))))) * (max((arr_7 [i_1] [i_1] [i_1]), (arr_5 [i_1 + 3] [i_2 - 1] [i_2 + 2] [i_1]))));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, (((((((var_2 > (arr_11 [i_1] [4] [i_1 - 2]))))) >= 103)))));
                    arr_12 [i_0] [i_1] = ((max(((arr_10 [i_0] [i_0] [i_3]), (var_15 != var_9)))));
                }
            }
        }
    }
    var_21 = ((((min(46, ((9079256848778919936 ? 8536380134588810513 : 465901027))))) ? 1131605197 : 32));
    var_22 = (~var_7);
    #pragma endscop
}
