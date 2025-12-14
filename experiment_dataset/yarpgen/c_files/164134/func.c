/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164134
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (short)32767))))) / (6127552182045460085LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : ((~((~(var_9)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */long long int) ((int) arr_1 [i_0])))))) ? ((~(((((arr_1 [i_1]) + (9223372036854775807LL))) << (((((var_6) + (465093096))) - (60))))))) : (((/* implicit */long long int) (~(arr_0 [11LL]))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((int) ((short) (+(var_6)))));
            }
        } 
    } 
}
