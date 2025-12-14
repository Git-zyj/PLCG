/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161343
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)4669))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1])), (arr_0 [i_1]))))) + (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (48563632813509151ULL)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] [2ULL] = (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_2] [i_2] [i_3] [i_4 + 2])))))));
                                var_18 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_3] [i_0] [6]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)13320))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_16) : (var_1))))))) / (((/* implicit */int) max((((/* implicit */short) ((var_16) != (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (max((((/* implicit */short) var_3)), (var_7)))))))))));
    var_20 -= ((/* implicit */unsigned long long int) (unsigned short)52215);
}
