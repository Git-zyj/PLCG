/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157465
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 14291213963404513516ULL);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 17U))));
                    var_20 = ((/* implicit */int) ((min((((/* implicit */long long int) var_4)), (var_13))) >> (((max((var_1), (((/* implicit */long long int) (short)-8)))) - (1653552392021479092LL)))));
                    var_21 = ((/* implicit */long long int) ((short) ((unsigned int) arr_0 [i_0])));
                    var_22 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [10U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)14))))), (arr_4 [i_0]))) % (((/* implicit */unsigned long long int) (~(4122261294476749041LL)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) ((short) 1754929274U))) : (((/* implicit */int) (short)32051)))) << ((((~(max((((/* implicit */unsigned int) var_18)), (var_17))))) - (29940U))))))));
    var_24 -= ((/* implicit */unsigned int) var_3);
    var_25 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */short) max((((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((((/* implicit */long long int) ((/* implicit */int) (short)8))) <= (var_1))))))));
}
