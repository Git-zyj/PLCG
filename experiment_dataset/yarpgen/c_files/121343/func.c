/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121343
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
    var_10 = ((/* implicit */unsigned int) var_4);
    var_11 -= ((/* implicit */signed char) ((short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) (signed char)1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((short) arr_1 [i_0] [i_0]));
        var_13 -= ((/* implicit */unsigned char) ((arr_0 [1U]) ^ (((/* implicit */unsigned long long int) ((long long int) var_0)))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((short) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) != (var_1))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_14 [i_1] [i_1] = ((/* implicit */int) ((377278545069520326ULL) == (((/* implicit */unsigned long long int) 3317173617U))));
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(short)7] [i_2] [i_3])) - (arr_9 [i_1] [i_2] [i_3] [i_1])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) var_4)))))));
                    }
                    var_14 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_8 [i_1])))) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */int) arr_5 [i_1])) ^ (((/* implicit */int) arr_5 [i_1])))))));
                }
            } 
        } 
    }
    var_15 = ((/* implicit */_Bool) max((var_15), (((((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_7))))))) <= (var_9)))));
}
