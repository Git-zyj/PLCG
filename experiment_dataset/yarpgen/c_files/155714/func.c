/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155714
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
    var_14 *= ((/* implicit */unsigned long long int) max(((+(((((/* implicit */int) var_4)) | (130735410))))), (((/* implicit */int) var_1))));
    var_15 = var_7;
    var_16 ^= ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_17 += ((/* implicit */_Bool) (~(130735416)));
                var_18 ^= ((/* implicit */signed char) (-(arr_1 [i_0])));
                var_19 = ((((/* implicit */unsigned int) 130735435)) & (arr_3 [i_0] [12U] [i_0]));
            }
            arr_10 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((2043663084U) <= (((/* implicit */unsigned int) -130735425)))));
        var_20 += ((/* implicit */_Bool) (~(arr_6 [i_0] [i_0])));
    }
}
