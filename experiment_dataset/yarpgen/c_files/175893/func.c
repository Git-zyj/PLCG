/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175893
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((int) (~(((/* implicit */int) (signed char)-10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(min(((~((-2147483647 - 1)))), (((-2147483630) & (var_11)))))));
                arr_6 [i_0 - 1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (((unsigned long long int) (!(((/* implicit */_Bool) var_7)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_1)) - (78))))) << (((((long long int) var_6)) - (36297LL))))));
    var_16 = ((/* implicit */unsigned long long int) var_3);
}
