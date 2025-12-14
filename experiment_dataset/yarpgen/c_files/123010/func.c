/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123010
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
    for (short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + (8248688907092912094ULL))), (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58032))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) var_2));
                var_10 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 4]))) : (max((((/* implicit */unsigned long long int) (unsigned short)7503)), (arr_4 [i_0] [i_0] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) / (min((arr_2 [i_0]), (((/* implicit */int) (_Bool)1)))))))));
                arr_9 [i_0] = ((/* implicit */short) ((min((((int) var_3)), (((/* implicit */int) var_7)))) | (((((/* implicit */int) var_5)) ^ (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)58032))))))));
                var_11 = ((/* implicit */long long int) arr_0 [i_0]);
            }
        } 
    } 
    var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((int) var_3))))) - (max((((/* implicit */long long int) var_5)), (var_6)))));
}
