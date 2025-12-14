/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112830
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) ((((/* implicit */long long int) var_1)) >= (var_4)))))));
    var_18 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) <= (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0])))))));
        arr_3 [2] &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((arr_0 [(short)12]) > (((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) -8584607575062419257LL)) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [8])))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [10LL])) || (((/* implicit */_Bool) arr_10 [(signed char)14] [i_1] [i_0] [i_3]))))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_8 [i_3] [i_1] [i_0]))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_14))));
                        var_21 *= ((/* implicit */unsigned long long int) ((short) var_1));
                    }
                } 
            } 
        } 
    }
}
