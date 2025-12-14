/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105632
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 2] [i_2] [i_2] = arr_1 [(short)18];
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) arr_4 [i_0 + 3])), (min((((/* implicit */short) (_Bool)1)), ((short)-581))))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [i_2]) ? (max((max((4293936705U), (((/* implicit */unsigned int) (unsigned short)20525)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28342)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        var_21 = ((/* implicit */unsigned int) var_9);
                        var_22 -= ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */short) arr_4 [i_3])), (var_18)))), ((-(max((((/* implicit */long long int) (unsigned short)11689)), (var_3)))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_11);
}
