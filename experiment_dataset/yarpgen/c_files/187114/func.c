/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187114
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1791045411356563317LL), (((/* implicit */long long int) 1819997750))))) ? (min((((/* implicit */long long int) var_16)), (-5731797337861405301LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)7)))))))) ? (((var_1) ? (((/* implicit */int) max((var_8), (arr_2 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_9))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)10] [(unsigned short)10]))) : (5101930838793546066LL))) > (((/* implicit */long long int) ((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (signed char)62)))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_3 [14U] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)29848));
}
