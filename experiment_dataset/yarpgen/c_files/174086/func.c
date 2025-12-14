/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174086
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
    var_20 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)6905))));
    var_21 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [8LL] [i_1 + 1]);
                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) min(((-(((/* implicit */int) var_6)))), (-2110159535)))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (var_7)))) != (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */int) var_0))))))) : (((/* implicit */int) ((signed char) arr_4 [i_1 + 1] [i_1 - 1])))))));
                var_23 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) (signed char)-115)))))) ? (((/* implicit */int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (short)-6902))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))) : (((/* implicit */int) var_13))));
}
