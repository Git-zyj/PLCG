/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187762
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)25168))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) / (max((((/* implicit */unsigned long long int) arr_4 [(_Bool)0] [i_1] [i_1 + 2])), (((arr_2 [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                var_16 ^= arr_3 [i_1] [i_0];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 + 2] [(unsigned short)7] [i_3] [i_3] [i_1 - 1])) ? (((/* implicit */int) (short)25192)) : ((-(((/* implicit */int) arr_4 [i_3 - 2] [10ULL] [i_2]))))));
                            var_18 = ((/* implicit */unsigned int) ((min((arr_3 [i_3 + 2] [i_1 + 2]), (arr_3 [i_3 + 1] [i_1 - 1]))) ? (((long long int) arr_3 [i_3 + 1] [i_1 - 1])) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3 + 3] [i_1 + 2])))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_7 [i_1] [(_Bool)0] [i_1 + 2] [i_3 + 3]))))) / (((/* implicit */int) var_2))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((max((max((arr_8 [4LL] [i_1] [4LL] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_7 [0ULL] [i_3] [0ULL] [i_3])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-130))) : (arr_2 [i_3]))))) != (((/* implicit */unsigned long long int) arr_6 [i_3 + 3] [(short)6] [(short)6] [i_0])))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) var_6)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((min((var_4), (var_8))) >= (var_4)));
    var_23 = ((/* implicit */_Bool) max((8513353518605100366ULL), (var_4)));
}
