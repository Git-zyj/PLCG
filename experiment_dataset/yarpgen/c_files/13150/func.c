/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13150
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
    var_13 = (+(((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) var_1))))) ? (((/* implicit */int) ((unsigned short) (short)-1))) : ((+(((/* implicit */int) var_11)))))));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */int) var_5)) != (((((/* implicit */int) var_1)) >> (((min((1842748242319804896ULL), (((/* implicit */unsigned long long int) (short)18202)))) - (18196ULL))))))))));
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned short) var_11))) ? (33554431LL) : (((/* implicit */long long int) ((((-2145079855) + (2147483647))) >> (((((/* implicit */int) var_11)) - (143)))))))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) * ((-(((/* implicit */int) (short)19509)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_1 [(unsigned short)22] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2] [(unsigned char)0] [i_2])) * (((/* implicit */int) arr_2 [(unsigned char)14] [i_1])))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9882)) ? (((/* implicit */int) arr_2 [i_0] [0LL])) : (((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (((((/* implicit */int) arr_2 [i_0] [i_1 - 1])) % (((/* implicit */int) arr_2 [i_2] [i_1 - 1])))) : (((/* implicit */int) max((arr_2 [i_0] [i_2]), (arr_2 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */_Bool) max((((/* implicit */long long int) ((min((1006632960), (((/* implicit */int) (short)-1)))) - ((-(((/* implicit */int) var_9))))))), (((long long int) min((((/* implicit */long long int) (signed char)114)), (-4497922401469944743LL))))));
}
