/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127590
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8284)) ? (((/* implicit */int) (short)8284)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_1 [i_0])))) : (((unsigned long long int) -1554628993))))) ? (((long long int) arr_7 [4U] [i_1] [4U] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_18 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_6))));
    var_20 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) * (((((var_3) + (9223372036854775807LL))) >> (((var_13) - (229201691U))))))) & (((/* implicit */long long int) (+(var_13))))));
}
