/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110012
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_0] [i_2] = -995399003;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) && (((((/* implicit */_Bool) arr_14 [5] [9ULL] [i_1] [i_2] [i_3] [i_3] [i_4])) || (((/* implicit */_Bool) var_18))))));
                            arr_15 [i_0] [i_0] [7ULL] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) arr_1 [2U]);
                        }
                        var_20 = ((/* implicit */_Bool) ((arr_3 [i_3 - 1] [i_3 + 1]) ? (((/* implicit */int) arr_3 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_3 [i_3 + 1] [i_3 - 1]))));
                        var_21 = ((/* implicit */_Bool) -995398980);
                        var_22 = (+(((/* implicit */int) arr_0 [i_3 + 1])));
                        var_23 = ((/* implicit */int) ((((/* implicit */int) var_5)) == (((((/* implicit */int) var_18)) & (-995399003)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_20 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) | (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_5]))))) ? (((/* implicit */unsigned long long int) -918871317)) : (var_14)))));
        arr_21 [i_5] |= ((/* implicit */signed char) var_8);
        var_24 = (short)23887;
    }
}
