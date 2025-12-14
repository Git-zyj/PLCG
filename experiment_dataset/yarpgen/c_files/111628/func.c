/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111628
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) (signed char)(-127 - 1))))))) == (max((((long long int) -1LL)), (((long long int) (_Bool)1))))));
    var_11 = (unsigned short)65535;
    var_12 ^= ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_13 |= ((/* implicit */long long int) var_4);
        var_14 = ((/* implicit */unsigned short) (-(-9223372036854775801LL)));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned int) -712038601));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (signed char)77))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((int) (~(min((4302194834509950032LL), (((/* implicit */long long int) 0U)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_10 [6LL] = ((/* implicit */_Bool) ((unsigned short) max((var_9), (((/* implicit */long long int) var_4)))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) min((-11LL), (((9070760396224689404LL) / (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))))));
    }
}
