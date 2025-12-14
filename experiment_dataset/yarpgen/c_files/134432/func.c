/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134432
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (var_14)))) < (((/* implicit */int) var_15))))) < (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) >= (var_9)))) % (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_10)))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 186578266U)) || (((/* implicit */_Bool) -1LL))))) == (((/* implicit */int) ((((/* implicit */_Bool) ((-8805309841800914456LL) ^ (((/* implicit */long long int) var_3))))) && (((((/* implicit */unsigned long long int) 4108389026U)) == (var_11))))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0 + 1])) - (((var_1) - (((/* implicit */long long int) var_3))))))) - (((var_16) - (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1]) - (arr_0 [7LL])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_13) / (((/* implicit */int) var_15))))) >= (4108389029U)))) * (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((-149803504) + (149803512)))))) || (((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1]))))))))));
            var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_13) / (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))) * (((((((/* implicit */unsigned long long int) arr_0 [i_0])) * (0ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)9] [i_1 + 3]))) * (-1LL))))))));
            var_21 *= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) 4108389011U)) == (var_11)))) & (((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29266)))))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2])) || (((/* implicit */_Bool) arr_3 [(unsigned short)9] [i_0 + 2])))))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((arr_5 [i_2 + 4] [i_2 + 2]) - (arr_5 [i_2 + 4] [i_2])))));
        arr_7 [i_2 + 1] [i_2] = ((/* implicit */unsigned int) ((arr_5 [i_2 - 1] [i_2 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14702))) / (arr_5 [i_2] [i_2 + 2])));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) ((arr_4 [i_3] [i_3]) >= (((/* implicit */unsigned long long int) -1LL))))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (var_3))))))) != (((/* implicit */int) ((((var_8) ^ (((/* implicit */unsigned long long int) var_3)))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (1LL)))))))));
        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)-50))))) || (((((/* implicit */unsigned int) arr_0 [i_3])) > (var_2)))));
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_16)))) && (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6)))))) || (((((/* implicit */_Bool) arr_6 [i_3])) || (((/* implicit */_Bool) var_4))))));
        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((4108389029U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)254)) - (0)));
    }
}
