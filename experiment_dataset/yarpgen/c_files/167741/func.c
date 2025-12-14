/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167741
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
    var_10 -= ((/* implicit */unsigned short) var_4);
    var_11 = ((/* implicit */int) min((max((-3726848114427441197LL), ((-(var_8))))), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
    var_12 = ((/* implicit */_Bool) -3726848114427441197LL);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-3726848114427441197LL)))) ? (((long long int) (unsigned char)8)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 2])))))))))));
                var_14 = ((/* implicit */unsigned char) (((-(((unsigned long long int) arr_3 [i_0])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54)))));
            }
        } 
    } 
}
