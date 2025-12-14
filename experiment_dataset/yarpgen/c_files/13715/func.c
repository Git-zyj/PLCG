/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13715
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_11 = ((int) var_7);
        var_12 = ((/* implicit */signed char) 437195735);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 ^= ((/* implicit */long long int) arr_3 [(unsigned char)3]);
        var_14 ^= min((arr_4 [6U]), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_1 [(signed char)7])))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((437195735) != (var_1)))))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        arr_7 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
        var_15 = ((/* implicit */unsigned char) var_10);
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)3535))));
    }
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((var_0) <= (((/* implicit */unsigned int) var_7))))))));
    var_18 += ((/* implicit */short) min((((/* implicit */int) (unsigned char)133)), (437195732)));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((unsigned long long int) ((((/* implicit */_Bool) 437195735)) ? (((/* implicit */unsigned long long int) var_9)) : (210921664933982846ULL)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) var_1)))))))));
}
