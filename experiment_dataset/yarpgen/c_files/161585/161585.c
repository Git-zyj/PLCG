/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [2] [i_0] = (max((((!896) ? ((var_8 ? var_9 : (arr_3 [i_0] [i_0]))) : (((-(arr_1 [i_0])))))), (max((max(var_9, (arr_3 [i_0] [3]))), ((481306008 ? 48610 : (arr_3 [i_0] [i_0])))))));
        var_20 = max(((min((!65535), 2273582345))), (((~-6246057137739056207) ? (max(var_2, (arr_3 [i_0] [9]))) : (((min(var_5, 65519)))))));
        var_21 -= ((~((0 ? 53013 : 12518))));
        arr_5 [i_0] = ((~(min((max(12540, var_9)), (((-(arr_2 [i_0]))))))));
    }
    #pragma endscop
}
