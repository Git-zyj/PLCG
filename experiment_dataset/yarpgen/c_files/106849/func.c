/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106849
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
    var_13 &= ((/* implicit */signed char) var_5);
    var_14 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_0 [i_1]))));
                arr_4 [i_1] = ((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 2] [(signed char)1] [i_1])) > (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2] [i_1]))))))));
                arr_5 [(short)0] [i_1 + 2] &= ((/* implicit */unsigned char) arr_2 [i_1] [i_1 - 1] [i_1]);
                arr_6 [(signed char)6] [(signed char)6] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) (((+(((/* implicit */int) arr_3 [i_1] [i_1 - 2] [(signed char)0])))) == (((/* implicit */int) arr_2 [i_0] [i_1 - 2] [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) && (((arr_0 [(_Bool)1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned char)7]))))))))));
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1 - 2])) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [3U] [i_1]))) == (arr_0 [i_1])))) != (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [(_Bool)1]))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) <= (var_6)));
}
