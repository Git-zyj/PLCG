/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132299
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
    var_11 = ((/* implicit */long long int) ((_Bool) var_7));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_12 ^= ((/* implicit */_Bool) var_5);
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((var_3) && (((/* implicit */_Bool) var_2))))) / (((/* implicit */int) var_8)))))));
                    }
                    var_14 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned int i_5 = 1; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_13 [i_4] [(_Bool)1] [1LL] [0U] = ((/* implicit */short) var_10);
                    var_15 &= ((/* implicit */short) var_6);
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned int) ((((long long int) arr_8 [i_0] [13U] [i_0] [i_0] [(_Bool)1] [0U])) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
}
