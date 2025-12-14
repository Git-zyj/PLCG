/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117185
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
    var_17 = ((/* implicit */_Bool) var_15);
    var_18 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_2 [i_0]))) << ((((~(arr_0 [i_0] [i_0]))) - (220013290U))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (arr_2 [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_0])))))));
            var_21 ^= ((/* implicit */signed char) (+(((((/* implicit */int) var_5)) | (((/* implicit */int) ((var_11) != (arr_1 [i_1]))))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((arr_6 [i_1 - 1] [i_1 - 1]) >> (((arr_6 [i_1 + 2] [i_1 + 1]) - (10120700356584569169ULL))))) | (((/* implicit */unsigned long long int) ((3523893176U) | (771074130U))))))));
            arr_7 [i_1] = (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_1 + 3]), (((/* implicit */unsigned int) var_3))))));
        }
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7159050428842523288LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))))))));
        var_24 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)64)))) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_10 [i_2] [i_2] = (~(arr_0 [i_2] [i_2]));
        var_25 = ((/* implicit */signed char) ((long long int) 3523893165U));
        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(6820006682896116661ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (arr_6 [i_2] [i_2]))))) : (((unsigned long long int) var_11))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_27 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-48)), (7159050428842523288LL)))))) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (_Bool)1))));
        var_28 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5))))))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */signed char) arr_14 [i_3])))))) : ((+(arr_6 [i_3] [i_3])))))) ? ((((!(((/* implicit */_Bool) (signed char)51)))) ? (((/* implicit */unsigned long long int) var_8)) : (max((((/* implicit */unsigned long long int) (signed char)124)), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)51)) < (((/* implicit */int) (_Bool)1))))))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_14 [8LL]))));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((6820006682896116654ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58)))))), (((long long int) var_10))));
    }
}
