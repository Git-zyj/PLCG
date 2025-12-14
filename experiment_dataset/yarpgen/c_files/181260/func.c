/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181260
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
    var_12 *= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned char)134))))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)-13999))) ^ (9223372036854775807LL)))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14017)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? ((-9223372036854775807LL - 1LL)) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) ^ (((/* implicit */int) arr_4 [i_0]))))) ^ (min((var_6), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            var_16 = ((/* implicit */short) var_6);
            arr_6 [i_0] = ((/* implicit */unsigned short) var_4);
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) var_7);
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ ((-(((/* implicit */int) (short)-32044))))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_5))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-14002), (((/* implicit */short) (signed char)60))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)7286))) ^ (var_11))))));
        var_18 = var_8;
    }
    var_19 -= ((/* implicit */unsigned short) var_11);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_11))));
}
