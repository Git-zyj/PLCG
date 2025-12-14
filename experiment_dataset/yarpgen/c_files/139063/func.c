/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139063
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (signed char)-108)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158)))))));
                var_15 += ((/* implicit */unsigned long long int) ((int) (unsigned char)152));
                var_16 -= ((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) ((max((var_0), (var_7))) == (var_2)))));
            }
        } 
    } 
}
