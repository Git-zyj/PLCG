/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147201
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)30)) ^ (((/* implicit */int) (unsigned short)62663))));
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) arr_4 [i_1]);
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) arr_4 [i_0]))))) != (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62663)) ? (arr_3 [i_0]) : (arr_3 [1ULL])))) : (((unsigned long long int) var_3)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_16 -= ((/* implicit */short) arr_5 [6] [(unsigned char)14]);
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
    }
}
