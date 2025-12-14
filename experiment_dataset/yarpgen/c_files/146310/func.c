/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146310
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_9))))))) | (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_14)) ? (4093756152U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))))) : (201211144U)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 &= ((/* implicit */unsigned int) var_18);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_22 = (~(12494190756514144310ULL));
                            arr_10 [14] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(var_19)));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_6)))), (arr_4 [i_0] [(unsigned short)4] [i_0] [i_0]))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~(((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1]))))) : (max((((/* implicit */int) arr_6 [4U])), (var_5))))))))));
                arr_11 [i_0] = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_13)))))));
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
}
