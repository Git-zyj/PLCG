/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158966
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
    var_17 -= ((/* implicit */short) (~((-(var_4)))));
    var_18 *= ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_10))))))))));
        var_20 ^= ((int) ((unsigned int) var_9));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (arr_4 [i_1]))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-79)) ? ((~(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) ((signed char) var_4))) + (((/* implicit */int) arr_0 [i_1])))))))));
    }
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)115)))), (var_9))))));
    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_11))) >> (((((var_13) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned char)115))))) : (min((((/* implicit */unsigned long long int) (signed char)-100)), (var_6)))))));
}
