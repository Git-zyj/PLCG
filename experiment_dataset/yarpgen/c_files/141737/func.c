/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141737
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [1] [i_0] [(_Bool)1] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_1] [i_2])))))), (((unsigned long long int) ((int) var_5)))));
                    var_15 = (-(((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) | (var_10)))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_9);
    var_17 ^= ((((/* implicit */_Bool) (~(((long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_8)), (-166367974)))))))) : (max((((long long int) var_2)), (var_5))));
    var_18 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_0))))) || (((((/* implicit */_Bool) (signed char)114)) || (var_6)))));
    var_19 = ((/* implicit */short) var_11);
}
