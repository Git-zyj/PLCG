/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = ((+(((0 != var_17) ? ((30 ? 515180281 : 4294967295)) : 18))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (arr_6 [i_1] [i_1]);
                        arr_12 [i_1] [i_1] = (max(((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? 32462 : 14))), ((min(((max((arr_0 [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_1])))), 0)))));
                    }
                    var_21 = (arr_5 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_22 += ((((max(0, 839163602043386151))) ? (min(((1 ? var_14 : 10024147418477044178)), (-62 - 23))) : var_3));
                                var_23 = (arr_10 [i_0] [i_1] [i_0] [i_4 - 1] [i_5 - 2]);
                                var_24 -= (min((min(0, (arr_7 [i_1] [i_1] [i_1] [i_4 + 2]))), (((349089200 ? 97 : var_9)))));
                                var_25 = (max((((1461462357469269260 ? 1 : -426228611058509121))), 6179155401238433812));
                            }
                        }
                    }
                    var_26 = ((+((max((12491434163689149901 <= 2257906471), (max((arr_13 [i_0] [i_1] [i_2 + 3] [i_1]), -32233)))))));
                }
            }
        }
    }
    #pragma endscop
}
