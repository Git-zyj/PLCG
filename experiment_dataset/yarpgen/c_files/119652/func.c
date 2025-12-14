/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119652
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2 + 1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_0])) ? (arr_6 [4LL] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (arr_0 [i_0]))))))));
                    arr_8 [i_1] [6ULL] [6] [(signed char)19] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_6 [i_0] [i_1] [i_2]) / (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [2ULL]))))))) / (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_1 + 1] [i_0] [i_0])) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2 - 1]))))) : (((arr_6 [i_0] [i_1] [i_2]) << (((((/* implicit */int) arr_5 [i_2] [i_1 + 3] [2] [(unsigned char)5])) - (98)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
}
