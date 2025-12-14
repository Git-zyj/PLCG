/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105006
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
    var_14 = ((long long int) var_8);
    var_15 = var_12;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) ((signed char) (signed char)-82)))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(281474976710655LL)))) ? (((arr_9 [i_0 - 1] [i_1] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)102))))) : (arr_0 [i_1] [i_2]))) : (((/* implicit */long long int) (((!(var_5))) ? ((+(((/* implicit */int) arr_5 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((var_4), (((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_4)))));
}
