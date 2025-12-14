/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17637
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_16 *= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))) == ((+(((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
        var_17 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(13494167881411396439ULL)))))))));
        var_18 = ((/* implicit */signed char) (((~((-(var_3))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (((-(4952576192298155177ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [20U]))) <= (4952576192298155169ULL)))))))))));
    }
    var_19 = ((/* implicit */unsigned char) (((-(((var_13) ^ (13494167881411396447ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) && (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))))))));
    var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12))))))))));
}
