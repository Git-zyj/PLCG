/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168853
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
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned int) var_8)), (var_10)));
    var_19 = ((/* implicit */int) var_3);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) var_1)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) >> (((((/* implicit */int) (unsigned short)19080)) - (19057))))))))) ? ((+((-(((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((((/* implicit */int) (short)2317)) + (482377891)))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)1);
            }
        } 
    } 
}
