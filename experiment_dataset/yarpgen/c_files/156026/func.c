/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156026
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) (short)32760))))), ((+(((/* implicit */int) var_4)))))) : (((/* implicit */int) var_8))));
    var_12 ^= max((var_5), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) ((short) var_7)))))));
    var_13 = (+(((/* implicit */int) var_2)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                    var_15 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) (signed char)58)), (arr_4 [i_2] [i_1] [i_0]))))), (((/* implicit */long long int) ((unsigned short) var_1)))));
                }
            } 
        } 
    } 
}
