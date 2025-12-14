/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111490
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4905267356975918008LL)))))));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)9]))) * (0ULL)))));
        var_20 ^= (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)34)) != (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        var_21 += ((/* implicit */signed char) max((((/* implicit */unsigned int) max((730448746), (((/* implicit */int) arr_6 [i_1 - 2] [i_1]))))), (((unsigned int) arr_8 [i_1 - 1]))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_7 [i_1 - 4]))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) ((1839145094974501677ULL) | (1839145094974501677ULL)));
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
        {
            arr_14 [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [9ULL])) ? (16607598978735049925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [0LL]))))))));
            var_23 |= ((/* implicit */unsigned int) (-((+(1839145094974501677ULL)))));
            var_24 = arr_8 [13LL];
        }
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((arr_7 [(signed char)1]) == (arr_7 [i_2])));
        var_25 = ((/* implicit */signed char) var_9);
    }
}
