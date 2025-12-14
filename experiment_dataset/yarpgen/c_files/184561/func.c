/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184561
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
    var_10 = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)1))))))) ? (var_5) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-7124)) : (((/* implicit */int) var_2))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (135117123U))))));
    var_11 = ((/* implicit */unsigned int) var_7);
    var_12 *= ((/* implicit */unsigned short) var_1);
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)24556))) * (var_5)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (var_1) : (arr_3 [i_1] [i_1] [i_1]))));
                    arr_6 [i_1] [i_0] [i_2] [i_0] = ((((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)21] [(unsigned short)21])) && (((/* implicit */_Bool) var_3)))))))) / (((((/* implicit */long long int) var_4)) + (arr_1 [i_1] [i_2]))));
                    arr_7 [i_1] = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]);
                    var_15 = ((/* implicit */short) min(((~(((/* implicit */int) (short)-184)))), (((((/* implicit */int) arr_0 [i_1])) & (arr_3 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
