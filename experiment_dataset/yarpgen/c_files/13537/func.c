/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13537
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
    var_16 = ((/* implicit */unsigned int) min((16349492291814911412ULL), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((16349492291814911424ULL) | (((unsigned long long int) arr_3 [i_1])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) * (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_5 [i_0] [i_1]))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 40115937)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))));
                    var_19 = ((/* implicit */unsigned long long int) (short)-30667);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [19] [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_3] [i_1])))))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) 2691791502U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))) : (arr_1 [i_3]))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (short)-12156)) : (187075227)))))))));
                }
            }
        } 
    } 
}
