/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135775
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
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_0]))))))) & (16187751163189642621ULL));
        arr_4 [i_0] = ((/* implicit */_Bool) 0ULL);
        arr_5 [i_0] = ((((unsigned long long int) arr_2 [i_0] [i_0])) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((max((((/* implicit */int) arr_2 [8U] [i_0])), (var_8))) <= (((/* implicit */int) var_5)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_9 [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_1])) < (((/* implicit */int) arr_2 [i_1] [i_1]))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_8 [i_1] [i_1]) / (((/* implicit */int) arr_0 [i_1]))));
        arr_11 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) arr_1 [(_Bool)1]));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        arr_14 [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)45377))) > (3968906287383383674LL)))), (9223372036854775807ULL)))) ? (((/* implicit */int) max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2])))) : (((/* implicit */int) arr_0 [i_2]))));
        arr_15 [i_2] = ((/* implicit */unsigned long long int) max(((~(var_8))), (((/* implicit */int) arr_0 [i_2]))));
        arr_16 [i_2] = ((/* implicit */short) ((int) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) arr_12 [(signed char)0])) - (44828))))));
        arr_17 [i_2] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (signed char)-23)) + (((/* implicit */int) arr_1 [i_2])))) - (((/* implicit */int) arr_0 [i_2])))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_4)) - (184))))))))));
    }
}
