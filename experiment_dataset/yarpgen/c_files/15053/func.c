/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15053
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
    var_10 = ((((/* implicit */_Bool) ((((_Bool) (short)-22292)) ? ((~(var_0))) : (((((/* implicit */_Bool) 426788819U)) ? (12673508470611453588ULL) : (var_0)))))) ? (min((((unsigned long long int) 0)), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((unsigned int) min((var_3), (1024206192))))));
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) var_2);
        var_13 &= ((/* implicit */short) (-(((long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_14 = ((unsigned long long int) (_Bool)1);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
        var_15 = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242)))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_4))));
    }
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) ((unsigned short) var_7));
        arr_13 [i_2] = ((/* implicit */unsigned short) ((((_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    }
    var_17 = ((/* implicit */_Bool) var_9);
}
