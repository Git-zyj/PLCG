/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110965
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_3)))) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((arr_2 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) var_6)) : (var_0))))));
                var_13 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-66)) ? (max((3627504973619550959ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (1605510879874228471ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))))));
                    var_14 = ((/* implicit */int) ((((2816705718713144446ULL) <= (15286006563079642482ULL))) ? (((14819239100090000657ULL) >> (((((/* implicit */int) (short)12658)) - (12596))))) : (((unsigned long long int) arr_7 [(short)14] [i_1] [i_0] [i_0]))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3627504973619550953ULL) ^ (arr_4 [i_2 + 1] [i_2 - 2] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (max((arr_4 [i_2 + 1] [i_2 - 2] [17LL]), (((/* implicit */unsigned long long int) arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1])))))))));
                    var_16 = ((/* implicit */short) max(((signed char)127), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */int) ((var_0) < (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_6)))))))) * (((/* implicit */int) var_6))));
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (signed char)13)), (14819239100090000656ULL)));
}
