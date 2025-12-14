/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15098
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
    var_17 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
        var_19 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) 1073741824U);
                    var_21 = ((/* implicit */unsigned short) ((1073741824U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37346))) > (1073741824U)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_22 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) % (arr_5 [4ULL] [i_3] [(unsigned short)12])))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (arr_7 [i_0] [i_4] [i_4] [i_3]) : (((/* implicit */long long int) 3221225491U))))))));
                                var_23 = ((/* implicit */short) arr_3 [i_0] [i_0]);
                                var_24 = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned long long int) min((((var_10) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_9)))))), (((/* implicit */int) min((var_6), (var_6))))));
}
