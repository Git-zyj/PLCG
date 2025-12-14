/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119910
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
    var_18 ^= ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) <= (((long long int) (~(((/* implicit */int) (unsigned char)236)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_19 -= ((/* implicit */long long int) (signed char)98);
        arr_3 [(short)14] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) - (-834863285072452546LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9776))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
        arr_5 [20LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (signed char)-114)))) ? (((((/* implicit */_Bool) -3LL)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (signed char)(-127 - 1))))) : ((~(((/* implicit */int) (short)19518))))))) ? (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [18ULL])))) : (((/* implicit */int) ((((/* implicit */int) (short)-24)) < (((/* implicit */int) (unsigned char)95)))))));
    }
    var_20 = ((min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min(((unsigned short)45501), ((unsigned short)52538)))) >= (var_4))))));
}
