/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121189
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) min((-19645867), (((/* implicit */int) (unsigned short)12333))))))));
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((long long int) 1145372662U)) : (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) (~(((/* implicit */int) ((short) (signed char)-1))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((signed char) 610226622U));
        arr_5 [7] [i_0] |= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 610226622U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)127))))), (((unsigned long long int) arr_3 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((short) (unsigned short)5643)));
        arr_8 [i_1] |= ((/* implicit */int) ((((((/* implicit */_Bool) 610226622U)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_6 [i_1])))) : (max((203176349701807624LL), (((/* implicit */long long int) (unsigned short)59892)))))) >= (((/* implicit */long long int) 3475690089U))));
    }
    var_22 &= ((/* implicit */short) min((((/* implicit */int) ((_Bool) var_1))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1566192021)), (1093818204U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_2))))));
    var_23 &= ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5916))) : (var_14))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_16))))), ((~(1593619295U)))));
}
