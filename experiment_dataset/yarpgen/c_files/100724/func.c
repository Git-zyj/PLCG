/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100724
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_14 |= ((/* implicit */int) (_Bool)1);
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) min(((-(arr_5 [i_0] [i_1]))), ((~(arr_5 [i_0] [i_0]))))))));
            var_16 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [10LL] [i_1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (-7832606015322174102LL) : (((/* implicit */long long int) arr_5 [i_0] [i_0]))))))));
            var_17 ^= ((/* implicit */short) ((var_10) - ((+(arr_5 [i_0] [i_1])))));
        }
        arr_6 [i_0] = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) 2147483647))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 3] [i_2 - 3])) ? (((((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 3])) + (((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 2])))) : (((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 2]))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_14 [(_Bool)1] [i_2] = ((/* implicit */unsigned char) 14168950663339371268ULL);
            arr_15 [i_2] [i_2] [i_2] = (unsigned short)26027;
            var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_2] [i_2 - 3])) : (((/* implicit */int) (_Bool)0))))) < ((+(9223372036854775807LL)))));
        }
        var_19 = ((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12854)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])))))));
    }
    var_20 = ((/* implicit */long long int) var_3);
}
