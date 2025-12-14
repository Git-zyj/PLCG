/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174142
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */_Bool) (short)-12814)) && (((/* implicit */_Bool) (unsigned char)95))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(arr_2 [i_0]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)95)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-13396)) ? (var_7) : (((/* implicit */long long int) var_3)))) < (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13395))) : (((arr_2 [i_0]) & (((/* implicit */unsigned long long int) var_3))))))));
        var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) (_Bool)1)))))))));
        var_17 += ((/* implicit */short) ((max((((var_8) + (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-13396))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53336))) & (16252587804269941878ULL)))))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13396))) >= (arr_2 [i_0])))) ^ (((/* implicit */int) arr_0 [i_0] [(short)5]))))) == (min((((var_7) / (var_7))), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))));
    }
    var_19 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_5)) || ((!(((/* implicit */_Bool) -1123650482)))))))));
    var_20 = ((/* implicit */unsigned short) (+((+(var_1)))));
}
