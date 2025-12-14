/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146045
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_5))));
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (short)-32752)) : (((/* implicit */int) (_Bool)0))));
    var_14 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
                    var_15 = ((/* implicit */int) min(((+(var_2))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    arr_7 [i_0] [i_1] [i_2] [21] = ((/* implicit */short) arr_5 [i_0] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
