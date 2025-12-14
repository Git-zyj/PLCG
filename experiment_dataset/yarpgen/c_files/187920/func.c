/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187920
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned short) arr_1 [i_0 - 1])), (((/* implicit */unsigned short) arr_6 [i_2] [i_0 - 1] [i_2])))))) % (((arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)14] [i_1]))))))))));
                    var_12 *= (-(arr_7 [i_0 - 1] [i_2]));
                    var_13 = ((/* implicit */_Bool) ((arr_3 [5]) + (((int) min((var_10), (((/* implicit */unsigned long long int) (unsigned short)1023)))))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */short) (_Bool)0);
    var_15 = ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (var_2))))))))))));
}
