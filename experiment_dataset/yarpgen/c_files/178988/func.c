/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178988
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
    var_18 = ((/* implicit */signed char) (((-(((/* implicit */int) var_1)))) / ((-(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [10ULL] = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_12))));
                    arr_9 [i_0] [(short)5] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13688)) ? (var_3) : (((/* implicit */int) (unsigned short)28280))))))))));
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (16128U))));
                }
            } 
        } 
    }
    var_19 = ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) (short)13675)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))));
}
