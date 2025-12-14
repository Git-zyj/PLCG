/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120372
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1288474955303869871ULL)) ? (1640067055U) : (255U)))), (min((17158269118405681742ULL), (((/* implicit */unsigned long long int) -1680793005505621691LL))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14405075762983415178ULL)) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) var_5))))), (((var_9) / (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned int) min((min((2052508141022005052ULL), (((/* implicit */unsigned long long int) 251U)))), (((/* implicit */unsigned long long int) min((arr_2 [i_0]), (((/* implicit */long long int) 4294963200U)))))));
            arr_9 [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 248U)), (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967058U)) ? (var_9) : (((/* implicit */unsigned long long int) var_5))))) ? (arr_1 [i_0 + 1]) : (0U))))));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) 8414787883088975271LL);
        }
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((min((min((17158269118405681744ULL), (((/* implicit */unsigned long long int) 1352090546U)))), (10033822717117390216ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned int) 255U)) >= (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) > (((/* implicit */long long int) 4294967040U))))))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (((((/* implicit */unsigned long long int) 2787155925U)) + (var_7))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(16760832U)))) ? ((~(243U))) : (((((/* implicit */_Bool) -1LL)) ? (2920579698U) : (4185456410U))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2356661143U)) + (16995446363127373339ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1451297710582178280ULL)) && (((/* implicit */_Bool) arr_11 [i_2] [i_2]))))) : (((/* implicit */int) ((unsigned short) 1451297710582178277ULL)))))) <= (((((arr_13 [i_2] [i_2]) / (((/* implicit */unsigned long long int) arr_12 [i_2] [10LL])))) * (((/* implicit */unsigned long long int) (-(4294967295U))))))));
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) var_0)) + (var_7))))) & (var_4)));
}
