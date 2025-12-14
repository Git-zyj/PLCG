/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137625
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
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_11 |= ((/* implicit */signed char) ((long long int) ((_Bool) arr_0 [(signed char)17] [i_0 + 2])));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) min((max((38386180U), (((/* implicit */unsigned int) (_Bool)1)))), (arr_1 [i_0 - 1])))) : (min((((/* implicit */unsigned long long int) var_0)), (var_5)))));
        var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((unsigned long long int) arr_3 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16283764629899204294ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (arr_0 [i_1] [i_0])))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) >= (var_8))))))));
            arr_8 [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [6LL]))))))), (((((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_4)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0] [(signed char)18])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 2] [i_0]))))))));
            var_14 = arr_5 [i_1] [i_0 - 3] [i_0 + 2];
            arr_9 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((signed char) arr_4 [i_0 - 3]))) ? (((unsigned int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_4 [19LL])), (min(((signed char)-1), (arr_6 [i_1]))))))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
        arr_15 [i_2] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_2 [i_2] [i_2])))), (((/* implicit */int) max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2]))))));
    }
    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        arr_18 [i_3] = (~(max((4256581115U), (((/* implicit */unsigned int) (signed char)113)))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-12), (arr_3 [20LL])))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_3])), (7873148465754215497ULL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [4ULL]))) + (arr_17 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)1)))))))));
        var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((unsigned int) 0ULL)))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_5 [i_3 - 1] [21ULL] [i_4 - 2]), (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 3]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_24 [(signed char)8] [i_4] [i_5] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)74))));
                var_18 = ((/* implicit */_Bool) (~(var_5)));
            }
        }
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)74)) == (((/* implicit */int) var_1))))))));
}
