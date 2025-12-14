/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16368
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) (~(-2105003030)));
            arr_4 [i_0] [i_1] = ((/* implicit */_Bool) var_13);
        }
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            var_21 = ((/* implicit */long long int) var_8);
            var_22 &= ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) arr_3 [i_2] [(_Bool)1] [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_2] [i_2 - 2])) - (((/* implicit */int) var_2))))) : (var_14)));
            arr_7 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) 16777088ULL)) ? (7806098370080854018LL) : (-7806098370080854021LL));
            var_23 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)15138)) && (((/* implicit */_Bool) 2254008201U))))));
        }
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((7806098370080854033LL) % (((/* implicit */long long int) ((/* implicit */int) (short)16317)))))));
        var_25 = max((((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) arr_6 [(signed char)6] [5ULL] [i_0])))) : (arr_5 [i_0] [i_0]))), (((/* implicit */int) var_13)));
        arr_8 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((arr_5 [i_0] [i_0]) != (((/* implicit */int) arr_2 [i_0] [i_0]))))), (((((var_8) << (((((/* implicit */int) arr_0 [i_0])) + (20925))))) + (((/* implicit */unsigned int) ((int) var_12)))))));
    }
    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_18))), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) (-(-7806098370080854034LL))))));
}
