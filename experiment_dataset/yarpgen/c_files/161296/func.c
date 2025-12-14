/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161296
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((5952816500103218048ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) * (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3]))))) : (((5952816500103218048ULL) * (((/* implicit */unsigned long long int) -1LL))))));
        var_15 ^= ((/* implicit */unsigned short) arr_2 [i_0 + 3] [i_0]);
        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 5952816500103218048ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7LL)) && (((/* implicit */_Bool) 5952816500103218048ULL)))))) : (-1LL))), (arr_0 [i_0] [i_0 + 2])));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_7))));
        var_18 = ((/* implicit */int) arr_0 [i_1] [i_1]);
    }
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) min(((_Bool)1), (arr_7 [i_2] [i_2])))) * (((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)37))))))), (var_11)));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_12 [i_4] [i_3] [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_8))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_3]))) & (((((/* implicit */_Bool) (unsigned short)2)) ? (13637934577681025828ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)9] [i_4])))))))));
                    var_20 *= (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)3072)) == (((/* implicit */int) arr_2 [i_2] [i_2])))))));
                    arr_13 [i_2] [i_4] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 - 1])) >> (((/* implicit */int) arr_8 [i_2 + 4] [i_2] [i_2 + 3])))) | (((/* implicit */int) arr_8 [i_2 + 1] [i_2] [i_2 + 3]))));
                    arr_14 [i_4] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_6 [i_2 + 2] [i_2 + 2]), (arr_6 [i_2 + 2] [i_2 + 4]))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-37)), ((-9223372036854775807LL - 1LL))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            {
                var_22 = ((/* implicit */_Bool) max((var_22), (min((((((((/* implicit */_Bool) (signed char)123)) && (arr_17 [2LL]))) && (((/* implicit */_Bool) 0)))), (((arr_4 [i_5]) && (arr_5 [i_5] [i_6 + 2])))))));
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -22)) && (((/* implicit */_Bool) (unsigned short)22789))));
                arr_21 [i_5] [i_5] = ((/* implicit */signed char) ((max((7771143347441031192ULL), (((/* implicit */unsigned long long int) arr_19 [i_5] [i_6 - 1] [i_6 - 1])))) - (10675600726268520420ULL)));
                arr_22 [i_5] = ((/* implicit */short) var_11);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((0) >= (((/* implicit */int) (_Bool)1))))))))), (min((((9223372036854775807LL) + (-10LL))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) * (-4LL))))))))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_4))));
    var_26 = ((/* implicit */_Bool) 0ULL);
}
