/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129329
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [(signed char)11] = ((max((((((/* implicit */_Bool) 4968713233539722270ULL)) ? (4840927700263234385ULL) : (4840927700263234395ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-62))))))) & ((~(((((/* implicit */_Bool) arr_5 [i_2])) ? (var_6) : (17ULL))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) max(((+(max((arr_1 [i_2 - 1]), (9223372036854775789LL))))), (((((((/* implicit */_Bool) arr_2 [i_0] [12ULL])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])))) ? (var_8) : (arr_2 [i_0] [i_0])))));
                    var_10 = ((((((/* implicit */int) var_7)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2556465745670006533ULL)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)52))))));
                }
            } 
        } 
        arr_10 [5ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)88))))) ^ (arr_5 [i_0]))) < (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (signed char)-53))))));
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_0]);
    }
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4497989643949778567LL)) ? (-6255231489100049965LL) : (7223253169917034440LL)))))))))));
    var_12 |= max((((((/* implicit */_Bool) ((unsigned long long int) 17412388523352571323ULL))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((var_8) / (var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (var_8)))));
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_7))));
}
