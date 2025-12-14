/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (((((var_9 ? (!0) : (max(var_0, 1))))) ? (arr_2 [i_0]) : 68719476480));
        arr_4 [7] [7] = (arr_0 [i_0] [i_0]);
        var_17 = ((((min((arr_1 [i_0]), 1))) ? ((((173 ? (arr_1 [i_0]) : (arr_1 [i_0]))))) : (((!1263827986) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (arr_2 [i_0])))))));
        var_18 = (((((arr_1 [i_0]) ? (arr_1 [12]) : var_7)) != ((((!var_4) < (((arr_0 [i_0] [i_0]) ? 68718952448 : 3354704522)))))));
        arr_5 [i_0] |= ((~(arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 &= (((((0 & (arr_7 [i_1])))) ? (((((arr_8 [i_1]) && (arr_8 [i_1]))))) : 48106));
        arr_9 [i_1] = (((arr_8 [i_1]) <= 4294967295));
        arr_10 [i_1] [i_1] = var_1;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_20 = (arr_11 [i_2]);
        var_21 |= 1193128588;
    }

    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_22 = (max(var_22, (((max(-var_12, (arr_14 [i_3])))))));
        arr_16 [i_3] = (45816 + 1);
        var_23 = (min(var_23, ((((((4294967295 ? 1 : 49104))) ? var_1 : (arr_11 [i_3 + 2]))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] = (arr_12 [i_4]);
        arr_20 [i_4] [i_4] = var_5;
        var_24 = (max((((!((((arr_17 [i_4]) ? var_14 : var_9)))))), (min(((max(-6492904629903706860, 523264))), ((1145567159691800130 % (arr_18 [5])))))));
    }
    var_25 = var_0;
    var_26 = var_9;
    #pragma endscop
}
