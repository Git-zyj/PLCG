/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143202
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
    var_19 = ((/* implicit */long long int) var_13);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [(signed char)10] [i_0] = ((/* implicit */unsigned char) min((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_2 [(signed char)9] [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (arr_0 [i_1])))))))));
                arr_7 [i_0] [6] = ((/* implicit */long long int) ((unsigned int) min((arr_3 [i_1]), (arr_3 [i_1]))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (arr_1 [(short)3]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (min((((/* implicit */unsigned long long int) 881459344)), (18446744073709551609ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))))))))));
                arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) min((((/* implicit */short) arr_5 [(signed char)9] [i_0] [(signed char)9])), (arr_3 [6LL]))))))));
            }
        } 
    } 
}
