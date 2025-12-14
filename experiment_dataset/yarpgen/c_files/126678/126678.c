/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_1] [7] [i_0] = ((((max(17831120773222281260, 897905971234671067))) ? ((max(897905971234671087, (arr_4 [i_2 - 2] [i_0] [i_1] [i_3])))) : ((((897905971234671050 ? -890746004 : 32766))))));
                        var_16 &= (max(97, 8));
                        var_17 -= (arr_6 [i_3] [i_1] [i_1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_18 -= (897905971234671091 | 104);

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_20 [i_6] [i_0] [i_0] [i_0] = 390367149993228946;
                        var_19 = max(4794821943351531739, 4794821943351531743);
                    }
                }
            }
        }
        var_20 = (min(var_20, ((max(3184082724563549288, 8947558336365445665)))));
    }
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        arr_23 [i_7] = 1978698770;
        arr_24 [i_7] &= (897905971234671070 % 18446744073709551615);
        var_21 &= (max(4294967283, -1817789806336860011));
    }
    var_22 += ((((-116 | 390367149993228919) ? var_5 : (min(97, 16043964038800858894)))));
    var_23 += 72053195991416832;
    var_24 = var_11;
    var_25 += (max(-390367149993228955, var_6));
    #pragma endscop
}
