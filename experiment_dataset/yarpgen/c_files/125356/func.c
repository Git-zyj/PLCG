/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125356
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
        arr_3 [(_Bool)1] = ((/* implicit */signed char) var_10);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [7U] = ((/* implicit */int) var_3);
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (short i_4 = 1; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-25837)))))))));
                        arr_14 [i_4 - 1] [i_3] [i_2] &= ((/* implicit */_Bool) ((((((/* implicit */unsigned int) 1948815262)) - ((+(var_3))))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) * (var_4)))) ? (((4294967265U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))))));
                    }
                } 
            } 
        } 
    }
    var_14 &= ((/* implicit */short) ((max((((/* implicit */int) ((signed char) 32767))), (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_9)))))) + (((/* implicit */int) var_1))));
}
