/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187454
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
    var_11 += ((/* implicit */short) ((max((((/* implicit */int) ((signed char) var_6))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (unsigned char)155)))))) <= ((~((~(((/* implicit */int) var_8))))))));
    var_12 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) (unsigned char)168)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)85)) - (85)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)10121)) : (((/* implicit */int) (unsigned char)165)))) : (min((((/* implicit */int) var_3)), (var_0)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) ((unsigned short) var_1))) / (((int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)111)), (((((/* implicit */_Bool) arr_2 [i_0])) ? (-1290056967) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) != (4279587022451906045LL)))), (((long long int) (signed char)-105))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) - (((((/* implicit */_Bool) 9U)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (4279587022451906045LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */int) arr_2 [i_1])), (1032010017))) & (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (unsigned short)13223)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) / (var_5)))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_1]))) : (((/* implicit */int) (short)-10107))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-123)), (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -585732873)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)11))))) : (min((-4279587022451906050LL), (((/* implicit */long long int) var_1))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24991)) ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)8569))))) : (4294967295U)));
        var_14 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 4070108714127096121LL)) ^ (4305420878546475180ULL))) ^ (((/* implicit */unsigned long long int) -2132938234))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) max(((unsigned char)160), (((/* implicit */unsigned char) var_7))))))))))));
            var_16 = ((/* implicit */long long int) ((signed char) arr_12 [i_3 + 3] [i_2] [i_2]));
        }
        var_17 = ((signed char) (!(((/* implicit */_Bool) (signed char)87))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)13967), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (arr_1 [i_2 - 1])))) + (((((((/* implicit */_Bool) (signed char)-98)) ? (9223372036854775797LL) : (((/* implicit */long long int) var_9)))) << (((((((/* implicit */int) arr_10 [i_2])) + (84))) - (22)))))));
    }
}
