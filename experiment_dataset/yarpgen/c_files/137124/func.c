/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137124
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53182)) | (((/* implicit */int) (signed char)-100))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */int) var_7))))) & ((-(((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */int) (signed char)100)) / (-413190965))) : (var_2)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((~(var_8))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12353)))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2769)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53182))) : (var_3)))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53197)) & (var_8))))))))));
        var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) : (((var_2) + (var_9)))))) ? (((/* implicit */unsigned long long int) ((var_8) | (((/* implicit */int) arr_5 [i_1] [i_1]))))) : (((var_3) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1])))))))));
    }
    for (signed char i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        var_12 = (-(((((/* implicit */_Bool) (unsigned short)53176)) ? (-1826938207) : (((/* implicit */int) (unsigned short)12338)))));
        arr_10 [i_2 - 3] [i_2 + 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_5 [i_2 - 3] [i_2 - 1])), (var_6))) | (((/* implicit */unsigned int) min((var_9), (((((/* implicit */_Bool) (signed char)124)) ? (8355840) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_11 [i_2 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_2 - 2]), (arr_7 [i_2 + 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53197))) & (arr_7 [i_2 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_2 - 2]))))));
    }
    var_13 = ((/* implicit */unsigned int) min((var_2), (var_8)));
}
