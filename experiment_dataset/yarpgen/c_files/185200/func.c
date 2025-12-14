/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185200
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
    var_16 = (((-(((((/* implicit */_Bool) var_5)) ? (15868991441086109492ULL) : (((/* implicit */unsigned long long int) 4294967285U)))))) & (min((2577752632623442110ULL), (18446744073709551611ULL))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_3))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_3);
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((15868991441086109490ULL), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [12])), (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1451606617U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : (max((2577752632623442121ULL), (((/* implicit */unsigned long long int) (signed char)-1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-(6802950383956700819ULL)))))));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)249)) - (220)))))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_0))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_5 [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (15868991441086109492ULL) : (((/* implicit */unsigned long long int) var_13))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                arr_14 [2LL] [2LL] [i_2] [i_1] = ((/* implicit */long long int) (+((~(15868991441086109492ULL)))));
                arr_15 [i_1] [i_2] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) 1453337876345156423LL)) ? (710227622U) : (((2795470539U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)9024)))))));
                var_19 += ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 1]));
                var_20 &= ((/* implicit */unsigned long long int) var_14);
            }
        }
        var_21 = ((/* implicit */int) min(((~(min((2577752632623442125ULL), (((/* implicit */unsigned long long int) 710227620U)))))), (((((/* implicit */_Bool) 710227622U)) ? (9996926158940679580ULL) : (((2647394817067264508ULL) & (((/* implicit */unsigned long long int) 3054831243939295993LL))))))));
    }
}
