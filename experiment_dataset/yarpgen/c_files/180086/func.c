/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180086
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
    var_19 = ((/* implicit */unsigned long long int) (~(var_16)));
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) ((unsigned int) (_Bool)1));
        var_22 = ((/* implicit */long long int) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [6LL] = ((/* implicit */_Bool) arr_4 [i_1] [(signed char)5]);
        var_23 = ((/* implicit */long long int) arr_1 [i_1]);
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_24 = (+(((/* implicit */int) ((short) arr_13 [i_1] [i_4] [i_3 - 1] [i_4] [i_1] [i_2]))));
                        arr_14 [i_4] [11ULL] [11ULL] [11ULL] = ((/* implicit */unsigned long long int) (-(((long long int) arr_6 [i_2 + 3]))));
                    }
                } 
            } 
        } 
    }
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned long long int) min((-2732456152741509378LL), (((/* implicit */long long int) arr_7 [i_5]))));
        var_25 = max((((/* implicit */unsigned int) (short)31208)), (2801528573U));
    }
}
