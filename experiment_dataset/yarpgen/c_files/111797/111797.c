/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 &= ((!((max(1, 9)))));
        var_12 = 1;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = (arr_0 [i_1 + 2]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    {
                        var_14 = (44 + 1);
                        var_15 = ((5357 - (arr_2 [i_1 + 1])));
                        var_16 = (min(var_16, (-14404 > -3187651841436761524)));
                        var_17 = (((arr_7 [i_1 + 3] [i_2] [i_1 + 3] [i_2]) & 15037184088933148741));
                        var_18 = 60179;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_19 += 1;
        var_20 = (arr_1 [i_5]);
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_21 = 4294967295;
        var_22 = (max(1, 8128));
        var_23 = (arr_13 [i_6 + 1] [i_6]);
    }
    var_24 = ((((max(26, 192))) ? (((!((max(0, 7)))))) : var_4));
    var_25 = ((-66341086960371293 ? var_1 : 255));
    var_26 = (((((max(var_9, (-32767 - 1))))) ? ((max(var_8, (max(var_0, 1))))) : ((max(32766, -14400)))));
    #pragma endscop
}
