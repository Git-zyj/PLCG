/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170518
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
    var_12 |= (+((~(((((/* implicit */_Bool) 0U)) ? (var_4) : (7U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((20U) < (4294967288U)));
                var_13 = (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((arr_2 [i_1 - 1]) << (((2388348220U) - (2388348205U))))) : ((~(0U))))));
                arr_6 [8U] [i_1] &= ((((((/* implicit */_Bool) min((3489657445U), (var_9)))) ? (max((arr_2 [i_0]), (arr_1 [4U]))) : (max((4U), (arr_4 [8U] [i_1] [i_1]))))) * (var_9));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_14 = ((unsigned int) ((arr_11 [i_0] [6U] [i_2] [i_3]) | (arr_4 [i_0] [i_1 + 2] [i_3])));
                            var_15 = var_3;
                            arr_12 [i_0] [4U] [i_1] [6U] [i_0] = min((var_4), ((+(((unsigned int) 15U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= min((max((((var_11) ^ (var_7))), (var_9))), (max((var_11), (var_7))));
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                arr_17 [i_4] [i_5] = var_10;
                arr_18 [16U] [i_5] [i_4] = var_11;
            }
        } 
    } 
}
