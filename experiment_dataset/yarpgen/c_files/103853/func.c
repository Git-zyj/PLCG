/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103853
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) -882186237148555051LL);
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (signed char)-44))))))) : (((max((((/* implicit */long long int) (unsigned short)24796)), (arr_1 [i_0 + 1] [i_0]))) ^ (((/* implicit */long long int) 237484807))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)90))))));
        arr_3 [(signed char)16] &= ((/* implicit */unsigned char) (~((+(21)))));
        var_15 -= ((/* implicit */long long int) arr_0 [(signed char)6]);
    }
    var_16 = ((/* implicit */unsigned short) ((((unsigned long long int) min((var_0), (var_9)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_17 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (((!(var_5))) && (((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_3))))))))) ^ (var_8));
}
