/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178836
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
    var_10 |= ((/* implicit */unsigned char) var_7);
    var_11 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) 4893237706277970112LL)))), (((/* implicit */unsigned long long int) (signed char)4)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (4893237706277970104LL)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((-4893237706277970142LL) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 - 1]))) : (32767U)));
            var_13 *= ((/* implicit */int) (signed char)-1);
            arr_6 [i_1] [i_0] = ((/* implicit */short) var_3);
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned int) 801170639)) : (arr_2 [i_0] [i_0 + 1])));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 20; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) 4893237706277970118LL));
        var_15 *= ((/* implicit */unsigned char) 231839386U);
        var_16 = ((/* implicit */int) ((short) arr_8 [i_2 + 4]));
    }
    var_17 ^= ((/* implicit */long long int) ((short) var_3));
}
