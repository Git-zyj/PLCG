/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14469
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
    var_20 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_13) != (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0 - 1] [i_0 - 3]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_2] [(unsigned short)18] = ((/* implicit */unsigned char) 1415128078U);
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4026897313U)))) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))))));
                            arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) var_15))))) ? (((((/* implicit */_Bool) var_13)) ? (((unsigned int) (unsigned char)17)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */short) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9843732264532887347ULL)) ? (3199226377U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
}
