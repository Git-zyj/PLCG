/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146746
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
    var_10 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_6))))))))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (8191ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-123))))))));
    var_11 = ((((/* implicit */int) var_1)) * (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)3)))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (8170ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */int) var_7))))) : (8166ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    var_13 = ((/* implicit */int) ((max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_4))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
        arr_3 [(short)3] = ((/* implicit */signed char) var_1);
    }
}
