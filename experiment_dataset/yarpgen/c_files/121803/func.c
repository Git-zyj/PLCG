/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121803
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
    var_12 += ((/* implicit */signed char) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */_Bool) 700730690);
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        var_15 += ((/* implicit */unsigned int) (_Bool)0);
        arr_3 [i_0] = ((/* implicit */unsigned int) var_11);
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) ^ (((/* implicit */unsigned int) 1931357926)))))));
        arr_7 [(unsigned short)3] [i_1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_1]))))));
        var_17 += ((/* implicit */signed char) arr_5 [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        var_18 = max((((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) | (var_10))), (((/* implicit */long long int) (~(4244862569U)))));
        arr_10 [i_2] = ((/* implicit */signed char) ((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */unsigned int) var_0)))))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
    {
        var_19 *= ((/* implicit */_Bool) (signed char)124);
        arr_13 [i_3] [i_3] = ((/* implicit */int) var_4);
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_2))));
}
