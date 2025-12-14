/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185123
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((max((var_4), (arr_5 [(_Bool)1] [i_2] [i_2 - 3] [i_2 + 1]))) < (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2]))))) : (((/* implicit */int) (short)32744)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_2] [i_2] [i_1]))));
                                arr_13 [(unsigned char)3] [i_1] [i_2] [i_2 - 3] [i_3 + 1] [i_4] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-25325)), (((((/* implicit */_Bool) (short)6796)) ? (10106984250032400750ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)15)), (1946516252)));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & ((~(((/* implicit */int) var_8))))))) & ((~((~(var_12))))));
    var_21 = ((/* implicit */long long int) var_4);
}
