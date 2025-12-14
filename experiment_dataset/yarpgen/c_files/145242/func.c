/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145242
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */int) arr_9 [i_2] [i_1] [i_0]);
                    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_2])) >> (((((/* implicit */int) var_3)) - (201)))));
                }
            } 
        } 
        arr_12 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_16 [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_4)))) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((unsigned int) var_6)))));
        arr_17 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) -7867320814508294431LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4))) : (((((/* implicit */_Bool) 2126551877U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (17618614072396308339ULL)))));
    }
    var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (max((((((/* implicit */_Bool) (signed char)-73)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6008))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -616017732)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
}
