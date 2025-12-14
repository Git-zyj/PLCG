/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167508
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~((-(((/* implicit */int) (_Bool)1)))))))));
        arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [(signed char)2] [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_16 *= ((/* implicit */unsigned short) arr_6 [i_1]);
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8589934591ULL)))) ? (((/* implicit */long long int) (+(min(((-2147483647 - 1)), (((/* implicit */int) var_5))))))) : ((~(max((-1359801455591521171LL), (((/* implicit */long long int) (short)-15075))))))));
        var_18 *= ((/* implicit */unsigned short) (_Bool)1);
        var_19 = ((/* implicit */long long int) var_8);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~((~(arr_8 [(short)10] [i_2]))))))));
        var_21 = ((/* implicit */unsigned long long int) (~(9223372036854775807LL)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) min((arr_10 [i_3]), (arr_10 [i_3]))))));
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_12))))) : (((/* implicit */int) arr_6 [i_3])))))));
        arr_13 [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)127)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_8 [i_3] [i_3]))) : (((/* implicit */long long int) min((((/* implicit */int) var_13)), (var_9))))))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_7))));
        var_24 = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) -1309139762)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1304991340))))))) : (((((((/* implicit */_Bool) (unsigned char)196)) || (((/* implicit */_Bool) 8589934591ULL)))) ? (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_9 [i_3]))))));
    }
    var_25 = ((/* implicit */int) var_13);
    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) min((((/* implicit */int) var_12)), ((-2147483647 - 1)))))));
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744065119617024ULL)) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_12))))) : (((((/* implicit */int) var_7)) % (((/* implicit */int) var_2))))))) ? (((((5627565019027718200ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
    var_28 = ((/* implicit */signed char) (unsigned char)240);
}
