/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188460
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
    var_18 = ((/* implicit */unsigned int) ((_Bool) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) & (3457643681U)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)57695)))) : (((/* implicit */int) min((arr_2 [i_0] [(_Bool)1]), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((/* implicit */long long int) 1848460241U)) : (min((var_7), (arr_10 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2])))));
                    arr_11 [i_0] [(unsigned short)6] [i_0] &= ((/* implicit */_Bool) ((669455320U) | (min((1848460258U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_0])) * (((/* implicit */int) arr_9 [i_0] [i_0])))))))));
                }
            } 
        } 
        var_20 |= ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) (unsigned short)49165)) ? (((/* implicit */unsigned int) arr_7 [i_0] [18LL])) : (var_6))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)45)) & (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((arr_9 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_10 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) var_1)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_7);
    var_22 = (-(((var_13) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) var_10)))));
    var_23 = var_2;
}
