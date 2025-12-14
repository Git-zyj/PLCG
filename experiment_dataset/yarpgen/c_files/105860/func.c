/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105860
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [6] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))) : (2789599918U)))) >= (max((var_1), (((/* implicit */long long int) var_16)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) (+(var_12)))) / (var_5))) << ((((+(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)9)), ((unsigned short)8760)))))) - (8751)))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_14);
        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((2032U), (((/* implicit */unsigned int) var_4))))))))));
        var_20 = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) (~(134217472)))) && (((((/* implicit */_Bool) (signed char)64)) || (((/* implicit */_Bool) (signed char)-64))))))), ((signed char)127)));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -535540224)) ? ((+(((((/* implicit */_Bool) 387645457U)) ? (1152921504606846976LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)209)))));
    }
    var_21 &= ((/* implicit */signed char) min((((((/* implicit */int) var_3)) & (((/* implicit */int) max(((unsigned char)195), ((unsigned char)175)))))), (((/* implicit */int) var_17))));
    var_22 = (+(((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)14)), (var_6)))) / (((var_2) / (2047U))))));
}
