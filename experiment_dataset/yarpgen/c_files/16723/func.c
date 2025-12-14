/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16723
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_2] [7U] [i_0])))) | (((((/* implicit */unsigned long long int) arr_2 [i_0] [(_Bool)1])) / (arr_0 [i_0] [i_0]))))) | (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2]))));
                    var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((unsigned short) arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_4 [i_0] [i_0]))) == (((/* implicit */int) ((arr_3 [i_0] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2]))) % (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_3 [(short)2] [(short)2]) : (((/* implicit */unsigned int) arr_5 [i_2] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_9);
}
