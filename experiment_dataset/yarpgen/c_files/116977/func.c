/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116977
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
    var_10 = ((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) ((unsigned short) ((var_0) >> (((var_8) - (1580466118))))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0 + 3] [i_0 + 2] = ((/* implicit */unsigned long long int) var_0);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
                    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (arr_8 [i_0 - 1] [i_0 - 2]) : (arr_8 [i_0 + 2] [i_0 - 1])));
                    var_13 = ((/* implicit */short) arr_2 [i_1 - 1] [i_1 - 1]);
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_8))));
        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) var_5))));
    }
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((/* implicit */unsigned int) var_7)), (var_0))))));
    var_16 ^= ((/* implicit */unsigned short) 7507745992724521546LL);
    var_17 = ((/* implicit */unsigned int) min((min(((_Bool)0), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_0))))), (((_Bool) ((long long int) var_0)))));
}
