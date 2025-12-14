/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153895
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((arr_3 [i_0]) / (arr_3 [6])))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [(signed char)5] [i_0])) : (var_2)))) : (((long long int) arr_0 [i_0] [1U]))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_0 [(unsigned short)7] [i_0 + 2])), (((unsigned int) ((((/* implicit */int) (unsigned short)57127)) == (((/* implicit */int) (unsigned short)8412))))))))));
    }
    var_21 = ((/* implicit */signed char) var_10);
    var_22 = ((/* implicit */int) var_12);
    var_23 = ((((var_9) / (var_9))) >> (((var_14) + (1025041115))));
}
