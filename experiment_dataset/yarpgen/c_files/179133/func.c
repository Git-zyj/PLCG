/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179133
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((-502770801), ((~(((/* implicit */int) ((unsigned char) 1533635996U))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))), (((short) arr_1 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_18 = (-(((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_2 [i_0 - 1])))));
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -502770801)) ? (1540346906) : (((/* implicit */int) (short)10729)))))));
        }
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((int) arr_1 [3ULL]));
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (short)22428)))))), (max((min((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (arr_5 [i_2] [i_2] [i_2]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) & (var_5)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_0 [i_2]) << (((arr_6 [i_2]) + (324801638717509020LL)))))) ? (((/* implicit */long long int) ((arr_1 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2])))))) : (arr_6 [i_2]))), (((/* implicit */long long int) min((((/* implicit */int) (short)-405)), (998040081))))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_3))));
}
