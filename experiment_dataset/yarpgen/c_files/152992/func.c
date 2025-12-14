/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152992
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
    for (signed char i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2 + 2])))))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 2])))));
                    arr_8 [i_0] [(unsigned char)10] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2 + 1]))) : (520776536U)))) ? (((/* implicit */int) (signed char)-73)) : (1212711743)));
                    arr_9 [i_1] [i_1] = max(((short)-25223), ((short)251));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_0);
}
