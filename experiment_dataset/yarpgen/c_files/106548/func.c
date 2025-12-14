/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106548
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(_Bool)1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */long long int) max((var_18), ((+(var_18)))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_15)))) ? (max((((/* implicit */unsigned long long int) var_18)), (((((/* implicit */_Bool) var_14)) ? (5068219295675148146ULL) : (((/* implicit */unsigned long long int) arr_1 [4] [4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_1] [i_0])) ^ (var_9)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_18);
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) ((var_11) ? (((((/* implicit */_Bool) 5068219295675148129ULL)) ? (((/* implicit */int) (unsigned short)34407)) : (((/* implicit */int) (unsigned short)62542)))) : (((/* implicit */int) var_8)))))));
}
