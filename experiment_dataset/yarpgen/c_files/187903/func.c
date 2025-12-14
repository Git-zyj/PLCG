/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187903
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
    var_20 *= ((/* implicit */signed char) var_16);
    var_21 = ((/* implicit */_Bool) var_17);
    var_22 ^= ((/* implicit */long long int) ((((/* implicit */int) (short)20140)) - (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (short)-11623))))) <= ((-(((/* implicit */int) (short)-11629)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_3 [(signed char)3] [i_0 + 2] = ((/* implicit */unsigned long long int) var_10);
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)20140))));
        var_24 = ((/* implicit */unsigned int) ((var_18) ? (((/* implicit */long long int) (+(((arr_1 [i_0] [i_0]) / (((/* implicit */int) var_11))))))) : (((((/* implicit */_Bool) ((int) 0U))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */short) var_18)))))) : (min((arr_0 [i_0 - 3]), (((/* implicit */long long int) (short)(-32767 - 1)))))))));
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_9 [i_1] [i_1 - 1] [i_2] = ((/* implicit */short) (signed char)(-127 - 1));
            var_25 = ((/* implicit */unsigned short) (short)11622);
        }
        var_26 = ((/* implicit */unsigned short) (short)-20140);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)20140)) ^ (((/* implicit */int) arr_5 [i_1])))) ^ (((((/* implicit */int) arr_8 [i_1] [i_1 + 1] [1U])) & (((/* implicit */int) arr_5 [i_1]))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        var_27 |= ((/* implicit */int) var_1);
        arr_13 [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3]);
    }
    var_28 += ((/* implicit */short) ((((var_4) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39397))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_8))) + (((/* implicit */int) (unsigned char)14)))))));
}
