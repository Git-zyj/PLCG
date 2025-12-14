/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154652
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
    var_12 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) -6163533955044215495LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_2 [(short)2]))) - (((arr_2 [(short)16]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)81))))))))));
        var_14 ^= ((/* implicit */signed char) var_5);
        arr_3 [i_0] [18] = ((/* implicit */signed char) 6786357184977541087ULL);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [17])) ? (-6163533955044215495LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) && ((!(((/* implicit */_Bool) 6163533955044215476LL))))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] &= (!(((/* implicit */_Bool) ((unsigned int) (short)-17727))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) 6163533955044215503LL))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_0 [6U]))));
            arr_13 [i_1] [(signed char)1] = ((/* implicit */long long int) arr_1 [i_3] [i_3]);
            var_17 *= ((/* implicit */signed char) (unsigned char)120);
            arr_14 [i_1] [i_3] = ((/* implicit */unsigned short) 268431360LL);
        }
        var_18 = var_3;
    }
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) 6706058454857607072LL))) && (((/* implicit */_Bool) var_1))));
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((var_10) / (var_10))))));
}
