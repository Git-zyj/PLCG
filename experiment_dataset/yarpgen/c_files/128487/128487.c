/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((~((~((~(-2147483647 - 1))))))))));
    var_16 = (((-2147483647 - 1) ? var_10 : (((-var_13 ? -2147483638 : (max(2147483647, (-2147483647 - 1))))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_17, 116));
        var_18 = (max(var_18, (((5 ? ((max((arr_0 [i_0 - 1] [i_0]), -97))) : ((2147483647 ? 1 : (arr_0 [i_0 + 1] [i_0]))))))));
        arr_2 [i_0] = ((118 ? 252 : 4159306325));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (max(var_19, ((((arr_3 [i_1]) ? (((((116 ? (arr_3 [i_1]) : (arr_3 [i_1]))) << (((arr_4 [20]) - 3067647411))))) : (min(((((arr_3 [i_1]) ? 8 : 0))), (min((arr_4 [i_1]), -4463199757770900586)))))))));
        arr_5 [i_1] = ((-((4294967278 ? ((((arr_3 [i_1]) ? 46 : -118))) : (arr_4 [i_1])))));
        var_20 = (max(-0, -33));
        var_21 = (min(var_21, (arr_3 [i_1])));
        arr_6 [i_1] = (min((arr_3 [i_1]), (arr_4 [i_1])));
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        var_22 = (max(((min(955029503, (arr_8 [i_2] [i_2])))), (arr_8 [i_2] [i_2])));
        arr_11 [i_2] = (--1);
        arr_12 [i_2] = (((((max(5173344375719860134, 1182376537)))) ? (arr_8 [i_2 + 3] [i_2]) : (min((((247 ? 1 : (arr_10 [1] [i_2 + 1])))), -8594860770246972025))));
        var_23 = ((((min(-1853079178, (max(6492756113301848923, (arr_10 [i_2 + 3] [i_2 + 3])))))) ? ((-(arr_10 [1] [i_2 - 3]))) : 125));
    }
    var_24 = (~-96);
    #pragma endscop
}
