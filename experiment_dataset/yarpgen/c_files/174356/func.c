/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174356
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_1 - 2])), (arr_2 [i_1 + 1])))) ? (arr_0 [i_1 + 1] [i_1 + 1]) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)229)) != (((/* implicit */int) (unsigned short)59267))))), (arr_0 [i_1 - 2] [(short)3])))));
                var_11 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6269))) | (483489378824712531ULL)));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) min((var_7), (var_10)))), (min((var_2), (((/* implicit */unsigned short) var_1)))))))));
}
