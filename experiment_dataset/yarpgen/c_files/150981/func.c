/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150981
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 1879048192)) / (1552538039280463173LL))) ^ (((/* implicit */long long int) max((1879048195), (428572854))))))) < (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 428572854)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((1879048192) / (((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((((/* implicit */_Bool) (+(-1879048192)))) ? ((-(-2539980707322406498LL))) : (arr_2 [i_0 + 3] [i_1 - 2]))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))))));
                var_19 ^= ((/* implicit */short) (+(1879048195)));
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_1 - 3] [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1 - 1])) ? (arr_2 [i_0 - 1] [i_1 - 2]) : (arr_2 [i_0 - 2] [i_1 - 2])))) : (((((/* implicit */_Bool) 1411746209846001671LL)) ? (12246176055710000286ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28823)))))));
                var_21 ^= ((/* implicit */short) (~(((((((-1879350856) + (2147483647))) << (((428572854) - (428572854))))) ^ ((~(arr_0 [i_1])))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (-1879350852) : (((/* implicit */int) (unsigned char)157)))))));
}
