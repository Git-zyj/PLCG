/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145864
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
    var_14 -= ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((-850568894) + (var_4))))))));
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -850568894)) % (117440512U)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (+(var_0)))) : (min((((/* implicit */unsigned long long int) var_7)), (var_11)))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) (unsigned char)82);
        var_18 += ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [(short)0]))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)170);
        arr_4 [i_0] = ((/* implicit */int) (_Bool)1);
    }
}
