/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122324
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 += (!(arr_2 [i_1]));
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                            {
                                var_14 = ((/* implicit */unsigned int) max(((signed char)127), (min((((/* implicit */signed char) arr_5 [i_4])), (max((arr_1 [i_1]), ((signed char)83)))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((arr_4 [i_4] [i_3] [i_2]) | (arr_8 [i_2] [i_1] [i_0])))))) ? (((((unsigned int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) : ((~(((322629002U) & (var_4)))))))));
                            }
                            var_16 |= ((/* implicit */short) min(((_Bool)1), ((_Bool)0)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1284832591U)));
}
