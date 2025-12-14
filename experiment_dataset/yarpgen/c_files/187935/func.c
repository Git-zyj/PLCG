/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187935
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
    var_18 = ((/* implicit */unsigned char) (~(2087134143971133193LL)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305731012U)) ? (((/* implicit */int) (short)-17262)) : (((/* implicit */int) (short)17261))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) ? (((((/* implicit */int) (unsigned short)2619)) * (((var_4) ? (((/* implicit */int) (unsigned short)51398)) : (((/* implicit */int) (short)10489)))))) : (((((((/* implicit */_Bool) (short)-17262)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_13)))) * ((-(((/* implicit */int) (short)-17261))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) max((max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17262)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (9507714406592017997ULL))) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (unsigned short)6107)) : (((/* implicit */int) var_5)))))))) ? (1424917360) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_13)))), ((_Bool)0))))));
}
