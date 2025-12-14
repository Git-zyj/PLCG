/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141188
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) var_8))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */int) min(((+(arr_6 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
                    var_19 = ((/* implicit */short) min((((/* implicit */long long int) min((var_14), (((/* implicit */unsigned char) var_11))))), (var_9)));
                    var_20 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)63348)) ? (((/* implicit */int) (unsigned char)37)) : (min((((/* implicit */int) (_Bool)1)), (0))))), ((~(((/* implicit */int) (unsigned char)37))))));
                    arr_9 [i_0] [i_0] [(_Bool)1] [i_0] = (~(((/* implicit */int) (unsigned char)224)));
                }
                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), ((~(min((arr_0 [i_0]), (((/* implicit */unsigned int) var_14))))))));
                var_22 -= ((/* implicit */long long int) arr_3 [(short)0] [i_1] [(signed char)8]);
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        {
                            var_23 = (unsigned char)225;
                            arr_15 [7LL] [i_0] [i_0] [1] = ((/* implicit */long long int) ((int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)44542)))), ((~(((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) var_14)), (var_4))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-83))))))), (((/* implicit */unsigned long long int) var_12))));
}
