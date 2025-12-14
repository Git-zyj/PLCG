/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131268
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
    var_15 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) var_10)))))) >> (((((/* implicit */int) var_8)) + (2773)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_10))), (((signed char) var_4))))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_0]))) : (((/* implicit */int) var_3))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_0 [i_0] [i_1]) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32762)))))));
            var_17 ^= ((/* implicit */long long int) ((arr_3 [i_0] [i_0]) > (arr_3 [i_0] [i_1])));
        }
        var_18 &= ((/* implicit */unsigned long long int) var_2);
        var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) (-(var_0))))), (arr_5 [i_0] [i_0])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_3 [i_2] [(short)0]) <= (arr_0 [i_2] [i_2]))))));
        arr_10 [4LL] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) (-(((/* implicit */int) (_Bool)1))))));
    }
}
