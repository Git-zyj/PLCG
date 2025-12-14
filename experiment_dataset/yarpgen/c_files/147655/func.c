/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147655
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [16U])) ? (max((((arr_2 [i_0] [i_0]) / (var_9))), (arr_3 [i_2] [i_1] [i_0]))) : (((((/* implicit */_Bool) (+(3584949325U)))) ? (((unsigned int) arr_2 [i_0] [i_0])) : (var_3))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [6U] [i_0] = ((arr_6 [i_3 + 1] [i_3 + 2] [i_3 - 2]) << (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (0U) : (0U))));
                        arr_11 [i_2] |= 511U;
                        arr_12 [i_0] [14U] [8U] [i_0] [8U] [i_3] = ((((/* implicit */_Bool) var_6)) ? (var_12) : (arr_2 [i_0] [i_1]));
                    }
                    var_17 = ((((/* implicit */_Bool) (~(arr_8 [i_2] [i_1] [i_1] [i_0])))) ? (min((arr_0 [i_0]), (var_11))) : ((~(2675809324U))));
                }
            } 
        } 
    } 
    var_18 = var_8;
    var_19 = ((unsigned int) 1828129549U);
}
