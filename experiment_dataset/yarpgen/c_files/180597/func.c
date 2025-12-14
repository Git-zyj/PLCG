/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180597
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((~(min((var_17), (((/* implicit */long long int) var_6)))))) > (((long long int) var_8)))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_15))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_0 [i_2])))) * (((/* implicit */int) (_Bool)0)))))));
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [(unsigned char)8])) ? (((((/* implicit */_Bool) arr_0 [(short)18])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1])))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                }
            } 
        } 
    } 
}
