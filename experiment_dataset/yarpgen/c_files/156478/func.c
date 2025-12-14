/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156478
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((signed char) max((6809759032197923400LL), (((/* implicit */long long int) (signed char)-85)))))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)61))))));
    var_14 = ((/* implicit */unsigned int) var_12);
    var_15 &= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_16 = min((((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ^ (arr_3 [i_1 - 1] [(signed char)6] [(unsigned char)3]))), (((/* implicit */unsigned int) arr_2 [i_1])));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [14U] [i_2] [i_2] [i_2] [3LL] = ((/* implicit */unsigned short) ((min((arr_4 [i_4 + 2] [i_1 - 1]), (((/* implicit */long long int) var_2)))) <= (min((arr_4 [i_4 - 1] [i_1 + 1]), (((/* implicit */long long int) (signed char)85))))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1 - 4] [i_1 - 2] [i_4 + 2] [i_4 - 1] [i_4 + 1]))))) ? (((unsigned long long int) min((511U), (((/* implicit */unsigned int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (max((((/* implicit */unsigned short) var_12)), ((unsigned short)51247)))))))));
                                var_18 += ((/* implicit */long long int) arr_1 [i_0]);
                                var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) -2216502392493602185LL)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (signed char)-86)))), (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_8 [i_1 - 2] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_0])) ? (arr_4 [(unsigned char)11] [i_1 - 3]) : (var_5)))))) ? (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-85)), ((unsigned short)42013))))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((min((arr_11 [i_0] [i_0] [1U] [i_0] [i_1]), (((/* implicit */long long int) (_Bool)0)))) <= (((/* implicit */long long int) ((arr_9 [(unsigned char)8] [(unsigned char)8] [(short)5] [(unsigned char)10] [(short)9]) ? (((/* implicit */int) arr_9 [i_0] [(signed char)14] [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) var_2)))))))))));
            }
        } 
    } 
}
