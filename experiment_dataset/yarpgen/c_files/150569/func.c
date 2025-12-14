/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150569
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
    var_13 = ((/* implicit */unsigned int) 18446744073709551615ULL);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) -37306422)) ? (1088693097) : (-1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned int) -37306422))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 911251971)))) : (912130045U))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 4321307013031042654LL))))), (-1)));
                arr_8 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -4321307013031042660LL)) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -1088693098)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [(_Bool)1]))))))));
                arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0])), ((unsigned short)21755))))) : (((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)220))))) : (((arr_6 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                arr_10 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_6);
    var_16 = ((/* implicit */short) min((((/* implicit */int) min((max((var_1), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) var_10))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)74)) : (var_11)))));
}
