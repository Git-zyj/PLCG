/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184295
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
    var_10 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30702))) : (var_6))))) & (((/* implicit */unsigned int) min((var_8), (((/* implicit */int) (_Bool)1)))))));
    var_11 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)165)) >= (((/* implicit */int) (signed char)8)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_6)) ? (var_2) : (min((((/* implicit */long long int) var_6)), (var_2)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */_Bool) 13083082975495144839ULL)) && (((/* implicit */_Bool) arr_2 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_3 [(_Bool)1]);
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) arr_0 [i_1])) : (((((((/* implicit */int) arr_5 [13ULL] [i_1])) + (2147483647))) >> (((((/* implicit */int) (short)30691)) - (30691))))))) << (((((/* implicit */int) arr_5 [i_1] [i_1])) + (132))));
        var_13 = ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) min((((((/* implicit */int) (signed char)-9)) >= (((/* implicit */int) var_0)))), (((_Bool) arr_0 [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) min(((+(arr_10 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_8 [i_2])))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((arr_3 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))))))));
        arr_12 [i_2] = ((/* implicit */int) (unsigned char)73);
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-30702)) ? (((/* implicit */long long int) arr_14 [i_3] [i_3])) : (3131425084989823532LL))) >= (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
        arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3 - 3])) ? (((/* implicit */unsigned long long int) arr_8 [i_3 - 4])) : (arr_10 [i_3 - 3])));
    }
}
