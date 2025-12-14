/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125672
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 994308835875341847ULL)) ? (9039135042144986081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-21)) | (((/* implicit */int) (signed char)-86))))) != (((unsigned long long int) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (signed char)-86))))), (((/* implicit */unsigned long long int) arr_1 [(signed char)3]))));
        var_15 *= ((/* implicit */signed char) var_6);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) arr_5 [i_2 - 3] [8ULL])) ? (((((unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_2 - 2])) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)21))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2 + 1])) * (((/* implicit */int) (signed char)-68))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-26))) : (((6876218966468533158ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))))))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) ^ (11087999270284852915ULL))))) & ((+(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_5) : (var_4))))));
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 - 3])) ? ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (4835096987386003780ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (min((((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (15965891755214434836ULL) : (var_12))), (((unsigned long long int) (signed char)20)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 4; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((((/* implicit */_Bool) (-(var_10)))) ? ((+(arr_10 [(signed char)6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_3]))))))), (((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))))));
        var_19 = (signed char)-4;
        var_20 = ((/* implicit */signed char) max((var_20), (var_2)));
    }
    for (unsigned long long int i_4 = 4; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_21 = ((signed char) ((((/* implicit */_Bool) 11087999270284852900ULL)) ? (1660694950065570078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))));
        var_22 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_4 - 4] [i_4 + 2] [i_4 - 3] [i_4 - 1])) ? (((/* implicit */int) arr_1 [i_4 + 2])) : (((/* implicit */int) arr_1 [i_4 + 2])))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4 - 2])) == (((/* implicit */int) arr_9 [i_4 + 1])))))));
    }
    var_23 = ((/* implicit */signed char) min((min((0ULL), (((9532410409509265035ULL) % (12495866740090352521ULL))))), (((/* implicit */unsigned long long int) var_7))));
    var_24 = ((/* implicit */unsigned long long int) var_0);
}
