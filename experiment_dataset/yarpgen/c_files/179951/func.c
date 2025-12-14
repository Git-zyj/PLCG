/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179951
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1764945879)))) / (((((/* implicit */_Bool) 3871488138U)) ? (((var_6) / (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) != (((/* implicit */unsigned int) var_0))))))))));
    var_18 = ((/* implicit */short) ((unsigned int) var_3));
    var_19 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
    var_20 = var_11;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_1])), (var_9)))))) ? (((/* implicit */int) ((var_16) < (arr_1 [i_2])))) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))));
                    var_22 = ((unsigned char) arr_5 [i_0] [i_1] [i_0] [i_0 + 1]);
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((1535226946U) << (((3871488138U) - (3871488127U))))))));
                }
            } 
        } 
    } 
}
