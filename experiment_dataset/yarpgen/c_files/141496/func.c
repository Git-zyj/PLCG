/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141496
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 + 4] [i_1 + 3] [i_1] [i_1 + 1])) <= (((/* implicit */int) arr_11 [i_1 + 4] [i_1 - 2] [i_1 + 4] [i_1 + 3])))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_15 [(short)3] [(short)3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((((/* implicit */int) arr_11 [i_0] [i_0] [8U] [i_0])) * (((/* implicit */int) arr_10 [i_0] [i_3] [i_2])))), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_11 [i_1 - 1] [i_1 + 3] [i_1] [i_1 - 1]), (arr_11 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 + 3]))))));
                        var_19 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) (signed char)-39)) : ((-(((/* implicit */int) (unsigned char)240)))))), (((/* implicit */int) arr_1 [i_0]))));
                        arr_16 [(unsigned short)8] [(unsigned short)8] [i_2] [(unsigned short)8] [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_12 [i_1 + 4] [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_3] [i_3]))))));
                        arr_17 [i_0] [i_1] [i_1] [i_2] [6U] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) >> (((max((((/* implicit */unsigned int) var_13)), (arr_14 [i_1] [i_1 - 3] [i_1 + 3] [i_1] [i_1] [i_1]))) - (267084478U)))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 1) 
                    {
                        var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_7 [(unsigned char)4]), (((/* implicit */long long int) arr_4 [0U] [i_1] [(short)0]))))), (var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_11))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [3U]) >> (((arr_2 [i_2]) - (292708265)))))))))));
                        arr_21 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min(((((-(arr_7 [i_2]))) * (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_15))))))), (((/* implicit */long long int) arr_9 [(_Bool)1] [i_1] [i_1 - 2] [i_1 + 3]))));
                    }
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
                    var_22 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) (unsigned char)7)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_4))));
    var_24 -= ((/* implicit */unsigned char) ((long long int) (signed char)-64));
}
