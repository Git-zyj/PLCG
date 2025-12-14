/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17551
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
    var_17 = ((((((/* implicit */_Bool) (unsigned short)62437)) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned short)62437)) : (((/* implicit */int) (unsigned short)62437)))) : ((~(((/* implicit */int) (unsigned short)3099)))))) == (((/* implicit */int) var_16)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) * (((((/* implicit */_Bool) (unsigned char)200)) ? (3177164637786672964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0])), (arr_3 [i_0 - 1]))))) & (var_2)));
            }
        } 
    } 
}
