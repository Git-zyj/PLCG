/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120502
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */unsigned short) ((((arr_2 [(signed char)4]) > (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (max((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1] [i_2])), (arr_7 [i_0] [(_Bool)1] [i_2])))) ? (((int) arr_2 [i_1])) : (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8191))))))));
                    arr_8 [i_0] [i_2] = var_14;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (((unsigned long long int) (!(var_11)))))))));
    var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))));
}
