/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = ((!(((0 ? 1 : (!45381))))));
                            var_15 = ((((max((arr_7 [i_0] [i_2] [i_3]), -4))) ? ((min((arr_3 [i_1]), (arr_2 [i_1 - 1] [i_1 + 2])))) : (max(-80, (!-511036462)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [4] |= ((max(-50, 251)));
                            var_16 = (arr_15 [i_5] [i_1] [i_0]);
                            var_17 = 3873901997;

                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_20 [i_0] [i_1] [4] [i_5] [i_6] = ((((min(-43, ((1 ? -1 : 1290127130))))) ? ((max(-846586114, (arr_12 [i_0] [i_0] [i_1] [i_0])))) : ((~((max(53933, -12360)))))));
                                var_18 += (max(9, -3374));
                            }
                            var_19 = 843970394;
                        }
                    }
                }
                var_20 = ((((max(120, -3372))) ? ((max(49121, ((~(arr_12 [i_0] [i_1] [i_1] [i_1 + 1])))))) : (((((-12332 ? 65533 : 1118927999))) ? (~4294967295) : (arr_0 [i_1 + 1])))));
                var_21 &= ((((max(3220676349, 4294967295))) ? 4263708502 : (((!((max(18446744073709551615, 1))))))));
                var_22 = (~18446744073709551612);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_23 ^= (min((((1118927998 ? 35533 : 16414))), ((12360 ? 58125 : 27675))));
                    arr_27 [i_7] [i_7] [i_8] [i_9] = (max((((!(!2968828817)))), ((min(0, 4263708510)))));
                }
            }
        }
    }
    #pragma endscop
}
