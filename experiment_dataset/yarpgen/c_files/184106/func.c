/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184106
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
        {
            var_18 &= ((/* implicit */_Bool) ((((long long int) min((((/* implicit */long long int) arr_5 [10LL])), (var_2)))) + (((long long int) arr_1 [i_1 + 1] [i_0 + 1]))));
            var_19 = ((/* implicit */long long int) ((_Bool) arr_0 [i_1] [i_0 + 2]));
        }
        for (long long int i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3570071237687922734LL)) ? (((/* implicit */long long int) var_3)) : (1954301751590161730LL)))) ? (((var_14) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0 + 2]))))))));
            var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_8 [i_0 - 1] [i_2 - 1] [i_2 + 4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && ((_Bool)1)))) : (((/* implicit */int) ((_Bool) var_14)))));
            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_17)) ? (var_10) : (((/* implicit */long long int) arr_2 [i_2])))))))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_2 + 3]))) && (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(arr_2 [i_0 + 1])))) ^ (((((/* implicit */_Bool) var_1)) ? (var_1) : (arr_8 [i_0] [12LL] [i_3])))));
                arr_14 [10LL] [8LL] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_14)) ? (arr_3 [i_0] [i_0 - 1]) : (var_17))) | (((/* implicit */long long int) arr_9 [i_2] [i_2 + 1] [i_3 + 2])))), (((/* implicit */long long int) arr_9 [i_0 + 1] [i_2 + 2] [i_3 + 1]))));
            }
        }
        arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1] [i_0 + 1]) * (arr_0 [i_0 + 1] [i_0 + 2])))) ? (495714350U) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2166057136U)))));
    }
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3064791611U)) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    var_26 = ((((((/* implicit */_Bool) 3064791611U)) ? (5932635406941015329LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (-5711069054448616878LL));
}
