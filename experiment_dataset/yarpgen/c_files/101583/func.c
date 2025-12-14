/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101583
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
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_5 [i_0] [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) 0U)) : (16325268437813806032ULL)))) ? ((-(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)70)))))));
                arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (short)-1382))))))));
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)6])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) : (min((arr_0 [8LL]), (arr_0 [(unsigned char)6])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)233))) || (((/* implicit */_Bool) ((short) 340004063U))))))) : (var_11)));
}
