/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145340
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
    var_17 = ((/* implicit */unsigned short) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_12))) || (((/* implicit */_Bool) var_8))))))));
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)0))))) ? (var_3) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (2927281723U)))))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_20 = ((((_Bool) ((((/* implicit */_Bool) var_4)) ? (3945299720U) : (349667556U)))) ? ((~(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (signed char)-47)) ? (arr_1 [i_0 + 2]) : (((/* implicit */int) arr_0 [i_0 + 2])))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 7; i_1 += 1) 
    {
        var_21 = ((arr_1 [i_1 + 1]) ^ (arr_1 [i_1 + 3]));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1 - 3]))));
        arr_4 [i_1 - 3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) && (((/* implicit */_Bool) arr_1 [i_1 + 3]))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_23 = ((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)46)) / (((/* implicit */int) (_Bool)1)))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) < (((/* implicit */int) (unsigned short)20096))))) : ((-(((/* implicit */int) (signed char)-4))))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) < (567398335)))) << (((/* implicit */int) arr_9 [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) (+(567398335)))) || (((/* implicit */_Bool) arr_6 [i_3] [i_3])))))));
        arr_10 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)46)) < (((/* implicit */int) (unsigned short)1925))))) << (((((/* implicit */int) min((arr_8 [i_3]), (arr_8 [i_3])))) - (58854)))));
    }
}
