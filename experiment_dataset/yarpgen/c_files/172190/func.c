/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172190
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(signed char)15] &= ((/* implicit */unsigned long long int) ((unsigned char) max(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_0 [i_1])))));
                arr_6 [11LL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [3])) & (((/* implicit */int) (unsigned short)15150))))) : (max((67108832U), (((/* implicit */unsigned int) var_4)))))) ^ (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))) & (min((((/* implicit */unsigned int) (unsigned char)189)), (344763046U)))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), (max((((long long int) var_0)), (((/* implicit */long long int) ((var_9) - (((/* implicit */int) (signed char)-24))))))))))));
}
