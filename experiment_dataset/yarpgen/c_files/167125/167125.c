/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_16 ^= (~var_6);
        arr_2 [1] |= 31;
        arr_3 [i_0] [i_0] = 0;
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 = (max((((((3822246333 % (arr_4 [i_2]))) << (((arr_0 [i_1 + 1]) - 2661554752870319748))))), (max((max(144115188075855872, (arr_10 [i_1] [i_1] [i_2] [i_1]))), (arr_8 [i_1] [i_1] [i_1 + 1])))));
                    arr_12 [i_1 + 2] [i_1 - 3] = ((((((arr_5 [i_1 + 4]) >= var_14))) << (-19 < 250)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_18 = (~var_8);
                    var_19 = (65518 + 0);
                    arr_19 [i_1] [6] [i_5] [i_1] = ((+((+(((arr_9 [i_5]) ? -1 : var_13))))));
                    arr_20 [i_5] [i_5] [i_5] = ((~((((arr_10 [i_1 - 1] [i_1 + 3] [i_5] [1]) < 62)))));
                    var_20 = (arr_0 [i_4]);
                }
            }
        }
    }
    var_21 = ((-((min((14607628794194204770 > -8947117801863841252), var_4)))));
    var_22 = var_8;
    #pragma endscop
}
