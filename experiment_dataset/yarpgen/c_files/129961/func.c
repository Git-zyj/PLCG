/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129961
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
    var_14 = ((/* implicit */short) max((var_14), (var_3)));
    var_15 = ((/* implicit */short) max((max((((/* implicit */long long int) (+(-1187671982)))), (var_5))), (((/* implicit */long long int) (((~(var_11))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (-5249901030254081756LL)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)62354)) / (2139095040))))));
        arr_3 [i_0] = ((short) ((2147483647) - (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_3))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_10))));
    }
}
