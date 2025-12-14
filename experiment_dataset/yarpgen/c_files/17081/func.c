/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17081
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
    var_11 = var_3;
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) (_Bool)1);
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0] [i_2 - 1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_6)) ? (arr_6 [i_0] [i_2 - 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14931)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_3 = 1; i_3 < 8; i_3 += 2) 
    {
        var_16 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_9))))) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned short) ((long long int) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
    {
        var_18 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        var_19 = ((/* implicit */long long int) (+(150705909U)));
    }
    for (long long int i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) arr_14 [(short)8]);
        var_20 = ((/* implicit */unsigned char) ((((_Bool) arr_14 [8LL])) ? (((unsigned int) var_4)) : (min((((/* implicit */unsigned int) var_9)), (arr_14 [(unsigned short)6])))));
        arr_20 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(_Bool)1]))))) ^ (((/* implicit */int) (_Bool)1))));
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [8ULL] [i_5 - 1])))))));
    }
}
