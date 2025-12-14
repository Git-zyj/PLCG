/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133042
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_10))) ? ((-(-340068895))) : (((((var_7) + (2147483647))) >> (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                var_14 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_7)))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25626)) / (253310282))))));
            }
        } 
    } 
    var_15 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56561)) * (((/* implicit */int) var_4))))) ^ (min((var_13), (((/* implicit */unsigned int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))));
        var_17 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2731629051795818921ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_9), (min((min((((/* implicit */short) (unsigned char)20)), ((short)-1095))), (((/* implicit */short) (unsigned char)20))))));
}
