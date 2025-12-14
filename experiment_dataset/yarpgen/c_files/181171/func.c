/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181171
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((4121979636166921077ULL) >> (((9223372036854775807LL) - (9223372036854775781LL)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_0])) >> ((((~(arr_1 [i_0] [i_0]))) + (9101657140892713842LL)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((short) ((_Bool) (+(((/* implicit */int) var_4))))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (-(((/* implicit */int) var_6)))))));
    var_13 = var_4;
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_8))));
}
