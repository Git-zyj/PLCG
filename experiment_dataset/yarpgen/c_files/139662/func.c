/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139662
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (arr_3 [(short)4] [(short)4])));
                    var_20 = ((/* implicit */unsigned char) ((long long int) 4428289590504269299ULL));
                }
                /* LoopNest 3 */
                for (unsigned short i_3 = 4; i_3 < 16; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_18)) >= (((/* implicit */int) var_18))))) ^ (((/* implicit */int) arr_10 [i_3 - 1] [(unsigned char)14] [i_3 - 3] [i_4] [i_3 - 3] [i_3 - 1])))))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [i_3 - 3] [i_3 - 1] [i_1 - 2] [10LL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [(short)4] [i_1] [i_1] [i_1 - 1] [i_1 + 1])))))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_0] [(unsigned char)1] [i_4] [i_5]), (((/* implicit */unsigned int) (short)4962))))) : ((-(2504927397606084643ULL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 += var_19;
}
