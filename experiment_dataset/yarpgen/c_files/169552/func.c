/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169552
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(arr_5 [i_1])))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)16430)))) ? (((/* implicit */int) (short)32752)) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_1 [i_0] [i_1]))))));
                var_10 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) var_5)))));
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((939524096) - (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)-16384)) ? (((((/* implicit */int) (unsigned short)42140)) & (((/* implicit */int) (unsigned short)42215)))) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-32767)) && (((/* implicit */_Bool) 131071U))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) == (var_3))))))));
}
