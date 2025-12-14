/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178637
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
    var_14 = min((((/* implicit */long long int) (-(var_9)))), ((((_Bool)1) ? (-432074919288327249LL) : (((/* implicit */long long int) 1487230976)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0])) == (((/* implicit */int) arr_8 [i_0] [i_2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [(unsigned char)0] [i_1]))))) : (((arr_3 [i_2] [i_2]) ? (432074919288327249LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    arr_9 [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) + ((-9223372036854775807LL - 1LL)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_7 [i_2] [i_0] [i_0]))))));
                    arr_10 [i_2] [i_1] [i_1] = (!(((/* implicit */_Bool) 9223372036854775807LL)));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (var_5))), ((+(((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (var_11)))))) : (((1968499785U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
}
