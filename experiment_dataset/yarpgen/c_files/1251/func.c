/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1251
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_16 = min(((((~(arr_1 [i_0]))) & (arr_1 [i_0 + 3]))), (arr_2 [i_0] [i_0 + 1]));
        var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)3072)) || (((/* implicit */_Bool) -5983877923144534219LL)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))) >= (arr_1 [i_0 + 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [2LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_14)), (23LL)))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)230)), ((-(9223372036854743040ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
        var_18 = (((!((!(((/* implicit */_Bool) var_2)))))) ? (((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_11) : (((/* implicit */int) var_5))))) : (arr_1 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
        {
            var_19 = var_9;
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */short) (((~(((unsigned int) (short)0)))) & (((/* implicit */unsigned int) var_10))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_15))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_3 [i_3])));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (short)-32766))))) ? (max((var_4), (((/* implicit */unsigned int) var_14)))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (1324267463U)))))) ? (min(((-(((/* implicit */int) (signed char)127)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)-32763)))))) : (((/* implicit */int) (signed char)127))));
}
