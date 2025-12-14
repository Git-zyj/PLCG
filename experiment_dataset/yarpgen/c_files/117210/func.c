/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117210
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
    var_19 = 15506289224908730851ULL;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13479)) ? (((/* implicit */long long int) ((/* implicit */int) (((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) arr_0 [i_1] [i_0])))) >= (((/* implicit */long long int) min((585643703U), (((/* implicit */unsigned int) (_Bool)0))))))))) : ((((~(arr_3 [i_0] [i_0]))) | (min((((/* implicit */long long int) var_4)), (arr_3 [i_0] [(unsigned char)1])))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((max(((unsigned short)52048), ((unsigned short)14085))), (((/* implicit */unsigned short) ((2771026743U) >= (3949855156U))))));
                arr_7 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_12)))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (-(479126701U)));
                arr_9 [i_0] [i_0] = ((/* implicit */short) min((((long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_1])), (arr_2 [i_0] [i_1])))), (((/* implicit */long long int) (unsigned short)55104))));
            }
        } 
    } 
}
