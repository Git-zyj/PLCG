/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153111
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)4098), ((short)4099)))) || (((/* implicit */_Bool) (~(min((((/* implicit */long long int) (short)-4093)), (var_13))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((min((4285569099807822010LL), (((/* implicit */long long int) arr_4 [i_0] [i_0])))) != (((var_13) - (4285569099807822008LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4100))) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)-4098)) : (((/* implicit */int) (short)4097)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-8703)) || (((/* implicit */_Bool) var_6)))))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1 - 3] [i_1 - 1])), (min((arr_6 [i_1] [i_1] [(unsigned short)14]), (((/* implicit */long long int) 1902316841U))))))) ? (((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (signed char)-66)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_6 [i_1] [i_1 - 3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-35)))));
                arr_9 [i_1] = (short)19919;
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10324738430880225426ULL)) ? (((/* implicit */unsigned int) ((int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))))) : (var_9)));
}
