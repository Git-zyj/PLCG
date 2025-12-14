/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_10 ? 4294967290 : -45));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (((45 ? -8316617878569323790 : 45)) - ((33546240 ? 15 : 3867854370071403797)));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 = (max((min((((-60 >= (arr_6 [i_0])))), (~var_17))), (((((arr_5 [i_0] [i_0] [i_0]) ? 204 : var_8))))));
                    var_22 = var_5;
                    arr_9 [i_0] = (9974 ? var_10 : (min(8316617878569323789, (arr_7 [i_0] [i_0] [i_2]))));
                    arr_10 [i_1] [i_1] [i_0] = (((-1687558955 ? 2785452125340203489 : -8316617878569323772)) ^ ((((!71) ? (max(30720, var_10)) : ((max(162, (arr_6 [i_0]))))))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_23 &= ((((min((var_2 >= -45), (min(var_12, 119))))) ? ((min(8, (arr_2 [i_1] [i_1])))) : ((-((338162531 ? (arr_2 [i_1] [12]) : var_7))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_24 = (max((~var_16), ((9223372036854775807 ? 8316617878569323798 : -1264113241))));
                                var_25 ^= ((!((max(var_12, (((arr_0 [i_1] [i_4]) ? -338162532 : var_8)))))));
                            }
                        }
                    }
                    var_26 = (max(var_26, -20));
                }
            }
        }
    }
    #pragma endscop
}
