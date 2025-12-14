/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15801
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
    var_11 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [3ULL] [i_0])) - (((/* implicit */int) var_3))))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_4)))) : (1039780679U)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_3))))), (((((/* implicit */unsigned int) -1660173817)) - (arr_0 [i_0] [i_0 + 2])))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 + 1])) : (var_9)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1660173807)), ((+(-7520880761186981503LL)))));
                        var_13 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 2] [i_1])) ? (((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 3] [i_1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 3] [i_1]))))) < (max((((/* implicit */unsigned long long int) var_4)), (var_9)))));
                        var_14 |= ((/* implicit */unsigned char) ((unsigned long long int) ((var_0) ? (((arr_1 [i_0] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) min((1882939885), (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1]))));
    }
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_4))));
}
