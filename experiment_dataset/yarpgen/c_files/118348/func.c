/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118348
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
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((2858077143208963221ULL) & ((+(var_11))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */long long int) ((unsigned long long int) max(((short)32767), ((short)-8105))));
                        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_3]))) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8112))))), (((/* implicit */unsigned long long int) (+(arr_10 [i_2] [i_3]))))));
                        var_19 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [10LL] [i_1] [5LL] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0])))));
                        arr_12 [i_0] [i_1] [i_0] [0ULL] = arr_5 [i_0] [i_1] [i_0];
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_0]))) : (max((var_2), (var_9)))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8101)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) < (var_5))))));
        var_21 = ((unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
    }
}
