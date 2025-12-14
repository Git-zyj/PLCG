/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177161
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4875))) : (623770274U)))));
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) 0ULL)) && (((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 536869888U)) : (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) < (var_12))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) min((623770282U), (((/* implicit */unsigned int) (unsigned short)44096))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 3671197003U))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [(unsigned short)8] [i_3] [i_3]))))) ? (((/* implicit */int) min((arr_12 [i_2] [i_2] [i_4 - 1]), (arr_12 [i_2] [i_3] [i_4])))) : ((~(((/* implicit */int) arr_12 [i_0 + 3] [i_1] [i_2]))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)44103)), (((arr_3 [i_0 - 1] [i_0 + 1]) / (((/* implicit */int) var_3))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_10))))));
    var_19 = ((((/* implicit */long long int) max((max((3671197013U), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) var_4))))) <= (var_12));
}
