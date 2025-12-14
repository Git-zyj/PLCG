/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166509
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
    var_12 = var_8;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) > (9223372036854775807LL)));
                    arr_8 [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-9223372036854775787LL), (((/* implicit */long long int) 4294967295U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) max((arr_7 [i_0] [i_1 - 1] [i_2] [i_0]), (((/* implicit */unsigned short) var_9)))))));
                    var_14 &= ((/* implicit */unsigned short) ((min((((/* implicit */int) var_1)), (2073326113))) & (-1012022636)));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((var_9) ? (((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 3])) : (var_11))) == (((/* implicit */long long int) ((/* implicit */int) ((var_4) != (((1909725667477638LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((3759610891U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) (_Bool)1)))))) == (4294967288U)))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((/* implicit */long long int) var_10)), (((9223372036854775791LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (_Bool)1))))))))))));
    /* LoopSeq 2 */
    for (int i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)149)) || (((/* implicit */_Bool) (unsigned char)28)))) ? (max((((/* implicit */unsigned long long int) var_4)), (18446744073709551610ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [8LL])) && (((/* implicit */_Bool) var_11))))))))))))));
        var_19 = ((/* implicit */_Bool) (short)26909);
        var_20 = ((/* implicit */signed char) var_1);
        arr_13 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) var_5)))) && ((!(((/* implicit */_Bool) arr_9 [i_3 - 1]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_3)))) ? (var_4) : (-2770957488056439254LL))) != (((((/* implicit */_Bool) 2305843009146585088ULL)) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_8)))) : (min((-2770957488056439254LL), (((/* implicit */long long int) var_8))))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((2770957488056439253LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65519))))))));
                    var_23 = ((/* implicit */int) min((max((((/* implicit */long long int) var_8)), (var_4))), (9223372036854775807LL)));
                }
            } 
        } 
        arr_26 [2LL] [i_4] = ((/* implicit */unsigned int) (((((_Bool)1) && (((((/* implicit */_Bool) arr_17 [i_4])) && (((/* implicit */_Bool) 2073326119)))))) || (((((/* implicit */_Bool) arr_10 [i_4] [i_4])) && ((!(((/* implicit */_Bool) 5U))))))));
    }
}
