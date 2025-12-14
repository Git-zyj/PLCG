/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112891
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_12 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [(short)2])) * (((/* implicit */int) (_Bool)0))))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [(signed char)7] [i_0])))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_10))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) - (var_1))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (8492612042974503550ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)426)) * (((/* implicit */int) (signed char)86))))), (8492612042974503527ULL)))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_1]) : (var_8))) : (arr_5 [i_1]))) / (((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_6 [(signed char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        arr_7 [i_1] = ((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) min(((signed char)5), (((/* implicit */signed char) (_Bool)1))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (min((8492612042974503527ULL), (arr_5 [i_2])))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8492612042974503562ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) & (((/* implicit */int) min((arr_9 [(short)2] [i_2] [i_2]), (((/* implicit */short) (signed char)-113)))))))) : ((+(((18446744073709551614ULL) << (((/* implicit */int) arr_11 [i_1] [i_2])))))))))));
            arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_1] [i_1])) <= (((/* implicit */int) arr_11 [i_1] [i_2]))))) >= (((/* implicit */int) min((arr_11 [i_1] [i_2]), (arr_11 [i_1] [i_2]))))));
            var_16 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_11 [i_1] [i_2])), (arr_8 [i_1] [i_1])))) : ((~(((/* implicit */int) arr_8 [i_1] [i_1]))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_17 -= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) < (((/* implicit */int) ((signed char) arr_13 [i_1] [i_1]))));
            var_18 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_3])) ? (((/* implicit */int) arr_10 [i_1] [i_3] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_3] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3])))))));
        }
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_1] [i_1])) | ((((~(((/* implicit */int) arr_13 [i_1] [i_1])))) << (((((((((/* implicit */_Bool) arr_9 [i_1] [(signed char)9] [i_1])) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))) + (8637))) - (11)))))));
        arr_15 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((((/* implicit */int) arr_14 [i_1] [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) (short)-2258)) + (2287))) - (29))))), (((/* implicit */int) max((arr_10 [i_1] [i_1] [i_1]), (arr_13 [i_1] [(short)14]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_11 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 8492612042974503550ULL)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_13 [i_1] [i_1])))) : (((/* implicit */int) ((_Bool) arr_9 [i_1] [i_1] [i_1]))))) : (((/* implicit */int) ((short) arr_11 [i_1] [i_1])))));
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((((((/* implicit */int) var_3)) & (((/* implicit */int) var_7)))) & (((/* implicit */int) var_4)))), (((/* implicit */int) var_11)))))));
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((short) var_3)))));
    var_22 = ((/* implicit */signed char) ((max((((((/* implicit */int) var_2)) & (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (short)-12888)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))) << (((/* implicit */int) (!((_Bool)1))))));
}
