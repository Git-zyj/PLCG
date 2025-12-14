/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15597
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((0ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [7LL]))) - (arr_1 [10LL] [i_0]))) * (((10ULL) ^ (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (3443952165U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3565)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2016))) * (arr_1 [i_0] [i_0]))) : (((unsigned long long int) 18446744073709551610ULL))))) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
            arr_6 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1 + 2] [i_0]))) ? (((arr_1 [i_1 - 1] [i_0]) % (arr_1 [i_1 + 4] [i_0]))) : (min((18ULL), (arr_1 [i_1 + 2] [i_0])))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    var_19 = ((/* implicit */_Bool) var_14);
    var_20 = ((/* implicit */short) var_6);
    var_21 = (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18052)) - (2147483647)))) : (22ULL))) : (((/* implicit */unsigned long long int) ((((var_1) + (9223372036854775807LL))) << (((var_14) - (379560511U)))))));
}
