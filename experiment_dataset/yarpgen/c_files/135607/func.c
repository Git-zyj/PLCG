/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135607
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)0)))))) ? (2763216538U) : ((+(arr_0 [i_0])))));
                arr_8 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((short) (unsigned char)0))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_1] [11LL]))) : (((/* implicit */long long int) (~(212532691)))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (40198467391278357LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5046)))))) ? (((int) var_9)) : (((((/* implicit */int) var_5)) / (((/* implicit */int) var_6))))))));
}
