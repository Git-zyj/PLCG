/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152475
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((((/* implicit */_Bool) ((var_17) & ((~(6)))))) ? (var_8) : (((/* implicit */long long int) (((-(((/* implicit */int) var_2)))) - (var_16)))));
    var_19 = (unsigned char)181;
    var_20 = ((/* implicit */unsigned char) 6208233985285286132LL);
    var_21 ^= ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) -6208233985285286131LL);
        arr_4 [i_0] [i_0] = ((int) (+(var_17)));
        var_22 = ((/* implicit */int) min((min((arr_0 [i_0]), (arr_0 [i_0]))), (max((arr_0 [i_0]), (-424731270781536971LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) min((-6208233985285286145LL), (min((arr_6 [i_1] [i_1]), (min((((/* implicit */long long int) arr_5 [i_1])), (-5531542828668415108LL)))))));
        arr_8 [i_1] &= 22;
        var_23 &= min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)68)) : (36)))) ? (4982749693471470534LL) : (((arr_2 [i_1]) << (((((/* implicit */int) var_7)) - (38518))))))));
    }
}
