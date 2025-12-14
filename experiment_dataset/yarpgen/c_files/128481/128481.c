/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(var_12, var_13));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (arr_0 [i_0]);
                    var_17 = 7786048068016929676;
                    var_18 -= 4294967276;
                    arr_9 [i_0] [i_0] [i_0] = ((((min((arr_5 [i_0] [i_0]), (arr_4 [i_0])))) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), (!4294967282)))));
                }
            }
        }
        var_19 = (arr_7 [1] [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {
                        var_20 = (min((min((min(0, 4294967259)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((max(5, (((arr_11 [i_0]) ^ (arr_11 [i_0]))))))));
                        arr_17 [7] [i_0] = (min((((arr_4 [i_0]) > 1152921504606846975)), (!-1759567363)));
                        var_21 += (max(((((min((arr_14 [i_3]), (arr_0 [i_3])))) ? (((arr_7 [i_0] [i_0] [i_3] [i_5]) ? 240 : var_13)) : (((min(33251, 45)))))), (((max((arr_16 [1] [i_3] [2] [i_3]), (arr_12 [i_3])))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((((min(2, 39))) - (arr_19 [i_6])));
        arr_23 [i_6] = (arr_11 [2]);
        var_22 = (min((max((arr_3 [i_6] [i_6] [i_6]), ((20 ? 9293253849598597236 : var_0)))), var_10));
    }
    #pragma endscop
}
