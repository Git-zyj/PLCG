/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117628
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
    var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))) / (((/* implicit */int) ((unsigned short) ((_Bool) var_3))))));
    var_20 = ((/* implicit */unsigned long long int) ((_Bool) var_7));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)-1))) ? ((~(((/* implicit */int) arr_2 [i_0] [2ULL])))) : (((/* implicit */int) var_14))));
                var_22 *= ((/* implicit */signed char) (+((~(4294836224LL)))));
                var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (+(arr_1 [i_1])))))) ? (((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))) : (262143U)))) / ((~(var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(4173400893043952086LL))))))));
                var_24 = ((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_0]);
                arr_6 [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294705156U)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_13);
}
