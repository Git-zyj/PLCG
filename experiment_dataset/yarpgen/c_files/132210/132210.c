/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((164 * (~1)));

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_21 = (~13916506970047557674);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_22 = (min(var_22, 0));
            var_23 = (105867634 + 7007537337573620502);
        }
        var_24 += (~4119198733);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = (~1);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_25 = (!var_9);
            var_26 += ((~(arr_12 [i_2] [i_2])));
            var_27 = (max(4257811659, (~4650771181371792994)));
        }
        var_28 = (max(var_28, -32));
        var_29 = (min(var_29, (((~(min(7007537337573620502, 4530237103661993942)))))));
    }
    var_30 = 212;
    #pragma endscop
}
