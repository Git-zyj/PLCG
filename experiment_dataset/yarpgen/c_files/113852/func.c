/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113852
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
    var_14 = ((/* implicit */unsigned char) var_2);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)12784))))) / ((+(var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-18727)) : (((/* implicit */int) var_11)))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) max((((/* implicit */int) var_7)), (var_12))))))) ? (var_4) : (var_13)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [(short)9] = ((/* implicit */signed char) min((((unsigned int) ((((/* implicit */int) (short)-26166)) ^ (((/* implicit */int) (signed char)32))))), (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) (short)18728)))))));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned char)105), (((/* implicit */unsigned char) ((signed char) arr_0 [(unsigned char)9]))))))));
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (short)32767);
        arr_5 [10ULL] = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) (signed char)-33)) ? (var_13) : (var_9))) | (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
    }
}
