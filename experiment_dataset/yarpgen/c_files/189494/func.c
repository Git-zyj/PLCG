/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189494
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] = (~(((/* implicit */int) (short)-2507)));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */signed char) (-((((~(var_12))) & (((/* implicit */long long int) max((var_17), (((/* implicit */int) var_4)))))))));
    var_20 = ((/* implicit */short) (+(var_17)));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) (+(1262513528U)))) | (var_2))) / (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)25056)) ? (((/* implicit */int) (unsigned short)63999)) : (((/* implicit */int) (short)11808)))) % (((/* implicit */int) max((((/* implicit */short) (signed char)31)), ((short)-11809)))))))));
}
