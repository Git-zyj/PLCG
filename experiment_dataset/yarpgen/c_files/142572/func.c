/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142572
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
    var_19 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */short) var_5))));
    var_20 |= ((/* implicit */int) var_17);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((short) arr_3 [i_0] [(short)8] [i_2 - 1]))), (min((((/* implicit */unsigned long long int) arr_0 [(signed char)7])), (((unsigned long long int) 399419392U))))));
                    var_22 = ((/* implicit */_Bool) (+(arr_3 [(_Bool)1] [i_1 + 1] [(_Bool)1])));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [1LL]))))), (min((((/* implicit */unsigned long long int) arr_0 [i_2 + 1])), (var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_1 - 2]))))) : (arr_2 [i_2 - 1]))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_0))));
    var_25 &= ((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (399419378U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))), (((var_12) + (((/* implicit */unsigned long long int) var_9)))))));
}
