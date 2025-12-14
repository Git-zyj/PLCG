/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12306
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) max((14872645143609742969ULL), (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */int) (_Bool)0))))), (var_0))))))));
    var_11 *= ((/* implicit */unsigned long long int) ((var_8) != (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [(unsigned char)14]) + (((arr_2 [i_0]) % (arr_2 [12])))))) ? (max((((/* implicit */unsigned long long int) max((arr_1 [i_0 - 2]), (((/* implicit */int) var_4))))), (max((((/* implicit */unsigned long long int) 2975005383611192909LL)), (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_1 [0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 + 1])) : (var_0))), (((/* implicit */unsigned long long int) 256647518)))), (max((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_3)))), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0]))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_0 + 1] [i_0 - 2])), (2047LL)))) || (((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) 0)))))));
                    arr_11 [16ULL] [4LL] [i_2] |= arr_1 [2LL];
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((+(max((((/* implicit */int) var_4)), (var_9))))) : (arr_10 [2LL] [i_3] [4ULL])));
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [(short)1] [(short)1] [i_3])) | (max((14148497504347426800ULL), (((/* implicit */unsigned long long int) -8769303162266006439LL))))));
        arr_14 [i_3] = ((/* implicit */_Bool) arr_13 [i_3]);
        var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((5611068618255393389ULL) - (5611068618255393369ULL)))))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (2251799813685248ULL)))));
        arr_15 [i_3] = ((/* implicit */signed char) arr_2 [i_3]);
    }
}
