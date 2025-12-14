/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = 7206914747188793186;
                    var_15 = (min((0 && 6889186479607988217), var_2));
                    arr_8 [i_0] [i_1] [i_0] = (6889186479607988217 == 239);
                }
            }
        }
    }
    var_16 = ((((max(var_2, var_2))) | var_12));

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_17 = ((((~(!var_12))) + (!var_1)));
                        arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] = var_5;
                        var_18 = (~var_3);
                        arr_19 [i_6] [i_3] [i_3] [i_3] = 255;
                        var_19 = 11;
                    }
                }
            }
        }
        arr_20 [i_3] = ((((((((arr_13 [i_3] [i_3] [i_3]) <= var_3))) * ((((arr_9 [i_3]) < (arr_9 [i_3])))))) & (((((var_7 ? var_7 : (arr_11 [i_3]))) != (arr_9 [i_3]))))));
        var_20 = (min(((var_9 ^ (arr_9 [i_3]))), ((max((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3]))))));
    }
    #pragma endscop
}
