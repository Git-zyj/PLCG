/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113680
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) (-((((+(5543719476842496002LL))) & (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((var_1) + (((/* implicit */long long int) ((((/* implicit */_Bool) 5805058974104022981LL)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) (unsigned short)50822))))))), (var_11)));
        var_19 = ((/* implicit */long long int) 458752);
        var_20 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((var_13) + (2147483647))) >> (((arr_1 [i_0] [i_0]) - (5328407405693413223ULL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */int) var_12);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_1] [i_1]))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_1])) / (((/* implicit */int) arr_2 [i_1])))))));
    }
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)89)) : (var_16)))) : (((var_2) >> (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))))) : (var_15));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                arr_13 [i_2] [i_2] = min((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (5936748047893461885LL))), (((max((3054214036632196552LL), (arr_12 [i_2 + 2] [i_2]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3]))))))));
                var_23 = (-((~(max((((/* implicit */long long int) var_7)), (var_15))))));
            }
        } 
    } 
}
