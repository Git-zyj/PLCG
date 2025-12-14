/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-1699624758);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (min((max(158090787977663818, 0)), ((~(min(4618, 2665676074452535667))))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_7 [i_1 - 1] = (~(max(668577066, 0)));
            arr_8 [i_0] [i_1 - 1] [i_0] = ((~(~745824896)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [i_0] [i_0] = (!-1212745779436934129);
                        arr_14 [i_0] [i_1 - 1] = (!0);
                        arr_15 [i_0] [i_1] [i_0] [i_3] [i_1] [i_2] = 1;
                        arr_16 [i_0] [i_2] [i_2] [i_0] [i_2] = -11840999054960855976;
                        arr_17 [11] [11] [i_2] [i_3] = -0;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_0] = (min((min(8897659677876231758, 0)), ((min(0, 46)))));
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_31 [i_7] [i_7] [i_7] [i_0] [i_7] = -1;
                            arr_32 [i_0] [i_7] [i_6] [i_5] [i_0] [i_0] = (max(1, (min(1777586238, 0))));
                        }
                    }
                }
            }
        }
        arr_33 [i_0] [i_0] = ((!(~2055416087)));
        arr_34 [i_0] = -3096041781119592194;
        arr_35 [i_0] [i_0] &= (min((~0), -4384));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_38 [i_8] = 0;
        arr_39 [12] = (max((max(33429, ((max(0, 1))))), ((~(min(415782916, 0))))));
        arr_40 [i_8] [i_8] = (!63);
        arr_41 [i_8] = (--217);
        arr_42 [i_8] = ((~(~1)));
    }
    var_14 = -1;
    #pragma endscop
}
