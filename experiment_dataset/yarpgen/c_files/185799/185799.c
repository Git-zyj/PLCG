/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= 238;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (max(var_20, 26));
                var_21 = ((((min((arr_0 [i_0]), var_16))) ? 0 : ((((18346356207843956491 + (arr_1 [i_0]))) / (arr_1 [5])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_22 = 47;
                    arr_6 [i_0] [8] [i_1] [i_0] = var_10;
                    var_23 = (min(var_23, (((32767 | (max((var_8 - -51671668), ((1073741823 ? 34 : 1180308621)))))))));
                    arr_7 [7] [i_1] [7] = var_15;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_24 = (min((((arr_5 [i_0] [i_1] [i_0] [i_1 - 2]) / 27521)), (arr_5 [i_0] [i_0] [5] [i_1 - 2])));
                    var_25 = (max(var_25, (~var_12)));
                    var_26 = (((~(min((arr_11 [i_0]), (arr_10 [i_1]))))) * ((((!(arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 - 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
