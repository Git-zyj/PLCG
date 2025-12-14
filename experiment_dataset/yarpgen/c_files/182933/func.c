/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182933
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
    var_16 = ((/* implicit */int) var_0);
    var_17 ^= ((/* implicit */short) ((signed char) var_13));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (_Bool)1))))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((arr_0 [i_0] [i_0]) | (((/* implicit */long long int) var_8)))) + (9223372036854775807LL))) << (((((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) 9223372036854775805LL)))) - (14335083426997427186ULL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)240))))) : (((((arr_0 [i_0 + 1] [i_0]) + (9223372036854775807LL))) >> (((((((-1) + (2147483647))) >> (((((/* implicit */int) var_12)) - (24621))))) - (490)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(max(((+(arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-57)) ^ (-4))))))));
        var_20 = ((/* implicit */_Bool) (~(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */int) (unsigned char)153)) + (((/* implicit */int) (signed char)-57)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)24576))))))))));
                    arr_9 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1 - 4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))));
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_6 [i_1] [i_2])))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_10)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_1 - 2]) : (((/* implicit */long long int) arr_7 [i_1 - 2] [i_1])))) : (((/* implicit */long long int) var_8))));
    }
    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) (+(((((max((arr_5 [i_4] [i_4] [(signed char)0]), (((/* implicit */long long int) (short)-230)))) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [4ULL])) && (((/* implicit */_Bool) (unsigned short)51649))))) - (1)))))));
        var_25 = ((/* implicit */signed char) (+(((((/* implicit */int) (signed char)-30)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    }
}
