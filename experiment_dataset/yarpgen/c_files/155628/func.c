/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155628
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_4))))));
                    arr_9 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2211679294578673386LL))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1688849860263936LL)) || (((/* implicit */_Bool) 6037410845842327702LL))));
        var_14 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_0]))));
    }
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_15 [i_3] &= ((/* implicit */long long int) arr_4 [i_3]);
        arr_16 [i_3] |= ((/* implicit */unsigned short) var_9);
    }
    /* LoopSeq 1 */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_15 = ((/* implicit */short) min((arr_5 [i_4] [i_4]), ((+(min((var_0), (((/* implicit */long long int) arr_6 [i_4] [20LL]))))))));
        var_16 = ((/* implicit */unsigned short) ((long long int) (-(((var_5) - (arr_5 [i_4] [i_4]))))));
    }
    var_17 = ((/* implicit */long long int) min((var_1), (var_1)));
}
