/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(126, (min((max(-759334204, 65535)), ((min(-118, 128)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max((min((min((arr_2 [i_0] [i_0]), var_8)), (min(318712348, 21)))), (max(110, -1931335097))));
                arr_5 [i_0] [i_1] [i_1] = (min(((max((min((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_1]))), (max((arr_3 [i_0]), 1339694071))))), (max(((max((arr_1 [i_0] [i_1]), 20))), (max(1, 3956474373986804531))))));
                arr_6 [i_0] [i_1] = (min(223, 8240622955318259064));
                arr_7 [i_0] [i_0] = (max(((max((max(var_7, -1)), ((min(var_4, (arr_3 [i_1]))))))), (min(((max((arr_2 [i_0] [i_0]), var_4))), (max(16871732158823289718, (arr_1 [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_10 [i_2] [i_0] [i_2] [i_2] = (max(253, 3));
                    arr_11 [i_0] [i_0] = (max(((max(((min(127, 232))), (max(1, 63488))))), (min(((min(1, 25))), (min((arr_9 [i_0] [i_0] [i_0]), -27910))))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_0] [i_4] = (max(((max((min(var_2, -6220639807205124415)), (min((arr_17 [i_0] [i_0]), 5))))), (min(((max(var_2, 1120081758))), (min(var_3, (arr_9 [i_0] [i_0] [i_3])))))));
                        arr_19 [i_3] &= (min(((max(((max(var_8, var_8))), (max((arr_16 [i_0] [i_1] [i_3] [i_0]), -6220639807205124423))))), (max((max((arr_14 [i_0] [1] [i_3] [i_4]), var_9)), ((max(15151, -15151)))))));
                    }

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_1] [i_0] [i_0] = (min(((max(((min(15156, var_4))), (min(-5, 65535))))), (min(((min((arr_21 [i_0]), var_2))), (min(var_7, (arr_20 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_23 [i_3] = (min((max((min(var_2, (arr_8 [i_5]))), ((max(var_3, 1))))), (max(((max(113, var_3))), (max(-1, var_6))))));
                    }
                    arr_24 [i_0] [i_1] [i_3] = (max(14966515528334324664, -6220639807205124411));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_28 [i_0] = (max(((min(((max((arr_16 [i_0] [i_0] [i_6] [i_6]), (arr_2 [i_0] [i_0])))), (max((arr_15 [i_6]), -6220639807205124424))))), (max(((min(var_1, 62))), (max(var_9, var_8))))));
                    arr_29 [i_0] [i_0] [i_0] = (max(((min(((max(15174, 1))), (min(-15192, var_7))))), (min(((max((arr_1 [i_0] [i_1]), var_7))), (max(60, 549739036672))))));
                    arr_30 [i_6] [i_1] [i_6] = (max((max((min(6220639807205124392, 1)), -64)), ((min(((max(115, -13285))), (max(2436080465, 1271242270)))))));
                    arr_31 [i_0] [i_0] [i_6] [i_0] = (max(((max(((min(112, var_5))), (max(var_4, (arr_3 [i_0])))))), (max(255, 1729382256910270464))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_34 [1] [1] [14] |= max((max(((max(26785, 1))), (max(var_2, var_9)))), (min(((max((arr_2 [2] [i_0]), 125))), (max((arr_26 [i_0]), 2437889199)))));
                    arr_35 [i_0] [i_1] = (min(((min((min(2116447397, 53)), (max(var_8, 1412853203))))), (max((max((arr_33 [i_0] [i_1] [9]), (arr_15 [i_1]))), ((min((arr_27 [i_0] [i_0] [i_0]), -79)))))));
                }
            }
        }
    }
    var_11 = (max((min((max(var_0, 28)), (max(213, -896069940)))), (min((max(var_3, var_0)), (max(var_2, var_0))))));
    var_12 = (min(2178519917, 6));
    #pragma endscop
}
