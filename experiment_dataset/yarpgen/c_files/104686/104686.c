/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 -= min((max(var_2, 443)), ((max(127, 2877472308))));
        var_19 = (max(var_19, ((max(((max((-127 - 1), var_16))), (min(4, 65523)))))));
    }
    var_20 &= (max(((max((min(var_5, var_15)), var_13))), (max(((max(125, -2004977703523732719))), (min(var_3, var_3))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_21 = (max((max(((max((arr_5 [i_1]), -1200981205))), (max(33429, var_2)))), ((max(-112, 244)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] = (max((min((arr_8 [i_2] [i_1] [i_2 + 1] [i_5 + 1]), var_2)), (max(65532, -7))));
                                arr_16 [i_5] [2] [i_3] [i_1] [i_5] [6] = (max((min(var_13, (max(var_15, var_0)))), ((min((max(101, -1200981191)), ((max(var_4, var_9))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_22 &= (min((max((max(42343, 501052399936975939)), ((min(22252, (arr_14 [i_1] [6] [i_2] [i_2] [i_6] [i_7])))))), ((max(56695, var_7)))));
                            var_23 = (min((min(var_4, (max(2889295130431920136, 90)))), ((min((max(1, var_2)), 1602573266)))));
                            arr_22 [i_1] [i_2] [i_6] [i_1] [i_7] = (max(((max((arr_17 [i_2 - 1] [i_2] [i_2 + 2] [i_6]), (arr_17 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_6])))), (min(0, (arr_17 [i_2 - 1] [i_2] [i_2 + 2] [i_6])))));
                            arr_23 [i_2] [i_2] [i_6] [i_7] [i_1] = (max((max((arr_20 [i_2 + 2] [i_2] [i_6] [i_6]), 166)), ((max(var_11, (arr_11 [6] [i_1] [i_2 + 1] [5] [i_2 + 2]))))));
                        }
                    }
                }
                arr_24 [i_1] [i_1] [i_2] = (min((max((arr_14 [i_2 - 1] [i_1] [i_2 + 2] [i_2 + 1] [i_1] [i_2 - 1]), var_0)), ((max(var_5, 54427)))));
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
