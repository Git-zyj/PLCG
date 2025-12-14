/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143532
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
    var_19 = ((/* implicit */_Bool) min(((~(min((162836558U), (((/* implicit */unsigned int) (signed char)123)))))), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) | (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) (-(arr_2 [10LL] [i_0])))) ? (arr_2 [(unsigned char)10] [i_0]) : (((((/* implicit */int) (_Bool)1)) << (((arr_2 [16] [4]) - (879974378)))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0])))))));
        var_23 = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_5 [3LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))));
        var_24 = ((/* implicit */long long int) arr_4 [7ULL]);
        var_25 = ((/* implicit */unsigned short) ((short) (signed char)-124));
        arr_6 [i_1] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_7))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        var_26 |= (short)1062;
        var_27 = ((/* implicit */unsigned short) (short)480);
        var_28 -= (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 1366394140U)) : (arr_8 [i_2] [i_2]))));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_17))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-620433046518282457LL), (((/* implicit */long long int) (unsigned short)18953))))) ? (((/* implicit */int) var_17)) : (var_5)))) : (2928573156U)));
    var_30 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((unsigned short)35811), (((/* implicit */unsigned short) var_15))))), ((~(((0U) << (((/* implicit */int) var_3))))))));
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1907619614U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (3995687291U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((1366394140U), (((/* implicit */unsigned int) (unsigned short)55242))))))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2928573155U)))));
}
