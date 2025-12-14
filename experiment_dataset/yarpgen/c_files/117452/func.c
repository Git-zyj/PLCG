/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117452
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
    var_15 -= ((/* implicit */long long int) var_1);
    var_16 = ((/* implicit */short) ((int) 34359738368ULL));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) var_10))))) & (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1])))))) != (arr_4 [i_0 - 1] [i_0 - 1])));
                var_17 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)90)))) ? (((((/* implicit */unsigned long long int) arr_1 [i_0])) + (arr_2 [i_0 + 2] [i_1]))) : (((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_3)))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned short) ((short) min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)215)))), (((/* implicit */int) max((var_7), (var_10)))))));
    var_19 *= ((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned short)31), (((/* implicit */unsigned short) (short)-1)))))));
}
