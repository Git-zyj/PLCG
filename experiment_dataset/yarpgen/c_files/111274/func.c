/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111274
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-20486))) <= (arr_6 [i_0] [i_0] [i_0]))))) : ((+(var_0))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_10 = ((/* implicit */short) max((max((arr_1 [i_0 - 2] [i_0 - 2]), (((/* implicit */long long int) (unsigned short)65521)))), (((/* implicit */long long int) ((short) (_Bool)1)))));
                    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7))), (((/* implicit */unsigned long long int) ((1048572LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))))))))));
                }
            } 
        } 
    } 
    var_12 = ((((/* implicit */_Bool) ((long long int) max((var_5), (var_5))))) ? (var_7) : (var_7));
}
