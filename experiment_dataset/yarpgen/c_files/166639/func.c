/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166639
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_4 [i_0] [i_0] [i_1])))), (max((var_3), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1]))))))), (max((max((var_7), (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) max((var_2), (221466111U))))))));
                var_12 = ((/* implicit */int) max((max((max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned int) (short)-6626)))), (max((var_3), (((/* implicit */unsigned int) var_1)))))), (max((max((((/* implicit */unsigned int) (_Bool)1)), (var_4))), (((/* implicit */unsigned int) max(((unsigned short)63280), ((unsigned short)63296))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) max((var_8), (-2147483642)))), (max((((/* implicit */long long int) var_8)), (var_9))))), (((/* implicit */long long int) max((max((var_5), (((/* implicit */unsigned char) (_Bool)0)))), (max((var_5), (var_5))))))));
}
