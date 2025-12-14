/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178813
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17)))))) / (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)12)) : (-1614409263))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_17);
        arr_3 [(short)16] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_8 [2] |= ((/* implicit */unsigned int) arr_1 [i_1 + 1]);
        var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_4 [(unsigned char)2])) + (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_1 + 1]))))));
    }
    for (short i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (~(-1))));
        var_21 *= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_13))))))));
        var_22 = ((/* implicit */signed char) arr_10 [i_2 - 1] [i_2 + 1]);
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_2)))))) ? (max((((/* implicit */int) ((short) var_0))), ((~(((/* implicit */int) (unsigned short)1964)))))) : (((/* implicit */int) max((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) (unsigned char)0)))))))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1032064150)) ? (var_16) : (2147483647)));
    var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-1))));
}
