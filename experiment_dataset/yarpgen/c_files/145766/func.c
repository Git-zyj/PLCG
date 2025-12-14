/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145766
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
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_9)) | (((/* implicit */int) ((_Bool) (signed char)108)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) ((long long int) ((((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_11))))) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_2] [15]))));
                        var_17 = ((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_2]))))) ^ (min((var_6), (((/* implicit */long long int) arr_4 [i_2] [i_2])))));
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4883212599736380858LL)) ? (max((((/* implicit */unsigned long long int) 5234216977831708962LL)), (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 + 3])) | (((((/* implicit */int) (signed char)-88)) | (((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [i_1] [i_0])))))))));
                    }
                }
            } 
        } 
    } 
}
