/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146900
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
    var_10 = ((/* implicit */short) max((((unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (min((435519208U), (((/* implicit */unsigned int) var_2)))))))));
    var_11 -= ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) ((var_4) < (((/* implicit */long long int) var_0)))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))) : (((((var_3) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 10425314748132980549ULL)))) : (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (3859448079U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    var_12 ^= ((/* implicit */unsigned short) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)31385)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39403))))));
        var_13 ^= (!(((/* implicit */_Bool) var_4)));
        var_14 = ((/* implicit */short) ((unsigned char) arr_2 [i_0] [i_0]));
        var_15 = ((/* implicit */_Bool) var_9);
        var_16 = ((/* implicit */unsigned char) 3859448079U);
    }
}
