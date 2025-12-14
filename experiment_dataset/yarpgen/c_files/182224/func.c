/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182224
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
    var_11 |= var_2;
    var_12 = var_6;
    var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)80)) ? (var_9) : (var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) -6282781748444589995LL);
        var_14 = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) -1647932255)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (var_7))) : (((/* implicit */long long int) -1157268642))))));
        var_15 = ((/* implicit */int) 2076273581672953924LL);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (1157268639) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) -8048963718958706254LL)) ? (2076273581672953930LL) : (2076273581672953924LL))) : (((((/* implicit */_Bool) 2076273581672953941LL)) ? (((/* implicit */long long int) var_5)) : (1447392798155411116LL)))));
        arr_7 [i_1] = 2076273581672953924LL;
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_7)) ? (var_0) : (var_6)))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (-901410072)))));
            var_16 += ((/* implicit */long long int) 1157268668);
        }
    }
    var_17 = ((/* implicit */unsigned char) var_0);
}
