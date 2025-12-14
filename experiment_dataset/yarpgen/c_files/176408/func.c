/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176408
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
    var_10 = (short)-12072;
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((short) var_8)))) ? (((/* implicit */int) var_4)) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((signed char) var_7)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1] [i_1 - 2] = ((/* implicit */int) (-((-(arr_2 [i_1 + 2])))));
                var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)-3842)) || (((/* implicit */_Bool) 3061092491U)))))))) ? (((((/* implicit */_Bool) ((int) 1236184722U))) ? (((/* implicit */int) var_7)) : (var_2))) : (max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) (short)-3842))))));
                var_13 &= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_6)), (((((/* implicit */int) var_9)) - (((/* implicit */int) var_1)))))) ^ (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (arr_1 [i_1 + 1] [i_1 - 2]) : ((+(var_3)))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((/* implicit */int) ((short) (unsigned short)54135))))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65515)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_1))));
}
