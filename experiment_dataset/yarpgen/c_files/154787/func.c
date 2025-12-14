/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154787
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
    var_12 = max((((/* implicit */int) var_5)), ((~(((/* implicit */int) (unsigned short)62256)))));
    var_13 = ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(var_6)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)212);
        var_14 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)38));
        arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18913)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)212)) % (((/* implicit */int) (unsigned char)74))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (arr_2 [i_0] [i_0]))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((signed char) var_4));
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_15 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */int) (unsigned short)41018)) ^ (956873806))) >= (((((/* implicit */_Bool) arr_8 [i_1] [(signed char)5])) ? (956873806) : (((/* implicit */int) var_9)))))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-956873806)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1] [i_1]) < (((/* implicit */unsigned long long int) var_0)))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1] [i_1])))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_14 [i_2] [i_2] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)212)), (((((/* implicit */_Bool) ((956873787) >> (((((/* implicit */int) (unsigned char)43)) - (38)))))) ? (956873806) : (((int) (unsigned char)53))))));
        var_17 = ((/* implicit */unsigned char) (~((+(956873806)))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [(short)13] [i_2])) ? (((((/* implicit */_Bool) -956873816)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (short)11361)))) : ((~(((((/* implicit */_Bool) 956873806)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (signed char)-1))))))));
    }
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)59)))), (arr_9 [i_3 + 2] [i_3]))), ((-((+(((/* implicit */int) (unsigned char)4))))))));
        arr_19 [i_3] = ((/* implicit */unsigned char) ((int) ((956873806) <= (((/* implicit */int) (unsigned char)250)))));
    }
    var_19 = ((/* implicit */long long int) (short)-25146);
}
