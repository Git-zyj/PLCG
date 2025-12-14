/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182032
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_12))));
    var_15 = ((/* implicit */signed char) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            arr_4 [11] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_1] [i_0 + 3])), (var_9)))), (max((((var_0) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_3 [(unsigned short)19] [i_0] [i_0])))), (((/* implicit */int) var_8))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (min((var_2), (((/* implicit */long long int) arr_5 [(signed char)14]))))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)56449))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1 - 3] [i_2])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (signed char)106))))), (((((/* implicit */_Bool) 1635651304)) ? (((/* implicit */long long int) arr_1 [i_0 - 1])) : (9223372036854775807LL)))))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 1])))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_1 [i_0 + 3]))));
                arr_9 [i_0 + 3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 817133940320404851LL)) ? (9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16051)))))) ? (((long long int) arr_1 [i_1 - 2])) : (((/* implicit */long long int) min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1]))))))));
            }
            arr_10 [i_0] = ((/* implicit */unsigned int) max((min(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (signed char)-108)))), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1 - 3])), (var_13))))))));
        }
        var_20 = arr_2 [i_0] [i_0];
    }
    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (arr_13 [i_3 - 1] [19LL])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_12)) : (var_10))) : (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3])))))))) ? (max((((/* implicit */long long int) ((signed char) arr_12 [i_3]))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3])))));
        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_1))) || (min((arr_12 [16ULL]), (arr_12 [(unsigned short)10])))));
        var_23 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_3] [i_3]))));
    }
}
