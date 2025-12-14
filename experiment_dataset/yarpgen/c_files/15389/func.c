/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15389
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
    var_15 = ((/* implicit */signed char) var_14);
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned char) (~(((/* implicit */int) var_10))))))));
    var_17 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) & (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (3784668908U)))))) % (min((((/* implicit */unsigned long long int) var_13)), (var_1)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) (unsigned short)16);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 13; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2])), (min((arr_3 [i_0 + 1] [i_2 + 1] [i_3 - 4]), (((/* implicit */unsigned int) var_5))))));
                        arr_16 [i_2] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) ((short) ((long long int) 18446744073709551615ULL)));
                        arr_17 [i_2] [i_2] [i_0 - 1] [i_3] = ((/* implicit */signed char) arr_0 [i_3 - 3]);
                        var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) min((((short) (signed char)91)), (((/* implicit */short) ((signed char) var_1)))))), (3111068449U)));
                    }
                    var_20 += ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) | (2704799435801635710ULL))), (((unsigned long long int) arr_0 [i_2 + 1]))));
                }
            }
        } 
    } 
}
