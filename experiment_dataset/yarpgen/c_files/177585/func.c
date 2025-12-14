/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177585
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 &= ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)19008)) >= (((/* implicit */int) arr_1 [i_0])))))) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_6))))), (((/* implicit */unsigned long long int) (~(arr_3 [i_2 + 1] [i_2] [i_2 - 1]))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_7 [(signed char)0] [i_2 - 1] [(short)6]);
                    arr_9 [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) var_9);
                    arr_10 [i_0] [i_1] [i_2 - 1] = ((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_7))))))) % (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) min(((short)19022), ((short)19018)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)19022)) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19008))) < (619532317U))))));
}
