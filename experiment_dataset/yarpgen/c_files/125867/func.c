/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125867
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((+(((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2 - 1]))) : (var_16)))))));
                    arr_9 [i_0] [i_0] [i_2 - 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_6 [i_0] [i_2 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [(signed char)8])) : (((/* implicit */int) arr_7 [(_Bool)1])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                arr_14 [16] [i_4] = ((/* implicit */unsigned int) arr_10 [i_4]);
                var_18 *= ((/* implicit */signed char) ((unsigned short) ((arr_10 [(short)5]) <= (arr_10 [i_3]))));
                arr_15 [i_3] [11ULL] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (unsigned short)10940)) : (((/* implicit */int) (signed char)78)))))));
            }
        } 
    } 
}
