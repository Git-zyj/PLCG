/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118206
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
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned short) 11068147056296244211ULL))), ((+(((/* implicit */int) max(((unsigned short)19601), (var_9))))))));
    var_20 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */signed char) (_Bool)1))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 ^= ((_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_0 + 1])));
                    var_22 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
                    arr_6 [i_1] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)56691), (((/* implicit */unsigned short) (signed char)-64))))) ? (((/* implicit */int) max((var_15), (((/* implicit */short) arr_3 [i_0 + 1] [i_0 - 2] [7LL]))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-7987)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0 - 1] [i_1] [i_4] [i_3 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0]) : (var_1)))))) ? (((arr_13 [i_4] [i_4] [i_1] [i_2] [i_3] [i_4 + 4]) % (((/* implicit */unsigned long long int) -5066444272924075849LL)))) : (((unsigned long long int) (unsigned short)45935))));
                                var_23 *= max((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (118813326302139229LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-53)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19648)) == (((/* implicit */int) (signed char)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 13; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            {
                arr_19 [i_6] [i_6] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3923271520329998664ULL)) ? (6538597974134583820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) arr_16 [i_5 + 2])))))));
                arr_20 [i_5 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) arr_17 [i_5] [9U]))))) >= (((((/* implicit */_Bool) (signed char)-88)) ? (arr_15 [11ULL] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_6 + 2]))))))))) % (((((/* implicit */_Bool) (unsigned char)28)) ? (arr_15 [i_6] [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))));
            }
        } 
    } 
}
