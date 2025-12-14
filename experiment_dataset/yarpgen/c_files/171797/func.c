/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171797
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
    var_19 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) ((short) var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = max((min((((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [(unsigned char)11]) : (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) - (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */short) (unsigned char)127)))))))));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
}
