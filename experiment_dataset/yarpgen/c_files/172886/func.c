/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172886
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((arr_0 [i_1] [i_0]) + (2147483647))) >> (((long long int) arr_2 [i_0] [i_0])))))));
                arr_6 [i_1] |= ((/* implicit */signed char) min((((int) arr_2 [i_1] [i_0])), (((int) ((((/* implicit */int) arr_1 [i_0])) / (arr_0 [i_0] [i_0]))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((arr_5 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), ((!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    var_21 = ((/* implicit */int) arr_3 [i_2 - 1]);
                    var_22 += ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), ((-(var_1))))), (min((arr_7 [(_Bool)1] [i_2] [i_2] [i_2 - 2]), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_1] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                    arr_9 [i_0] = ((/* implicit */long long int) ((min((max((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_2])), (arr_5 [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) var_18))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 2])))));
                }
            }
        } 
    } 
    var_23 = max((max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) var_15)));
    var_24 = ((/* implicit */_Bool) ((unsigned long long int) var_13));
}
