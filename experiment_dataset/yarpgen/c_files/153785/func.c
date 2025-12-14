/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153785
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (unsigned short)8611))));
                var_13 -= ((/* implicit */unsigned char) (+((-(((arr_6 [i_1]) + (((/* implicit */long long int) var_1))))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)63))))) != (arr_5 [i_1] [i_1] [i_1 - 1])))) + ((+(((/* implicit */int) max(((unsigned short)24), (((/* implicit */unsigned short) arr_3 [6LL]))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-17016)) ? ((-((~(((/* implicit */int) var_6)))))) : (((/* implicit */int) var_9))));
    var_16 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) min(((unsigned short)56925), ((unsigned short)52080)))) != (((/* implicit */int) max((((/* implicit */short) var_0)), ((short)-31222)))))));
    var_17 = var_6;
}
