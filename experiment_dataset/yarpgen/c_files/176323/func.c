/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176323
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (-(((/* implicit */int) (short)-32357)))))));
                    var_11 = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) var_4)) >> (((arr_1 [i_0] [i_0]) - (4881254510300154387LL))))) / (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-109)))))) : (var_5)))) : (((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((((/* implicit */int) var_4)) >> (((((arr_1 [i_0] [i_0]) - (4881254510300154387LL))) - (220181652854869550LL))))) / (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-109)))))) : (var_5))));
                    var_12 = ((/* implicit */int) ((arr_0 [(unsigned short)0]) << (((((((((/* implicit */int) (signed char)-109)) + (2147483647))) << (((((/* implicit */int) (short)11925)) - (11925))))) - (2147483526)))));
                    var_13 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) min((var_5), (var_9)))), ((~(arr_0 [i_2])))))));
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_11 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                    arr_12 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_1] [i_3])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((var_3) / (((/* implicit */long long int) var_9))))))));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))))) * (((3427141030173741888ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)173))))))) / (((/* implicit */unsigned long long int) (-(7488233678622108582LL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
}
