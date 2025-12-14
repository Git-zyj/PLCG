/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182183
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ? (13835058055282163712ULL) : (262143ULL)))) ? (max((13835058055282163721ULL), (var_12))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (13835058055282163712ULL)))))) ? (((/* implicit */long long int) max((((/* implicit */int) max((var_14), (((/* implicit */unsigned char) (_Bool)1))))), (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (7325)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 262136ULL)) ? (var_7) : (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) : (4LL)))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), ((-(var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) == (((/* implicit */int) var_14))))))));
    var_17 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            var_18 &= 1572864;
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(4611686018427387916ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_20 = ((/* implicit */long long int) ((arr_0 [i_0]) << (((arr_3 [i_0 + 2] [i_0 + 3] [8ULL]) - (10330550123824988924ULL)))));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)180))))) > (((((/* implicit */_Bool) var_4)) ? (-4LL) : (arr_5 [i_0])))));
            arr_9 [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]);
            arr_10 [13ULL] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0]))));
        }
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_21 = ((/* implicit */int) arr_0 [i_0]);
            arr_13 [i_0] = ((arr_11 [i_0] [i_3] [i_0]) != (arr_3 [i_0] [7LL] [i_0]));
            arr_14 [(short)12] [i_0] = arr_11 [i_0 + 2] [i_0 - 1] [i_0];
            var_22 = ((/* implicit */long long int) ((-1) / (((/* implicit */int) (unsigned char)75))));
        }
        arr_15 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 7ULL)) ? (((((/* implicit */_Bool) var_3)) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_0]) : (var_12))) : (arr_0 [i_0])));
    }
    for (short i_4 = 4; i_4 < 15; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 4611686018427387904ULL))) ? (18446744073709551615ULL) : (4611686018427387904ULL)));
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_16 [i_4 + 1])), (((((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (arr_17 [i_4])))));
        var_25 = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (9223372028264841216ULL))) ? (((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-12LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4 - 4]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_4 - 2])) >> (((((var_3) >> (((arr_17 [i_4]) + (2857391576569789738LL))))) - (963937387ULL))))))));
    }
}
