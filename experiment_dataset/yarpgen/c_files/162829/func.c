/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162829
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
    var_18 = ((/* implicit */_Bool) 321962387580064196LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (-1131533682) : (((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) ((11722318644381801248ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [0U]))) : (min((max((5362836763740174216ULL), (((/* implicit */unsigned long long int) (unsigned short)27002)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-22)) & (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) 6724425429327750368ULL)))), ((!(((/* implicit */_Bool) 5617786835275907724LL))))));
        arr_6 [i_1] &= ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_4 [12ULL])))))));
    }
    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) >> (((/* implicit */int) var_12))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) var_1))) - (var_14))), (((/* implicit */long long int) (-(((/* implicit */int) var_11))))))) : (((/* implicit */long long int) var_8))));
}
