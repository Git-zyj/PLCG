/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145235
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 *= (short)-26742;
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) var_5)))) << (((/* implicit */int) ((arr_9 [(signed char)8] [i_1] [i_0] [i_0] [(short)0]) == (arr_1 [i_2] [14LL])))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) (short)32759);
                        arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_2] [4LL]), (((/* implicit */long long int) (unsigned short)65521))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) >= ((-9223372036854775807LL - 1LL))))))));
                    }
                    var_16 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)0)), (max(((-(arr_1 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (arr_3 [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_6)))) : (((/* implicit */int) (short)-32759))));
}
