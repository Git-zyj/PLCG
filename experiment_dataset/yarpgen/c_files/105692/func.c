/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105692
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
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) <= (var_9))))) : (min((max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_3])), (arr_9 [i_3] [i_1] [(_Bool)1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)22653)))))))));
                                var_16 = ((/* implicit */_Bool) min((((int) (short)-10526)), ((-(((int) arr_0 [11]))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) arr_8 [i_0] [15] [i_1] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4603594623650714425ULL)) ? (((/* implicit */int) (unsigned short)48026)) : (((/* implicit */int) (unsigned short)61947)))) % (((/* implicit */int) (unsigned short)29065))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (unsigned short)61947)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (1177586258026854176LL)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11)))))))));
}
