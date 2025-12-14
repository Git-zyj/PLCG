/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154936
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3 + 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1])) ^ (arr_9 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 2] [16])));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_11)) & (((/* implicit */int) arr_5 [i_1] [i_1])))) * (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]))));
                        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_3 + 2])) % (((/* implicit */int) arr_1 [i_3 + 2]))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */int) var_12);
    var_19 += ((/* implicit */short) var_13);
}
