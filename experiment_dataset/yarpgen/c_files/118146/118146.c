/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_17 = ((((max((~25), -30378828))) ? 25 : (~61366)));
            var_18 = ((~(((var_0 || (arr_0 [i_0] [i_0]))))));
            var_19 = ((49 ? 26890 : 3469525967));
            var_20 = 42;
        }

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = var_16;
            var_21 = (min(var_21, ((max(52, 11172053944506923770)))));
            var_22 |= (min((arr_1 [i_0] [i_0]), (((min(0, (arr_0 [i_2] [i_2])))))));
        }
        arr_9 [i_0] = max(34741, 110);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_16 [5] [i_4] [i_4] = ((0 ? 825441349 : (arr_15 [i_3] [i_4])));
            var_23 *= (((arr_15 [i_3] [i_3]) ? 64 : var_16));
            var_24 ^= 61361;
        }
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_25 = (arr_12 [i_5 + 1] [i_5 - 1] [i_5 - 1]);
            var_26 ^= ((+(((arr_5 [i_5 + 1] [i_3]) ? -1250438876555977255 : (arr_18 [i_3] [i_3])))));
            var_27 *= (min(-560812795, ((1 ? (arr_18 [i_3] [i_3]) : -30572))));
            var_28 += ((var_7 ? (((min(((min(-113, 96))), (min(var_8, var_10)))))) : (((arr_14 [i_3]) ? (arr_14 [i_5 - 1]) : (arr_10 [i_3] [i_3])))));
        }
        arr_19 [i_3] = (((arr_5 [i_3] [i_3]) ? (min(1, 9223372036854775807)) : (16059491130607840816 <= 224)));
        var_29 = (min(var_29, (((((max(2986516084, 28177))) ? ((~((~(arr_18 [i_3] [i_3]))))) : ((~(arr_6 [i_3] [i_3] [i_3]))))))));
        arr_20 [i_3] = ((((min(-6125255530297411740, 11331726435124792240))) ? (arr_1 [i_3] [i_3]) : (arr_1 [i_3] [i_3])));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_30 = 1111476064;
        var_31 += (max((arr_22 [0]), (max(var_12, (arr_22 [14])))));
        arr_24 [i_6] = var_1;
    }
    var_32 = (min(var_13, ((var_11 ? var_11 : 1182620653))));
    #pragma endscop
}
