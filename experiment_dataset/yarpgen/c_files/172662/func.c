/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172662
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
    var_20 -= ((/* implicit */short) var_18);
    var_21 = ((/* implicit */signed char) max((var_21), (var_6)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1])) / (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [(unsigned short)1])))) * (max((-1), (var_2)))));
                    var_23 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)133))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)12628))) * (0U)))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_1]))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17261)) || (((/* implicit */_Bool) (signed char)-123))))) : (max((((/* implicit */int) ((68169720922112ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))), ((+(var_12)))))));
                }
            } 
        } 
    } 
}
