/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/9
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) (+(((((/* implicit */_Bool) arr_3 [i_1] [(unsigned short)7])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))));
                    var_17 = ((/* implicit */short) arr_3 [4ULL] [i_2]);
                    var_18 = ((/* implicit */int) ((189165883254272929ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15301899384542283255ULL)) ? (arr_5 [i_2] [i_0]) : (((/* implicit */int) (short)-28565)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_3])) / (((((/* implicit */int) arr_15 [i_3])) * (((/* implicit */int) arr_15 [i_3])))))))));
                arr_16 [i_4] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)37357)) ? (((/* implicit */int) (unsigned short)16081)) : (((/* implicit */int) (short)26326)))) | (((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (unsigned short)8873)))))) ? (var_16) : (((/* implicit */int) (signed char)117))));
}
