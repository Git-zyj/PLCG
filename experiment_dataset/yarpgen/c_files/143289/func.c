/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143289
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
    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2963081346U)))) ? (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) min((-18), (((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_4] [i_3] [i_4] [(short)4] [i_4] [(_Bool)1] [i_0]), (((/* implicit */int) ((_Bool) var_14)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1] [i_1] [i_2 - 4] [i_3] [i_4] [i_3 - 1]))))) : ((((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155))) : (455347492U)))) : (((unsigned long long int) arr_6 [i_4]))))));
                                arr_11 [i_0] [(signed char)15] [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_7 [i_1] [i_1 + 2]), (((/* implicit */unsigned char) (signed char)-118))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((arr_2 [10ULL]) << (((arr_2 [(signed char)8]) - (365726907))))) : (((/* implicit */int) (signed char)-63))))) ? (var_2) : (arr_1 [i_0]))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_3))));
                arr_12 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3963963457U)) ? (3781212215U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10685)))));
            }
        } 
    } 
}
