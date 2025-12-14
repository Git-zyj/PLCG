/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105265
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0] = arr_3 [i_0];
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))), (((arr_3 [i_0 + 1]) / (arr_3 [i_0 - 1])))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -936059351015074315LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (6580865253690668443LL)));
                        var_11 ^= ((/* implicit */signed char) arr_10 [(short)15] [i_1] [i_2] [(short)15] [(_Bool)1]);
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_4))));
    }
    var_13 = ((/* implicit */signed char) ((((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))))) - (max((1035819823U), (((/* implicit */unsigned int) (signed char)-96)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_14 = ((/* implicit */_Bool) ((int) var_0));
}
