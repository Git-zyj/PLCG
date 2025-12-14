/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153266
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((-448344802), ((-(((/* implicit */int) var_2))))));
                arr_7 [i_1] [i_0] = arr_0 [i_1];
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned int) -29358267)), (var_7))));
                arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (2619192940U)))) ? (((/* implicit */unsigned int) -761497874)) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))), (min((((/* implicit */unsigned int) -832460557)), (4294967295U)))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned short) ((unsigned char) (+(((((((/* implicit */int) (signed char)-120)) + (2147483647))) << (((((var_1) + (1841687380305508496LL))) - (11LL))))))));
    var_11 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_4))));
}
