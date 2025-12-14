/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182744
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
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) / (var_10)))) : (max((((/* implicit */long long int) var_2)), (var_15)))))), (var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_10)) : (arr_1 [i_0]))))));
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (3963627552256529096ULL));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) arr_4 [i_1]);
        var_22 ^= ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_8)))));
    }
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (((var_15) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_2])))))));
                var_25 = ((/* implicit */unsigned int) ((var_15) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_2 - 1] [i_2])), (arr_7 [i_2] [i_2]))))));
            }
        } 
    } 
}
