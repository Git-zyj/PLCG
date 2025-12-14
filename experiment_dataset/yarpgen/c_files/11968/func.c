/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11968
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 6802653978124982945ULL))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_2 [(_Bool)1] [(short)12] [(short)12]))));
                arr_6 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) -536394033);
                var_22 &= ((/* implicit */unsigned int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)-17186))))) << (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_1]))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) var_11))))) ? (var_9) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1148605233U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))))))) || (((_Bool) var_3)))))));
    var_24 = ((/* implicit */unsigned int) var_11);
}
