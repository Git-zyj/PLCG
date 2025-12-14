/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124917
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
    var_20 |= ((/* implicit */int) var_10);
    var_21 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0)) ? (3695711232U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)-31171)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-16097)) - (arr_3 [i_0]))))))), (((arr_2 [i_0]) / (arr_2 [i_0])))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned long long int) 4611128662145553289LL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) (short)32759))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0])))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_23 += ((/* implicit */signed char) (~((-(arr_6 [i_1] [i_1])))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned char)245)))))))));
    }
}
