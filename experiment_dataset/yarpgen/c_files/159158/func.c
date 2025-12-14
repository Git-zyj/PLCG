/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159158
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_1 [i_0] [i_0]), ((!(((/* implicit */_Bool) var_15))))))) >> ((((+(arr_2 [i_1 - 3] [i_1 + 1]))) - (1310717354)))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1])) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)21422)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)6)))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)28)), ((unsigned short)4))))))) ? (((/* implicit */int) var_11)) : ((((((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */int) var_3)))) - (817743356)))))));
}
