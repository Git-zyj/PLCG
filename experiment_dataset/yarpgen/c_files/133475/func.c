/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133475
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((((/* implicit */_Bool) (~(2146435072U)))) ? (((/* implicit */int) min((((/* implicit */short) var_15)), ((short)-735)))) : (((/* implicit */int) var_7))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)0)), (17395479237112165766ULL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) | ((-(arr_5 [(short)6])))))) : (8700881121748642577LL));
                arr_6 [i_0] = ((/* implicit */short) (~(1608975334866528682LL)));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_14);
    var_19 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)60)) << ((((~(((/* implicit */int) var_6)))) + (50207)))));
}
