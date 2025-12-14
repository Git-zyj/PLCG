/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177092
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((unsigned int) arr_0 [i_0]);
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_18))))))) ? (((/* implicit */long long int) arr_0 [i_0])) : (((((/* implicit */_Bool) (signed char)-101)) ? (3184988459752133303LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
        arr_7 [17U] = ((/* implicit */short) ((unsigned int) arr_0 [i_1]));
    }
    for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) max((arr_8 [i_2]), (arr_8 [i_2])))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_2])))))));
        arr_10 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (short)-1)))))), (min((((/* implicit */int) min(((short)-18), (((/* implicit */short) arr_8 [i_2]))))), ((~(((/* implicit */int) arr_8 [i_2]))))))));
        var_23 = ((/* implicit */short) ((long long int) (signed char)98));
        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34633))) : (-3184988459752133303LL))));
    }
    var_25 = ((/* implicit */signed char) 4294967295U);
}
