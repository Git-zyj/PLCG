/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182712
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
    var_12 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned int) 506016490)) : (arr_2 [i_0] [i_1] [i_1])))) ^ (var_1)));
                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 2184768220U))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_10);
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 2184768206U)) && (((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12789))))))))));
}
