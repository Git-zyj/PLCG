/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134147
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
    var_12 = ((/* implicit */unsigned int) ((var_5) << (((((/* implicit */int) (unsigned char)235)) - (235)))));
    var_13 = ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) 785669017334145689ULL);
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))) & (((/* implicit */int) arr_1 [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))))))));
            }
        } 
    } 
}
