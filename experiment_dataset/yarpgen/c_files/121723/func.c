/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121723
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */short) (!(((/* implicit */_Bool) max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */int) (short)10786)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3778)) && (((/* implicit */_Bool) var_6))))))))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-10790)))) : ((~(((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) (unsigned short)3790))))) : ((-(9LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))))));
                var_22 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1 - 1] [i_1 - 1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)2950)))) != (var_0)));
    var_24 *= var_2;
}
