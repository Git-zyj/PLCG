/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11636
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (unsigned short)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (min((((/* implicit */long long int) (unsigned short)65528)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 879187084U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = 3415780210U;
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_0);
    var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((var_2), (((/* implicit */short) var_0))))))))));
    var_22 = ((/* implicit */unsigned long long int) var_5);
}
