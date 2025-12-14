/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142728
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))) : ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65504))) | (338361316U)))))));
    var_11 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((((/* implicit */int) ((unsigned short) var_9))) * (((/* implicit */int) var_5)))) - (5428485)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [2LL] |= ((/* implicit */short) ((unsigned char) var_5));
                    arr_8 [i_0] [i_1] [(signed char)18] |= ((/* implicit */long long int) ((unsigned long long int) var_9));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) (unsigned short)65506));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)0))))) > (12U)))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65486)) >= (((/* implicit */int) var_5)))))) == ((-(193031716U)))))))))));
}
