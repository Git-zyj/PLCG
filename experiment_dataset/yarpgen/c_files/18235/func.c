/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18235
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
    var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)56307)), (((((/* implicit */_Bool) (unsigned short)47119)) ? (2797320602U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))))))) : (var_9)));
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))) - (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 &= ((/* implicit */long long int) arr_5 [i_1]);
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 - 2] [i_2]))) != (arr_0 [i_1])));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
    {
        arr_13 [i_3] = ((/* implicit */_Bool) ((arr_1 [i_3] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3]))) : (max((((var_11) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))))), (((/* implicit */long long int) arr_4 [i_3 + 2] [i_3] [i_3]))))));
        var_17 -= ((/* implicit */unsigned char) (~(((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (arr_0 [i_3]))) ? (arr_7 [i_3] [i_3] [i_3 + 1]) : (((/* implicit */int) arr_2 [i_3]))))));
        arr_14 [i_3] = ((/* implicit */short) arr_8 [i_3 + 1] [i_3]);
        var_18 &= ((((/* implicit */_Bool) ((int) max((arr_6 [i_3] [i_3]), (((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_4 [i_3 - 2] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_3] [i_3])) : (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_3] [i_3])), (var_2)))))) : (((/* implicit */int) var_0)));
    }
    var_19 = ((/* implicit */signed char) var_9);
}
