/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15344
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
    var_16 = ((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) ((unsigned int) (-(var_14)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [(unsigned char)0])))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)4096)))))))) : (min((arr_1 [(unsigned char)12] [(signed char)1]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))))));
    }
}
