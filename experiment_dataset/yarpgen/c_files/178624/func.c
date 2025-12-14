/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178624
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_11))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) max((arr_1 [i_0] [i_0]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) -185929423)) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) var_4))))))));
        arr_4 [11] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0]) - (arr_2 [i_0])))) : (((((/* implicit */unsigned long long int) arr_2 [2LL])) % (arr_0 [i_0] [i_0])))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_14)) : (arr_2 [i_0])))))) * (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-478355847947682848LL))))))));
        var_22 -= ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_5 [(signed char)18] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) 2887273785U)) || (((/* implicit */_Bool) (unsigned short)11597))))) : (((((/* implicit */_Bool) -185929426)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (unsigned char)20)))))) < (max(((~(((/* implicit */int) (unsigned short)65520)))), ((-2147483647 - 1))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned short) ((unsigned char) (-(arr_2 [i_1]))));
    }
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((((/* implicit */int) arr_11 [i_2])) ^ (((/* implicit */int) arr_6 [i_2] [i_2])))) : (((/* implicit */int) arr_11 [i_2 + 1])))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((arr_12 [i_2] [5]) + (9223372036854775807LL))) << (((((/* implicit */_Bool) 1877886073U)) ? (((/* implicit */int) (_Bool)1)) : (117940850))))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((-185929423) - (185929435))))));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_0 [i_2] [i_2]) - (7590235166154420915ULL)))));
    }
    var_26 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((var_18) ? (var_6) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (var_14)))) : (var_14))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (2165738797U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 185929405)), (var_15)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) - (var_15))) : (((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */long long int) var_14)))))) : (min((((/* implicit */long long int) var_14)), (((var_10) ^ (var_15)))))));
    var_28 = ((/* implicit */int) ((long long int) (~(max((var_9), (((/* implicit */long long int) var_0)))))));
}
