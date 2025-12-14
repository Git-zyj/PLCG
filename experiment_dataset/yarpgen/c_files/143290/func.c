/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143290
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
    var_19 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_1 [i_0]))))) < (((((/* implicit */_Bool) arr_2 [i_0] [(signed char)14])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_0)))))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (arr_2 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) min((var_6), (arr_1 [i_1])))), (var_5)))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) var_16);
}
