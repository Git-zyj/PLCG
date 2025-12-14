/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111213
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4112381559U)) ? (arr_1 [(unsigned short)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144)))))))) ? (((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */unsigned long long int) 0)) : (7881299347898368ULL))) : (((/* implicit */unsigned long long int) var_6))));
        arr_3 [i_0] [8U] = ((/* implicit */_Bool) var_7);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_10 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1])) | (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))));
        var_11 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 67100672ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (var_3))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
        arr_6 [(signed char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (((/* implicit */int) var_4)) : (var_5)));
    }
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        arr_9 [(unsigned short)20] [(unsigned short)8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (18438862774361653247ULL) : (((/* implicit */unsigned long long int) var_6)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 1])))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (+(1608308017U))))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_5) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)112)) >= (((/* implicit */int) arr_7 [i_2]))))))) : (((/* implicit */int) arr_8 [7ULL]))));
    }
}
