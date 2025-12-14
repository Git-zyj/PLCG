/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124261
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
    var_12 = ((2274756057710948851ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (+(max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 2])) <= (((/* implicit */int) arr_0 [i_0]))))), (var_2))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) << (((((unsigned int) (~(3928160257U)))) - (366807033U)))));
                    var_13 = ((/* implicit */unsigned short) min((((arr_2 [i_0 + 2] [i_0]) / (arr_2 [i_0 + 3] [(unsigned char)3]))), (((((arr_2 [i_0 - 2] [i_0]) + (2147483647))) >> (((arr_2 [i_0 + 3] [i_0 - 1]) + (2038393204)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) (short)-1459);
        var_15 += ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [i_3 + 2] [i_3] [i_3 - 1]))));
    }
    for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_4] [i_4]))))))))));
        arr_19 [i_4] [i_4] = (+(((((/* implicit */int) ((signed char) (short)-1451))) << (max((((/* implicit */int) (unsigned short)6)), (-208854374))))));
    }
    var_16 |= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)64419)) : (((/* implicit */int) (unsigned char)124)))))))), (((var_11) ? (((/* implicit */int) var_9)) : ((~(var_6)))))));
    var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_1))))) || (((((((-2048652603065679163LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_1)))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6))))))));
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) && (var_1))))));
}
