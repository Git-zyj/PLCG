/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115793
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
    var_16 = ((/* implicit */signed char) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1488606072))))))));
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [(short)1] = ((/* implicit */unsigned char) ((((int) var_11)) >> (((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))));
                arr_5 [i_1] [i_1] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)66))))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (short)-31163)) : (-32768)))))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                arr_7 [i_0] [8] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (arr_1 [(unsigned short)4] [i_1]) : (((/* implicit */int) (signed char)-41))))) ? ((~(((/* implicit */int) (unsigned short)25)))) : ((+(-163598248)))));
            }
        } 
    } 
}
