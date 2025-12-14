/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166439
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (4088314364891309190LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [11ULL] [i_0 - 1]))) : (max((((/* implicit */unsigned long long int) -4088314364891309191LL)), (6960279837428563415ULL)))))));
                var_21 ^= ((/* implicit */long long int) ((unsigned long long int) max((arr_4 [i_0 + 3] [i_1] [i_1 - 1]), (((/* implicit */unsigned int) (short)-19789)))));
                arr_5 [i_0] [i_0] [(short)9] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (10ULL)))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((8260226648838930764LL), (((/* implicit */long long int) arr_2 [i_1] [i_1]))))), (var_1)))) && (((/* implicit */_Bool) 342486612070407342LL))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((16ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 3])))));
            }
        } 
    } 
    var_24 = ((unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) & (min((18446744073709551606ULL), (((/* implicit */unsigned long long int) var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 16; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((-(-8260226648838930764LL)))));
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (-(arr_4 [i_2 - 3] [i_2 + 1] [i_2 + 1])));
        var_25 = ((((/* implicit */_Bool) 8260226648838930753LL)) ? (((/* implicit */unsigned long long int) ((arr_0 [i_2]) | (arr_0 [i_2])))) : (var_3));
        var_26 ^= ((/* implicit */unsigned long long int) arr_4 [i_2] [i_2] [i_2]);
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_27 = (+((+(min((8184639133410271290ULL), (var_3))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 4; i_5 < 9; i_5 += 3) 
            {
                {
                    arr_18 [i_5] [i_5] [i_5 - 3] = ((/* implicit */long long int) ((((unsigned long long int) var_16)) - (((((/* implicit */_Bool) (-(var_15)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 8260226648838930741LL)) : (9402703593491527909ULL))) : (((((/* implicit */_Bool) 1005730775115151447LL)) ? (((/* implicit */unsigned long long int) 3283980723745599622LL)) : (2ULL)))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15019)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20014)))));
                    var_29 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_1))))));
                    arr_19 [(short)9] [(short)9] [i_5] [i_5] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24705))))) + (min((arr_11 [i_4] [i_3]), (var_1)))))));
                }
            } 
        } 
        arr_20 [i_3] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
        arr_21 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12ULL)) ? (((13458835491769103744ULL) + (((/* implicit */unsigned long long int) arr_0 [i_3])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-11059)), (2491146876U)))))))));
        var_30 &= ((/* implicit */unsigned long long int) ((arr_4 [i_3] [i_3] [i_3]) << (((((/* implicit */int) var_16)) + (30124)))));
    }
    var_31 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (117440512U))) / (var_19))));
}
