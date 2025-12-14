/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175725
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
    var_17 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8935141660703064064ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (0ULL))))))), (18446744073709551615ULL)));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_18 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((int) arr_1 [i_0 - 2] [i_0 - 1]))), (((min((19ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))) % (((/* implicit */unsigned long long int) arr_0 [8LL]))))));
        var_19 += ((((/* implicit */int) ((short) arr_3 [i_0 - 2]))) >> (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)150)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)219)))) < (((/* implicit */int) min((arr_1 [9U] [i_0]), ((unsigned char)126))))))));
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -1780909720755683364LL)))) : (0LL)));
    }
    for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_21 *= ((/* implicit */unsigned int) ((max((arr_6 [i_1 - 1]), (((/* implicit */long long int) ((8384512U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))))))) * ((-9223372036854775807LL - 1LL))));
        var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1 - 1])))) : (max((((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_1 - 2])), (10398119927210381827ULL)))));
        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [(short)16]))) ? (((/* implicit */unsigned long long int) 1099511627775LL)) : (10398119927210381806ULL)));
    }
    var_24 *= ((/* implicit */short) 140720308486144LL);
}
