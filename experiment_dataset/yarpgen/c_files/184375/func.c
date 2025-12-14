/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184375
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
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_2))));
    var_15 *= ((max((var_10), (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_4)))))) / (var_10));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) var_2))))) && (((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned char) ((signed char) var_7)))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) + (min((((/* implicit */int) var_8)), (var_10))))))))));
        var_18 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))), (max((((/* implicit */unsigned long long int) ((int) 4294967295U))), (var_7)))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_11))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 |= ((/* implicit */long long int) var_4);
        arr_5 [i_1] [(signed char)10] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_6)))))) * ((~(var_9)))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        arr_10 [4U] &= ((/* implicit */signed char) ((int) var_6));
        var_21 &= ((/* implicit */short) ((unsigned long long int) ((_Bool) var_6)));
    }
    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (var_0)))) || (((/* implicit */_Bool) var_11))));
}
