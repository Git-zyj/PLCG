/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122966
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3))) : (arr_1 [i_0])))) ? (min((max((1829338452773921394ULL), (16617405620935630222ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((unsigned long long int) var_13))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 17336099176493198680ULL)) && (arr_3 [i_0])))), ((-(arr_2 [i_0])))));
        var_16 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)512))) : (var_0))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-2507141815240786593LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_17 = ((/* implicit */int) arr_2 [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) : (7857048531428248025ULL)))) ? (1829338452773921393ULL) : (1829338452773921394ULL)));
        var_19 = ((signed char) 12ULL);
        var_20 = ((/* implicit */unsigned int) 1534355550);
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_1 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65523))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) ((unsigned int) arr_9 [i_2] [i_2]));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((arr_9 [i_2] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2])))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_14);
}
