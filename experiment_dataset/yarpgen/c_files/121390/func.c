/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121390
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
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) | ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
    var_17 *= ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_2] [i_1] [i_2])))) && (((/* implicit */_Bool) 3335130106U))))), (((unsigned int) ((var_11) || (var_4))))));
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-8898771381226863517LL)))) ? (var_9) : (((((/* implicit */_Bool) var_12)) ? (1321065845U) : (1321065853U)))))))));
                }
            } 
        } 
    } 
}
