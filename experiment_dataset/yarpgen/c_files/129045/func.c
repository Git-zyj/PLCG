/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129045
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [(signed char)2] &= ((signed char) arr_1 [i_0 + 1]);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((arr_1 [0LL]), (((/* implicit */long long int) arr_2 [i_0 - 1])))) | (arr_1 [i_0 + 1])))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))))) : (((/* implicit */int) ((arr_0 [i_0 - 1]) != (((/* implicit */unsigned int) ((int) var_10))))))));
        var_17 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)44572)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)80))) : (((long long int) (unsigned short)65525)))));
        var_18 ^= ((unsigned int) arr_1 [i_0 - 1]);
        var_19 ^= ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0 - 1]));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */short) ((unsigned char) var_15));
        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_1 - 2] [i_1 - 2]));
    }
    for (signed char i_2 = 3; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_22 = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)10)) << (((((arr_7 [i_2]) + (8173425043415785849LL))) - (27LL))))) >> (((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)10)) << (((((((((arr_7 [i_2]) - (8173425043415785849LL))) - (27LL))) + (6135305268070586318LL))) - (24LL))))) >> (((/* implicit */int) var_3)))));
        var_23 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65525)))), (((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)16))))));
    }
    var_24 = ((/* implicit */long long int) var_0);
    var_25 = ((/* implicit */int) max((var_2), (((/* implicit */unsigned int) var_11))));
    var_26 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_0)), (var_15))), (((/* implicit */unsigned long long int) var_11))));
}
