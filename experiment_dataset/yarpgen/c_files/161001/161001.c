/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (((max(4135547137, ((min(-455627508, -1125213505))))) * ((((arr_0 [i_0]) % (((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        arr_4 [i_0] = (((arr_0 [13]) * ((((min(var_8, -7))) ? ((((arr_3 [i_0]) < (arr_0 [i_0])))) : (arr_0 [i_0])))));
        var_22 = (max(var_22, 1328553840));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_0 [i_1]);
        var_23 = (min(var_23, ((max((arr_0 [i_1]), (arr_6 [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (arr_9 [i_2]);
                        var_25 = ((-(arr_14 [i_2] [i_5 - 1] [i_4] [i_5])));
                        var_26 = (min(var_26, (455627508 | -4560229098837952061)));
                    }
                }
            }
        }
        arr_18 [i_2] = -244;
        arr_19 [i_2] = (!-1125213505);
    }
    var_27 = var_15;
    var_28 = (+(max((!var_11), (min(var_10, -455627510)))));
    #pragma endscop
}
