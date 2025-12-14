/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109562
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
    var_11 = ((/* implicit */unsigned short) var_2);
    var_12 ^= ((/* implicit */short) var_3);
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 14103968985606186419ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (0ULL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
        arr_2 [i_0 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 - 3]))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_16 = ((/* implicit */short) (+((-(10868635545450727473ULL)))));
            arr_5 [i_0 - 1] [i_1 - 1] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49323))))));
        }
    }
    for (long long int i_2 = 3; i_2 < 8; i_2 += 3) /* same iter space */
    {
        var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+(536870911U))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))))))));
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_7 [i_2 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3758096403U)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))))));
        arr_9 [i_2] [i_2 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2033464748U)))))));
    }
}
