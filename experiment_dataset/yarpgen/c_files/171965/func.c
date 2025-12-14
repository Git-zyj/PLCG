/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171965
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
    var_10 += ((/* implicit */unsigned short) (_Bool)1);
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) -6454122005461047642LL);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6454122005461047637LL)) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) 6454122005461047632LL)) ? (var_0) : (arr_1 [i_0] [(short)0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_1]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40798))) | (18446744073709551606ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12)))));
        var_12 += ((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)-8)))), (((((/* implicit */_Bool) -6454122005461047632LL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)0))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned short) 9590049166086774681ULL)))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!((_Bool)0))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (7593041526764144693LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_9 [i_2] [i_2])))))));
    }
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (_Bool)0))) | (((/* implicit */int) ((_Bool) arr_14 [i_3 + 1] [i_3])))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_21 [i_4] [i_3] [i_3] = ((/* implicit */_Bool) 1588400779U);
            var_16 += ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) : (-6454122005461047633LL)))));
        }
        var_17 += ((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (((int) arr_17 [i_3] [i_3] [i_3 + 1]))));
    }
}
