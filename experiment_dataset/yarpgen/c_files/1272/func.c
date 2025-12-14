/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1272
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) var_9))) : ((-(((/* implicit */int) (short)-5106))))));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_6)))))))) > (((((/* implicit */_Bool) ((var_8) << (((((((/* implicit */int) (short)-11007)) + (11042))) - (35)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-5707355027780929816LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20074))))))) : (var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? ((+(94077544381952079LL))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_3 [i_0]))))))));
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8638799679038417287LL))));
                arr_6 [i_0] = ((((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58456))))) ? (((unsigned long long int) arr_4 [i_1 + 1] [i_0] [i_1 + 2])) : (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1 + 1] [i_0] [i_1 + 1]))));
            }
        } 
    } 
}
