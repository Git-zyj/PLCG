/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14172
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
    var_16 = ((/* implicit */short) var_11);
    var_17 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((max((var_4), (((/* implicit */long long int) (_Bool)1)))) > (((/* implicit */long long int) ((/* implicit */int) var_7)))))), (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)13628)) : (((/* implicit */int) var_10))))))));
    var_18 = ((/* implicit */short) ((_Bool) var_9));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_19 *= ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)25484)) == (-1604284990))))))));
        var_20 *= ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) arr_3 [(signed char)6])) ? (arr_2 [i_1 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) var_13))))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((int) (!(var_1)))))));
    }
    for (int i_2 = 2; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((unsigned char) (-(1008956417799309163LL))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) var_3)), (39680225U)))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_0))));
}
