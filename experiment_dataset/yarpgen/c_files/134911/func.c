/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134911
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
    var_15 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) | ((~(var_0)))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) > (var_11)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = arr_3 [i_1 - 2] [i_0 + 1];
                var_18 = ((/* implicit */unsigned short) ((7289328010581645268LL) < (((((long long int) var_13)) - ((-(var_11)))))));
                var_19 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0]))))));
                var_20 = ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)32)), ((short)32760)));
            }
        } 
    } 
}
