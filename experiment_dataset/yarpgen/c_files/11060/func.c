/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11060
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [3ULL] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_2 - 1] [i_2 - 2] [i_2 + 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 2]))))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_2 - 1])) > (((/* implicit */int) arr_3 [i_2 - 1] [i_2 - 2] [i_2 - 1])))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : ((-((~(1086077222846143850ULL)))))));
                    var_17 = ((/* implicit */long long int) arr_8 [i_2 + 1] [i_2 - 1]);
                    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 + 1])))) ? ((-(arr_0 [i_0] [i_2 - 2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 2] [(unsigned short)12] [i_1])) >> (((var_5) - (8505526969189097747ULL))))))));
                    var_19 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_2 - 1])) ? (arr_0 [i_0] [i_2 + 1]) : (arr_0 [i_0] [i_2 - 1]))) % (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65532)))))));
                }
            } 
        } 
    } 
    var_20 |= var_9;
}
