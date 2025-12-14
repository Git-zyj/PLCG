/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185159
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((unsigned long long int) arr_0 [i_1])) >> (((((/* implicit */int) max((((/* implicit */unsigned short) ((arr_1 [i_0] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [2U])))))), (arr_4 [i_0] [(_Bool)1] [(_Bool)1])))) - (62315)))))));
                arr_5 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) / (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_1 [9LL] [(signed char)4])) ? (((long long int) (signed char)-76)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) -1655538931)) : (arr_1 [i_1] [i_0 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                var_18 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) arr_0 [i_0])) ^ (1655538931))))) ^ (((((/* implicit */int) arr_3 [i_0] [i_0 - 2])) & (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))));
                var_19 = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_3 [(unsigned short)5] [i_1 + 2]), (((/* implicit */unsigned short) (unsigned char)222)))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) 2147483647)), (3904328147U)))) : (((((/* implicit */long long int) 1655538931)) / (arr_2 [i_1] [6U])))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((var_16) << (((max((2497395257U), (((/* implicit */unsigned int) -1655538931)))) - (2639428340U))))))));
    var_22 = ((/* implicit */unsigned short) var_12);
    var_23 = 3318024209U;
}
