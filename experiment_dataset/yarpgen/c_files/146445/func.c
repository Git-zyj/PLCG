/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146445
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)0))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_0] [(unsigned char)3] [i_0]);
                    var_14 = ((/* implicit */unsigned short) 533670905);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-7419538188204458325LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37836)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_0] [i_4 + 3])))))))) : (((/* implicit */int) max((var_12), (min((((/* implicit */unsigned short) (_Bool)1)), (var_3))))))));
                                arr_16 [5U] [i_1] [i_0] [i_3] [i_4] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0])), (var_8)))) ? (((/* implicit */int) max(((short)-15029), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) 776161346U)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1386))) : (10ULL)))))));
                                var_16 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) var_8);
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (7494162661091360935LL)));
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65522))))), ((~(max((((/* implicit */unsigned int) var_4)), (var_6)))))));
}
