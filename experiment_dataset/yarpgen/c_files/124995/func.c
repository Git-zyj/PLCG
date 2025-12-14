/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124995
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_10)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(0))))));
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(unsigned short)15])) | (((/* implicit */int) arr_1 [i_0]))));
        var_17 |= ((/* implicit */unsigned long long int) ((signed char) 18446744073709551615ULL));
        var_18 = ((unsigned short) arr_2 [i_0] [i_0 - 3]);
    }
    for (unsigned short i_1 = 4; i_1 < 17; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        var_20 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_1 [i_1])))));
    }
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_13))))) ^ (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))) >= (max((31), (1281773355))))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_1))));
    var_23 = ((/* implicit */unsigned long long int) var_9);
}
