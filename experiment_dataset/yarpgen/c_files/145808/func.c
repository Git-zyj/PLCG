/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145808
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) (+(((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)47))))));
        var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) * (var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_10)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        arr_9 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_8))))), (max((1956317477783339715ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_16 [i_2] [(signed char)6] [i_2] |= arr_1 [i_2] [i_2];
            var_13 = ((/* implicit */unsigned long long int) ((arr_6 [i_3]) != ((-(14176921396104441830ULL)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_2])))))));
                arr_20 [i_2] [(signed char)7] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-59))));
            }
        }
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2])) && (((/* implicit */_Bool) arr_13 [i_2])))))));
        var_16 = ((/* implicit */_Bool) ((14176921396104441840ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
        var_17 = ((var_10) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [(_Bool)1]))))) : (((unsigned long long int) var_10)));
    }
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)120)) ? (2065506654469042440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        arr_24 [i_5] = arr_7 [i_5];
        arr_25 [i_5] = ((/* implicit */unsigned long long int) (signed char)103);
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
    {
        arr_30 [3ULL] = max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) && (var_8))), ((!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))))), (min((((/* implicit */unsigned long long int) ((_Bool) arr_28 [(_Bool)1]))), (max((((/* implicit */unsigned long long int) var_4)), (arr_15 [i_6] [5ULL] [(_Bool)1]))))));
        arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_6])) > (((/* implicit */int) arr_23 [i_6])))) ? (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) (signed char)22)))) : (((arr_23 [i_6]) ? (((/* implicit */int) arr_19 [(_Bool)1])) : (((/* implicit */int) arr_23 [i_6]))))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-53)) + (2147483647))) << (((6777677382435040087ULL) - (6777677382435040087ULL)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))) | (max((7489523370560899855ULL), (((/* implicit */unsigned long long int) arr_11 [i_6] [i_6]))))))));
        var_20 = ((/* implicit */_Bool) (+(max((arr_14 [i_6] [i_6]), (arr_14 [i_6] [8ULL])))));
    }
}
